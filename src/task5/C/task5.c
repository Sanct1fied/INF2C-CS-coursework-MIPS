#include "task5.h"
#include <stdio.h>

int mystrlen(const char *s){
    const char *p = s;
    while(*p++ != '\0');
    return p - s - 1;
}

int task5(const char *str1, const char *str2) {
	int lenstr1 = mystrlen(str1);
	int lenstr2 = mystrlen(str2);
	int matches = 0;
	int i,j;
	if (lenstr1 == 0 || lenstr2 > lenstr1){return 0;}
	for (i = 0; i < lenstr1 ;){//iterate through the bigger string
		//i++ ; //but iterate after the loop starts
		for (j =0; j < lenstr2 ;j++){ //iterate through the smaller string
			if (str2[j] == str1[i]){ //if the characters match, we continue matching
				i++;
				matches++;
			} else { //if they don't we start the smaller string again
				break;
			} //if we make it through the full smaller string then we have found a match
		}
	}
	return matches/lenstr2;

	return -1;
}
