#include <stdio.h>
int sum (int a);
int sum(int num)
{
	if (num!=0)
	{
		return (num%10+sum( num/10));
	}
	else
	{
		return 0;
	}
}
int main()
{
	int num,result;
	printf("enter the number=");
	scanf("%d",&num);
	result=sum(num);
	printf("\n sum of digits : %d",result);
	return 0;
}
