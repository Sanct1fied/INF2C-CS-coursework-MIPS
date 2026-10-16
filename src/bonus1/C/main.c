#include "bonus1.h"

static int run(const char *filename) {
    char input[BUFFER_SIZE];
    int n = loadFile(filename, input, BUFFER_SIZE);
    if (n < 0) return 1;
    printInt(bonus1(input));
    printLn();
    return 0;
}
int main(void) { return run("input.txt"); }
