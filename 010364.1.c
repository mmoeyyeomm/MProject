#include<stdio.h>
float score[20] = {};
int n = 0;

float avg();

int main(void){
	int i;
	// input here
	scanf("%d", &n);
	printf("Total number of student = %d\n", n);
	for(i = 0; i < n; i++){
		scanf("%d\n", &score[i]);
	}
	printf("Average = %f", avg());
	return 0;
}

float avg(){
	float average = 0.0;
	float sum = 0.0;
	int i;
	for (i = 0; i < n; i++){
		sum = sum + score[i];
	}
	
	return average;
}

/*
(1) input 2 score and number of student
(2) compute average in score[] ; write in function
(3) show average
*/ 
