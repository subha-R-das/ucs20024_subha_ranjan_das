#include <stdio.h>
 
void quick_sort(int[],int,int);
int partition(int[],int,int);
 // Function to swap the the position of two elements
 void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
  }

void quick_sort(int a[],int l,int h)
{
	int j;
	if(l<h)
	{
		j=partition(a,l,h);
		quick_sort(a,l,j);
		quick_sort(a,j+1,h);
	}
}
 
int partition(int a[],int l,int h)
{
	int pivot,i,j,temp;
	pivot=a[l];
	i=l;
	j=h;
	while (i<j)
{
		do
		{
				i++;
	}
			
		while(a[i]<pivot);
		
		do{
			j--;
		}
		while(pivot<a[j]);
		
		if(i<j)
		{
			swap(&a[i],&a[j]);
		}
	}while(i<j);
	
	a[l]=a[j];
	a[j]=pivot;
	
	return(j);
}
int main()
{
	int a[] = {13,12,5,65,9,4,55};  
int i;  
int n = sizeof(a)/sizeof(a[0]);  
  
quick_sort(a,0, n);  
  
printf("printing sorted elements\n");  
for (i=0; i<n;i++ )  
printf("%d\n",a[i]); 
}
 
