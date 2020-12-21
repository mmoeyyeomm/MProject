#include<stdio.h>
#include<conio.h>
int main(void){
	int n = 0;
	while (n != 2){
	printf("Select Menu");
	printf("\n(1) Hello Janyamon");
	printf("\n(2) END");
	scanf("%d", &n);
	if(n == 1){
		printf("\nHello Janyamon\n");
		}
	}
	return 0;
}
