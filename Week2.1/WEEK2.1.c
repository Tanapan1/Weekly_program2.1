#include<stdio.h>
int main() {
	int n;
	while(1) 
	{
		printf("Enter number : ");
		scanf_s("%d", &n);
		if (n == -99) break;
		else if ((n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0) && (n != 2 && n != 3 && n != 5 && n != 7))
		{
			printf("%d is not prime number\n", n);
		}
		else printf("%d is prime number\n", n);
	}
	return 0;
}