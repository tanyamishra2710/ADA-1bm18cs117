#include <stdio.h>
void sort(int a[], int n)
{
    int i = 0, j = 0, tmp;
    for (i = 0; i < n; i++)
    {  
        for (j = 0; j < n - i - 1; j++)
         {
            if (a[j] > a[j + 1])
            {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}
int main() 
{
	int a[100], n, i;
	printf("Enter number of elements in the array:\n");
  	scanf("%d", &n);
 	printf("Enter %d elements\n", n);
  	for (i = 0; i < n; i++)
    		scanf("%d", &a[i]);
  	sort(a, n);
  	printf("The sorted Array is:\n");
  	for (i = 0; i < n; i++)
  		printf("%d\n", a[i]);
  	return 0;
}
