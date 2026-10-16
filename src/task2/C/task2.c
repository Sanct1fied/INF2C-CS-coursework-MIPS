#include "task2.h"

void task2(int rows)
{
	// This loop traverses the
	// pyramid from top to bottom
	for (int i = 0; i < rows; i++)
	{
		// Inner loop for printing
		// character in each rows
		for (int j = 0; j <= i; j++)
		{
			if (j) printChar(' ');
			printChar('*');
		}
		printLn();
	}
}
