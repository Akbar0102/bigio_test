#include <stdio.h>
#include <string.h>

int main(){
	int i;
	char str[50];
	scanf("%s", &str);
	
	for(i=0; i<strlen(str); i++){
		printf("%c", str[i]);
	}
	
	for(i=strlen(str)-1; i>0; i--){
		printf("%c", str[i-1]);
	}
	
	return 0;
}