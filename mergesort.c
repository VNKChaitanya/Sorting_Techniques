#include <stdio.h>
void merge(int *left,int *right,int *a,int size){
    int left_size=size/2, right_size=size - left_size;
    int l=0,r=0,i=0;
    while(r< right_size && l< left_size){
    	// loop used to merge the sorted arrays.
        if(left[l]>right[r]){
        	// copies the elements from right to a.
            a[i++]=right[r++];
        }
        else{
        	// copies the elements from left to a.
            a[i++]=left[l++];
        }
    }
    while(r<right_size){
    	// copies the remaining elements from right to a.
        a[i++]=right[r++];
    }
    while(l<left_size){
    		// copies the remaining elements from right to a.
        a[i++]=left[l++];
    }
}
void mergesort(int *a,int size){
    if(size==1) {
    	return;
    	// if the size of the array recived is 1 then its already sorted so no need.
	}
    int left_size=size/2, right_size= size - left_size,i;
    // size of the left array and right array are taken.
    int left[left_size], right[right_size];
    // two arrays are created so that the original array can be broken into two parts
    for(i=0;i<left_size;i++){
    	// coping the left side elements into left array.
        left[i]=a[i];
    }
    for(i=0;i<right_size;i++){
    	// coping the left side elements into right array.
        right[i]=a[i+left_size];
    }
    // the left array is sent to mergesort to break it even furthur
    mergesort(left, left_size);
    // the right array is sent to mergesort to break it even furthur
    mergesort(right,right_size);
    // after the array is broken enough it is merged again without disturbing the order.
    merge(left,right,a,size);
}
int main() {
	// your code goes here
	int x;
	scanf("%d", &x);
	int a[x],i;
	for(i=0;i<x;i++){
	    scanf("%d", &a[i]);
	}
	mergesort(a,x);
	for(i=0;i<x;i++){
	    printf("%d ", a[i]);
	}
	// time complexity-- O(nlongn)
	// space complexity -- O(n)
}


