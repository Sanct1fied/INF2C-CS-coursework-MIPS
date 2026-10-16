#include "task7.h"

static int run(const char *filename, const char *destination)
{
	char input[BUFFER_SIZE], output[BUFFER_SIZE];
	int n = loadFile(filename, input, BUFFER_SIZE);
	if (n < 0)
		return 1;
	/* A final line ending is a file delimiter, not part of the string. */
	if (n && input[n - 1] == '\n')
		input[--n] = 0;
	if (n && input[n - 1] == '\r')
		input[--n] = 0;
	n = task7(input, output);
	if (n < 0)
		return 1;
	return saveFile(destination, output, n) != 0;
}
int main(void) { return run("input.txt", "output.txt"); }