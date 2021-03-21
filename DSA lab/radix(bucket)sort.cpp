#include<stdio.h>
void bucket(int a[])
{
	int max,digit=0,pass;
	int neb[10];
	int r[10][10];
	int loc,div=1,i,j,k=0;
	max=a[0];
	for (i=1;i<6;i++)
	{
		if (a[i]>max)
		{
			max=a[i];
		}
	}
	while(max>0)
	{
		digit++;
		max=max/10;
	}
	for (pass=1;pass<=digit;pass++)
	{
		for(i=0;i<10;i++)
		{
			neb[i]=0;
		}
		for(i=0;i<6;i++)
		{
			loc=(a[i]/div)%10;
			r[loc][neb[loc]++]=a[i];
		}
		for (i=0;i<10;i++)
		{
			for(j=0;j<neb[i];j++)
			{
				a[k]=r[i][j];
				k++;
				
			}
		}
		div=div*10;
	}
	
}

int main()
{
	int i;
	int a[]={66,98,105,61,54,136};
	bucket(a);
	for (i=0;i<6;i++)
	{
		printf("%d\t",a[i]);
	}
	
}
