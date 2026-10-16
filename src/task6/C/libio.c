#include "libio.h"
#include <stdio.h>
void printChar(int ch) { putchar(ch); }
void printInt(int value) { printf("%d", value); }
void printString(const char *text) { printf("%s", text); }
void printLn(void) { printChar('\n'); }
int readInt(void) { int value = 0; scanf("%d", &value); return value; }
int readString(char *buffer, int capacity) {
    int n = 0, ch;
    while ((ch = getchar()) != EOF && ch != '\n') {
        if (n + 1 >= capacity) return -1;
        buffer[n++] = (char)ch;
    }
    if (n && buffer[n - 1] == '\r') --n;
    buffer[n] = 0;
    return n;
}
int loadFile(const char *filename, char *buffer, int capacity) {
    FILE *file = fopen(filename, "rb");
    int n = 0, ch;
    if (!file) return -1;
    while ((ch = fgetc(file)) != EOF) {
        if (n + 1 >= capacity) { fclose(file); return -1; }
        buffer[n++] = (char)ch;
    }
    int failed = ferror(file);
    fclose(file);
    buffer[n] = 0;
    return failed ? -1 : n;
}
int saveFile(const char *filename, const char *buffer, int length) {
    FILE *file = fopen(filename, "wb");
    if (!file) return -1;
    int failed = fwrite(buffer, 1, (size_t)length, file) != (size_t)length;
    if (fclose(file) != 0) failed = 1;
    return failed ? -1 : 0;
}
