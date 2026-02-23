#include <stdio.h>

int main(){
	
	// Declare
	char s[3] = "%s";
	char prnt[101];
	
	// Input 
	scanf("%[^\n]", prnt);
	
	// Output
	printf("#include <stdio.h>\n");
	printf("int main()\n");
	printf("{\n");
	printf("    printf(\"%s\\n\",\"%s\");\n", s, prnt);
	printf("    return 0;\n");
	printf("}\n");
	
	return 0;
}
