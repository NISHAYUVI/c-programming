#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&i);
	n=(i&(i-1));
	if(n==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
  }
