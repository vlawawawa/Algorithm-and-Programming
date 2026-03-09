#include <stdio.h>

int main(){
	
	// Declare
		char id[11], name[101], kelas;
		int num;
	
	// Input
		scanf("%s\n", id);
		scanf("%[^\n]\n", name);
		scanf("%c %d", &kelas, &num);
	
	// Output
		printf("%-5s : %s\n","Id", id);
		printf("%-5s : %s\n","Name", name);
		printf("%-5s : %c\n","Class", kelas);
		printf("%-5s : %d\n","Num", num);
		
	
	
	return 0;
}
