#include "task6.h"
#include <stdio.h>
int task6(const char *input, char *output) {
	int i = 0;
	while (input[i] != '\0'){
		int j;
		if (input[i] == '/' && input[i+1] == '/'){ //check when there is a comment
			for (j = i; ;j++){ //find where the next newline is
				if (input[j] == '\n'){
					i = j;
					break;
				}
			}
		}
		if (input[i] == '/' && input[i+1] == '*'){
			int brackets = 0; 									//this is to count the number of open brackets
			for (j = i; ;j++){ 									//find where the next */ is
				if (input[j] == '*' && input[j+1] == '/'){
					brackets--; 								//if we find close brackets we minus 1
					if (brackets == 0) { 		//when all the open brackets are closed we break the loop and move the pointer along.
						i = j+2;
						break;
					}
				}
				else if (input[j] == '/' && input[j+1] == '*'){
					brackets++; 		//if we find more open brackets we add 1
				}
			}
		}
		output[i] = input[i];
		i++;
	}
	return -1;
}
