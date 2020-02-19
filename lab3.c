#include<stdio.h>
#include<time.h>

void selection(int a[],int n)
{
clock_t start, end;
double time_used;
int min,i,j,t;
start = clock();
for(i=0;i<n-2;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(a[j]<a[min])
min=j;
}
t=a[i];
a[i]=a[min];
a[min]=t;
}
end = clock();
     time_used = ((double)(end - start))/ CLOCKS_PER_SEC;
     time_used=1000000*time_used;
     printf("TIME TAKEN IN MILLISECONDS: %f\n",time_used);
printf("Array in sorted manner:\n");
for(i=0;i<n;i++)
{
printf("%d  ",a[i]);
}
}
void main()
{
int l,i,key;
int arr[10];

printf("Enter length of array\n");
scanf("%d",&l);
printf("Enter array elements\n");
for(i=0;i<l;i++)
scanf("%d",&arr[i]);


selection(arr,l);

}
