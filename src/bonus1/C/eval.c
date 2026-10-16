#include "bonus1.h"

static int run(const char *filename) {
    char input[BUFFER_SIZE];
    int n = loadFile(filename, input, BUFFER_SIZE);
    if (n < 0) return 1;
    printInt(bonus1(input));
    printLn();
    return 0;
}
int main(int argc, char **argv) {
    if (argc != 2) return 1;
    return run(argv[1]);
}
