#include<stdio.h>
int partition(int *a,int ind,int start,int end){
	// taking the pivot value
    int key= a[ind];
    // two index pointers for start and end.
	int s=start, e= end;
	while(s<e){
		//this loop iterates till start becomes bigger than end.
		while(a[s]<=key) s++;
		// increments s till it finds an element bigger than key.
		while(a[e]>key) e--;
		// decrements e till it finds an element smaller than key.
		if(s<e){
			// swaps the elements satisfing the top 2 conditions.
			int temp= a[s];
			a[s]= a[e];
			a[e]= temp;
		}
	}
	// swaping the last small element with the pivot element.
	    int temp= a[ind];
    a[ind]= a[e];
    a[e]=temp;
	return e;
}

void quicksort(int *a,int start,int end){
	if(start<end)
	{
		//taking a pivot element.
		int p= start;
		// partioning the array based on the pivot element and storing the new position of pivoted element.
		p= partition(a,p,start,end);
		// repeating the process with the left side of the elements of pivot.
		quicksort(a,start,p-1);
		// repeating the process with the right side of the elements of pivot.
		quicksort(a,p+1,end);
	}
}
int main(){
	int x,i;
	scanf("%d",&x);
	int arr[x];
	for(i=0;i<x;i++){
		scanf("%d", &arr[i]);
	}
	quicksort(arr,0,x-1);
	for(i=0;i<x;i++){
		printf("%d ", arr[i]);
	}
	// time complexity average case-- O(nlogn)
	// worst case -- o(n^2).
	// space O(1).
}
