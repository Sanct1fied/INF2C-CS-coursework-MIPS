#include "task3.h"

void task3(int rows) {
	// Your code here to implement the functionality for task3
	// Empty diamond pattern given number of rows
	if (rows < 0){
		return;
	}
	int i, j;
	for (i = 0; i < 2 * rows - 1; i++){
		int k;
		if (i < rows){
			k = i;      //top half
		} else {
			k = 2*rows-2-i; //bottom half
		}
		int left = rows - k-1;
		int right = rows +k-1;

		for (j = 0; j <= right; j++){
			
			if (j == left){
				printChar('*');
			} else if (j == right){
				printChar(' ');
				printChar('*');
			}else {	
				printChar(' ');
				printChar(' ');
			}
		}
		printLn();
	}
}

/*

      *
    *   *
  *       *
*           *
  *       *
    *   *
      *
*/