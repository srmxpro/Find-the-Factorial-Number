#include<stdio.h>
int main()
{
	int n,i,fact=1;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	i=n;
	while (i>=1)
	{
		fact=fact*i;
		i--;
	}
	printf("%d",fact);
	return 0;
}