#include<stdio.h>
int main()
{
	int size,a[100],i,j,key;
	
	printf("Enter the Size and array of the elements:");
	scanf("%d", &size);
	for(i=1;i<=size;i++)
	{
		scanf("%d", &a[i]);
	}
	for(j=2;j<=size;j++)
	{
		key=a[j];
		i=j-1;
		while(i>0 and a[i]>key)
		{
			a[i+1]=a[i];
			i=i-1;
			a[i+1]=key;
		}
	}
	printf("Sorted array:\n");
	for(i=1;i<=size;i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}

