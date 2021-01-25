#include<stdio.h>

void main()
{
	int x, p, f;
	char grade;
	p = 0;
	f = 0;
	scanf("%d", &x);
	if(x >= 50)
	{
		grade = 'P';
		p++;
	}
	else
	{
		grade = 'F';
		f++;
	}
	return 0;
}
