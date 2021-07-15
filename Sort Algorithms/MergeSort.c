/* C program for Merge Sort */
#include<stdlib.h> 
#include<stdio.h> 
  
// Merges two subarrays of arr[]. 
// First subarray is arr[l..m] 
// Second subarray is arr[m+1..r] 
void merge(int arr[], int p, int q, int r) 
{ 
    int i, j, k; 
    int n1 = q- p + 1; 
    int n2 =  r - q; 
  
    /* create temp arrays */
    int L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[p + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[q + 1+ j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = p; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
void mergeSort(int arr[], int p, int r) 
{ 
    if (p < r) 
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        int q = p+(r-p)/2; 
  
        // Sort first and second halves 
        mergeSort(arr, p, q); 
        mergeSort(arr, q+1, r); 
  
        merge(arr, p, q, r); 
    } 
} 
  
/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(int A[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", A[i]); 
    printf("\n"); 
} 
  
/* Driver program to test above functions */
int main() 
{ 
    int arr[6],i,size;
    printf("Enter The Elements:");
    scanf("%d",&size);
    printf("\n");
    for(i=0;i<size;i++)
    {
    	scanf("%d",&arr[i]);
	}

  
    printf("Given array is \n");  
  printArray(arr, size);
    mergeSort(arr, 0, size - 1); 
  
    printf("\nSorted array is \n"); 
    printArray(arr, size); 
    return 0; 
} 
