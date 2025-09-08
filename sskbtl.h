#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//satkar-sanyam ki bahut tagdi library

void swap(int *a, int *b) {
    int temp=*a;
    *a=*b;
    *b=temp;
}

void bubblesort(int arr[]) {
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n-1;j++) {
        for(int i=0;i<n-1-j;i++) {
            if (arr[i]>arr[i+1]) {
                arr[i] = arr[i+1]+arr[i]-(arr[i+1]=arr[i]);
            }
        }
    }
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
}
