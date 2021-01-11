#include<stdio.h>

int main(void){
	int score = 0;
	scanf("%d", &score);
	if(score >= 80){
		printf("good\n");
	} else if(score >= 60){
		printf("pass\n");
	} else
		printf("fail");
	return 0;
}

/*
good >= 80
pass >= 60
fail < 60
*/
