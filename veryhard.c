#include<stdio.h>

int main(void){
	float score, sum = 0.0;
	int i;
	for(i = 0; i < 5; i++){
		scanf("%f", &score);
		sum += score; //sum =  sum + score
	}
	printf("%f", sum/5);
	return 0;
}
