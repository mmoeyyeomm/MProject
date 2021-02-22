#include<stdio.h>

int main(void){
	int score, j, total;
	total = 0;
		for(j = 0; j < 2; j++){
			scanf("%d", &score);
			total = total + score;
		}
		printf("Score = %d", total);
	}

