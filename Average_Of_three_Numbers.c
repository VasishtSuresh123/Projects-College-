#include <stdio.h>
int main()
{
	int A, B, C;
	float Average;
	
	printf("Enter values of A, B, C:  \n");
	scanf("%d %d %d", &A, &B, &C);
	
	Average = (A+B+C)/3;
	
	printf("Average of given 3 numbers is: %f", Average);
	
	return 0;
	
}
