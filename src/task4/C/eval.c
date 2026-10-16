#include "task4.h"

int main(void)
{
	char a[BUFFER_SIZE], b[BUFFER_SIZE];
	if (readString(a, BUFFER_SIZE) < 0 || readString(b, BUFFER_SIZE) < 0)
		return 1;
	printInt(task4(a, b));
	printLn();
	return 0;
}