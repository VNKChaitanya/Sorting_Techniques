#include<stdio.h>
void swap(int *a, int *b){
	//swaps both the elements recived from bubbleSort.
	int temp=*a;
	*a=*b;
	*b=temp;
}
void bubbleSort(int size,int *a){
	int i,j;
	for(i=0;i<size;i++){
		//this loop iterates to increase the count of the each pass.
		int f=0;
		// Flag f is used to check if atleast 1 swap is done or not.
		for(j=1;j<size-1;j++){
			//this loop iterates to run through the array.
			if(a[j-1]>a[j]) {
				// This condition is used check to all the adjacent elements of the array pairwise.
				// if the first element is larger than the second element this condition is satisfied.
				// as the condition is satisfied the two elements are swapped.
			swap(&a[j-1],&a[j]);
			f=1;
			}
		}
		if(f==0) {
		break;
		// breaks if no swaps are done -- this reduses the time complexity if the array is sorted before completion of n-1 passes.	
		}
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
		bubbleSort(x, a);
	for(i=0; i<x;i++){
		// printing the sorted array.
		printf("%d ", a[i]);
	}
	// time complexity-- O(n^2)
	// space complexity-- O(1)
	}
