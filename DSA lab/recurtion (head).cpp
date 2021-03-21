#include<stdio.h>
#include<conio.h>
void function(int n)
{
	if(n>0)
	{
		function(n-1);
		printf("%d\n",n*2);
		
	}
	
}
int main()
{
	int n;
	printf("value of n\n");
	scanf("%d",&n);
	
	function(n);
	
}
