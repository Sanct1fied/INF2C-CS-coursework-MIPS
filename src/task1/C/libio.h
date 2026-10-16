#ifndef LIBIO_H
#define LIBIO_H
/* Supplied I/O helpers: do not change these for your submission. */
#define BUFFER_SIZE 65536
void printChar(int ch);
void printInt(int value);
void printString(const char *text);
void printLn(void);
int readInt(void);
int readString(char *buffer, int capacity);
int loadFile(const char *filename, char *buffer, int capacity);
int saveFile(const char *filename, const char *buffer, int length);
#endif
