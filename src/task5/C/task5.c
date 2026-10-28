#include "task5.h"

int mystrlen(const char *s){ //we went through this in lecture so i hope its ok i use it
    const char *p = s;       //it makes this task considerably easier
    while(*p++ != '\0');
    return p - s - 1;
}

int task5(const char *str1, const char *str2) {
	int lenstr1 = mystrlen(str1);
	int lenstr2 = mystrlen(str2);
	int matches = 0;
	int i,j;
	if (lenstr1 == 0 || lenstr2 > lenstr1){return 0;} //if main string is "" or if the substring is bigger also return 0
	for (i = 0; i <= lenstr1 - lenstr2 ;i++){//iterate through the bigger string
		for (j =0; j < lenstr2 ;j++){ //iterate through the smaller string
			if (str2[j] != str1[i+j]){ //if the characters don't match, we move to the next i
				break;
			} 
		}
		if (j == lenstr2){ //if we make it through the full smaller string then we have found a match
			matches++;
		}
	}
	return matches;
}
