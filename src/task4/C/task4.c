#include "task4.h"
#include <stdio.h>

int strlen(const char*str1){
	int i;
	int count = 0;
	for (i = 0; i < 100; i++){
		if (str1[i] != '\0'){
			count++;
		} else {
			break;
		}
	}
	return count;
}

int task4(const char *str1, const char *str2) {
	int length1 = strlen(str1);
	int length2 = strlen(str2);
	if (length1 != length2){
		return 1;
	} else{
		for (int i = 0; i < length1;i++){
			if (str1[i] != str2[i]){
				return 1;
			}
		}
		return 0;
	}
	return -1;
}
