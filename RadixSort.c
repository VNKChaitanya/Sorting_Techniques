#include<stdio.h>
#include<math.h>
int maximum(int *a,int size){
	// finding the max element.
	int m= a[0],i;
	for(i=1;i<size;i++){
		if(m<a[i]) m=a[i];
	}
	return m;
}
void radixSort(int *a, int size){
	int max_element= maximum(a,size); 
	// finding the max element.
	int digits_max= log10(max_element)+1;
	// no. of digits of the max element( total passes for the radix sort).
	int divider= 1;
	// divider is used to divide the element to find the last digit.
	int bucket[10][size];
	// bucket to place the all elements based on the digits.
	int i;
	while(digits_max--){
		int bucket_count[10]={0};
		// count the no. of elements in each buckets
		for(i=0;i<size;i++){
			int l= (a[i]/divider)%10;
			// gets the units, tens, hundreds etc, digit.
			bucket[l][bucket_count[l]++]= a[i];
			// store that number in the bucket.
		}
		divider*=10;
		// increment divider to take the digit in next pass.
		int rows,col,ind=0;
		for(rows=0;rows<10;rows++){
			// reconstruction.
			for(col=0;col<bucket_count[rows];col++){
				a[ind++]= bucket[rows][col];
			}
		}
				
	} 
}
int main(){
	int size;
	scanf("%d",&size);
	int arr[size];
	int i;
	for(i=0;i<size;i++){
		scanf("%d", &arr[i]);
	}
	radixSort(arr,size);
	for(i=0;i<size;i++){
		printf("%d ", arr[i]);
	}
	// time complexity -- o(n)*O(log10(maximum_number)+1).
	// space-- O(n).
}
