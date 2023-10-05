#include <stdio.h>
int main()
{
	int a, b, area;
	printf("Enter side length a: \n");
	scanf("%d", &a);
	
	printf("Enter side length b: \n");
	scanf("%d", &b);
	
	area = a*b;
	
	printf("Area of rectangle is: %d", area);
	
	return 0;
}

