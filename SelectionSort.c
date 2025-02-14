#include<stdio.h>
void swap(int *a, int *b){
	//swaps both the elements recived from selectionSort.
	int temp=*a;
	*a=*b;
	*b=temp;
}
void selectionSort(int size,int *a){
	int i,j;
	for(i=0;i<size;i++){
		//this loop iterates to increase the count of the each pass.
		int min_index=i;
		for(j=i+1;j<size;j++){
			// This loop iterates to run through the array.
			if(a[in]>a[j]) {
				// This condition is used check to all the adjacent elements of the array pairwise.
				// if the first element is larger than the second element this condition is satisfied.
				// as the condition is satisfied int intial index is replaced with 'j' as new min index
				min_index=j;
			}
		}
		swap(&a[i],&a[min_index]);
	}
}
int main()
{
	int x,f;
	scanf("%d %d",&x, &f);
	int a[x];
	int i,j;
	for(i=0; i<x; i++){
		// reading the array
		scanf("%d", &a[i]);
	}

		//function call.
		selectionSort(x,a);
		for(i=0; i<x;i++){
			// printing the sorted array.
		printf("%d ", a[i]);
		// time complexity-- O(n^2)
		// space complexity-- O(1)
	}
		
	}
