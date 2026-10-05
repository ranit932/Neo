#include<stdio.h>
int main()
{
	int n,c=0,d;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n!=0)
	{
		d=n%10;
		c++;
		n=n/10;
	}
	printf("number of the digit=%d",c);
	return 0;
}
