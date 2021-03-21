#include<stdio.h>
#include<conio.h>
void function(int n)
{
	if(n>0)
	{
		printf("%d\n",n);
		function(n-1);
	}
	
}
int main()
{
	int n;
	printf("value of n\n");
	scanf("%d",&n);
	
	function(n);
	
}
