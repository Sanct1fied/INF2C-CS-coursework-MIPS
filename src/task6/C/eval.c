#include "task6.h"

static int run(const char *filename, const char *destination)
{
	char input[BUFFER_SIZE], output[BUFFER_SIZE];
	int n = loadFile(filename, input, BUFFER_SIZE);
	if (n < 0)
		return 1;
	n = task6(input, output);
	if (n < 0)
		return 1;
	return saveFile(destination, output, n) != 0;
}
int main(int argc, char **argv)
{
	if (argc != 3)
		return 1;
	return run(argv[1], argv[2]);
}