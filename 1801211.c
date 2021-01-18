#include<stdio.h>
#include<string.h>

int main(void){
	int i, len = 0;
	char text[30] = "Chonkanyanukoon School";
	// loohcS nookunaynaknohC
	len = strlen(text);
	for(i = 0; len >= i; len--){
		printf("%c",text[len]);
	}
	return 0;
}
