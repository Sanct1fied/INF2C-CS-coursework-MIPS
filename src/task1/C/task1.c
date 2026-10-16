#include "task1.h"

int task1(const char *filename)
{
	// Read the whole file into a buffer
	char buffer[4096];
	int length = loadFile(filename, buffer, sizeof(buffer));
	// Check if the file was opened
	// successfully
	if (length < 0)
	{
		printString("Error opening file");
		return -1;
	}

	// Print the file contents one
	// character at a time, stopping
	// at the NUL byte written by loadFile
	for (int i = 0; buffer[i] != '\0'; ++i)
	{
		printChar(buffer[i]);
	}

	return 0;
}