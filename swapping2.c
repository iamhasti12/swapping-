#include<stdio.h>

 int main ()
{
	int a,b;
	printf("Enter value of A = ");
	scanf("%d",&a);
	printf("Enter value B = ");
	scanf("%d",&b);
	
	printf("\nPrint before swapping the value A=%d\n",a);
	printf("\nPrint before swapping the value B= %d\n",b);
	
	a = a + b;
	b = a - b;
	a = a - b;

	printf("\nPrint after swapping the value A=%d\n",a);
	printf("\nPrint  after swapping the value B= %d\n",b);
	
	
}