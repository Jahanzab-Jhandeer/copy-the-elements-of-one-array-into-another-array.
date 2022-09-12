#include<stdio.h>
// Write a program in C to copy the elements of one array into another array.
int main () {

    int arr[100];
    int arr2[100];
    int n;
    int i;

    printf("put the number of elements to be stored in the array :");
    scanf("%d" , &n);

    printf("input %d element in the array\n" , n);
    for(i=0; i<n; i++) {
        printf("Elements are %d - : " , i);
        scanf("%d" , &arr[i]);
    }
        for(i=0; i<n; i++) {
        arr2[i] = arr[i];
        }

    printf("Print the elements of first array :");
    for(i=0; i<n; i++) {
    printf(" %d\t" , arr[i]);
    }

        printf("\nprint the elements of the second array :");
        for(i=0; i<n; i++) {
            printf(" %d\t" , arr2[i]);
        }
            printf("\n");
}