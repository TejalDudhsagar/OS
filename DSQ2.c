#include <math.h>
#include <stdio.h>
void insertionSort(int arr[], int n);
void display(int arr[], int n);
void insertionSort(int arr[], int n)
{
    int i,j;
    int key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i-1;
 
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 

void display(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d,", arr[i]);
    printf("\n");
}
 

int main()
{
    printf("Elements to be sorted are:\n67,12,45,35,89,26,51,7,93");
    int arr[] = { 67,12,45,35,89,26,51,7,93 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    insertionSort(arr, n);
    printf("\nSorted elements are:\n");
    display(arr,n);
 
    return 0;
}
