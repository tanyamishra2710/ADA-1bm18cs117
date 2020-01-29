#include<stdio.h>
void main()
{
	int n,l,key,i,j;
	int arr[10],res[10];
	printf("Enter number of test cases\n");
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		printf("Enter size of array and element to be found\n");
		scanf("%d%d",&l,&key);
		printf("Enter array elements\n");
		for(i=0;i<l;i++)
		{
			scanf("%d",&arr[i]);
		}
		for(i=0;i<l;i++)
		{
			if(arr[i]==key)
			{
				res[j]=1;
				break;
			}
		}
		if(i==l)
			res[j]=-1;
	}
	for(i=0;i<n;i++)
	printf("%d\n",res[i]);
}

