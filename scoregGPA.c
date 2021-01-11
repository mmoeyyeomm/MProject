#include<stdio.h>

int main(void){
		int score = 0;
	scanf("%d", &score);
	if(score >= 80){
		printf("good\n");
		printf("4\n");
	} else if(score >= 70){
		printf("3\n");
	} else if(score >= 60){
		printf("2\n");
	}  else if(score >= 50){
		printf("1\n");
	} else{
		printf("0");
	}
	
	return 0;
}



/*
4 >= 80
3 >= 70 < 80
2 >= 60 < 70
1 >= 50 < 60
0 < 50

good >= 80
pass >= 60
fail < 60
*/
