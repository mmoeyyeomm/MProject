#include<stdio.h>

int main(void){
	int score, i, j, n, total;
	total = 0;
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		printf("Student [%d]\n", i + 1);
		for(j = 0; j < 4; j++){
			scanf("%d", &score);
			total = total + score;
		}
		printf("Score = %d", total);
	}
}
