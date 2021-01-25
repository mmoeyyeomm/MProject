#include<stdio.h>
int g, p, f;
char grade;
void main()
{
	g = p = f = 0;
	puts ("Enter the letter grade : ");
	scanf("%c", &grade);
	switch (grade)
	{
		case 'G' : case 'g' :
			++g;
			break;
		case 'P' : case 'p' :
			++p;
			break;
		case 'F' : case 'f' :
			++f;
			break;
		default :
			printf("Out of range ");
	}
	puts ("End of program");
}
