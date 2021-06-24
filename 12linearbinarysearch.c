#include<stdio.h>

int linearSearch(int arr[],int size,int element){
    for(int i=0;i<size;i++)
    {
        if (arr[i]==element){
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[],int size, int element){
    int low,mid,high;
    low=0;
    high=size-1;
    //keep searching until low<=high
    while (low<=high){
    mid=(low+high)/2;

    if (arr[mid]==element){
        return mid;
    }
    if (arr[mid]<element){
        low=mid+1;
    }
    else{
        high=mid+1;
    }}
    //searching ends
    return -1;
}



int main(){
    //unsorted array for linear search
    //int arr[]={1,3,4,56,7,4,443,252,564,463};
    //int size = sizeof(arr)/sizeof(int);


    //sorted array for binary search
    int arr[]={1,3,4,5,6,7,43,252,564,634};
    int size = sizeof(arr)/sizeof(int);
    int element= 4;
    int searchIndex=linearSearch(arr,size,element);
    printf("The element %d was found at index %d \n", element,searchIndex);
    return 0;
}
