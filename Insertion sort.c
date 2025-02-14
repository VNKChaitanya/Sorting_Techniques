#include<stdio.h>
void insertionsort(int *a,int size){
	int i;
	for(i=1;i<size;i++){
		//This loop iterates to run through the elements of the array
		int j=i-1;
		//Duplicating the value that needs to be inserted.
		int temp= a[i];
		while(j>=0 && a[j]> temp){
			//This loop is used to move all the elements from right to left.
			a[j+1]=a[j];
			j--;
		}
		// inserting the copied integer in the new and suitable position for the array.
		a[j+1]=temp;
	}
}
int main()
{
	int x;
	scanf("%d",&x);
	int a[x];
	int i;
	for(i=0; i<x; i++){
		//reading the array.
		scanf("%d", &a[i]);
	}
	insertionsort(a,x);
	for(i=0; i<x; i++){
		//printing the sorted array.
		printf("%d ", a[i]);
	}
			// time complexity-- O(n^2)
		// space complexity-- O(1)
}
	

