#include<stdio.h>
void swap(int *a,int *b)
{
	int t = *a;
	*a=*b;
	*b=t;
}

int partition(int arr[],int low,int high)
{
	int pivot=arr[high];
	int j;
	int i=low-1;
	for(j=low;j<high;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[high]);
	return (i+1);
}

void quicksort(int arr[],int low,int high)
{
	int q;
	if (low<high)
	{
		q=partition(arr,low,high);
		
		quicksort(arr,low,q-1);
		quicksort(arr,q+1,high);
	}
}


int main()
{
	int arr[]={15,10,13,9,12,7};
	int n,i;
	n=sizeof(arr)/sizeof(int);
	quicksort(arr,0,n-1);
	printf("sorting array :-");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}




