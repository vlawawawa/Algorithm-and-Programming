#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sort(short left, short mid, short right, char** str) {
    short sL = (mid + 1) - left;
    short sR = right - mid;

    char* strL[sL];
    char* strR[sR];

    for (short i = 0; i < sL; i++) strL[i] = str[left + i];
    for (short j = 0; j < sR; j++) strR[j] = str[mid + 1 + j];

    short i = 0, j = 0, k = left;
    while(i < sL && j < sR){
        if(strcmp(strL[i], strR[j]) < 0) str[k] = strR[j++];
        else str[k] = strL[i++];
        k++;
    }

    while (i < sL) str[k++] = strL[i++];
    while (j < sR) str[k++] = strR[j++];
}

void sort_row(short left, short right, char** str){
	
	if(left >= right) return;
	
	short mid = left + (right - left) / 2;
	
	sort_row(left, mid, str);
	sort_row(mid + 1, right, str);
	
	sort(left, mid, right, str);
}

void swap_char(char* a, char* b){
	
	char temp = *a;
	*a = *b;
	*b = temp;
}

void sort_col(short len, char* str){
	
	for(short i = 0; i < len; i++)
		for(short j = 0; j < len - i; j++)
			if(str[j] > str[j + 1]) swap_char(&str[j], &str[j + 1]);
}

int main(){
	
	// Input
		short numstr, lenstr;
		scanf("%hd %hd", &numstr, &lenstr);
		char** str = (char**)malloc(sizeof(char*) * numstr);
		for(short i = 0; i < numstr; i++){
			str[i] = (char*)malloc(sizeof(char) * lenstr + 1);
			scanf(" %s", str[i]);
			
			//Process 1
			sort_col(lenstr - 1, str[i]);
		}
	
	// Process 2
		sort_row(0, numstr - 1, str);
		
	// Output
		for(short i = 0; i < numstr; i++)
			printf("%s\n", str[i]);
	
		for (int i = 0; i < numstr; i++)
        	free(str[i]);
		free(str);
		
		
	
	return 0;
}

