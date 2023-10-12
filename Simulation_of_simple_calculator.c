#include <stdio.h>
int main()
{
	printf("1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n 5. Remainder\n");
	
	int a, b;
	int op;
	
	printf("Enter the values of a and b: ");
	scanf("%d %d", &a, &b);
	printf("Enter your choice : ");
	scanf("%d", &op);
	
	switch(op)
	{
		case 1:
			printf("Sum of %d and %d is %d ", a, b, a+b);
			break;
		case 2:
			printf("Difference between %d and %d is %d ", a, b, a-b);
			break;
		case 3:
			printf("Product of %d and %d is %d", a, b, a*b);
			break;
		case 4:
			printf("Quotient of %d and %d is %d", a, b, a/b);
			break;
		case 5:
			printf("Remainder of %d and %d is %d", a, b, a%b);
			break;
		default:
	printf("Enter your CORRECT Choice: ");
	
	return 0;		
	}
		
}
