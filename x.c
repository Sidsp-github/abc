#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j,n,max1 = -1,max2 = -1;
	int *arr,*brr;
	
	scanf("%d",&n);
	
	arr = malloc(n*sizeof(int));
	brr = malloc(n*sizeof(int));
	
	for(i=0;i<n;i++)
	{
		scanf("%d",arr+i);
		if(max1<*(arr+i))	
	max1 = *(arr+i);
	}
	
	
	for(j=0;j<n;j++)
	{
	scanf("%d",brr+j);
	
	if(max2<*(brr+j))	
	max2 = *(brr+j);	
	}
	
	if(max1>max2)
	printf("%d",max2);
	else
	printf("%d",max1);
}
