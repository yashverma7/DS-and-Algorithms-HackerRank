#include<stdio.h>
//display function to print elements in array
void display(int arr[],int n){
    //Traversal
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}

indInsertion(int arr[],int size,int element, int capacity,int index){
//insertion
//if size of arr is greater than the capacity then we cant insert the element

    if (size>=capacity){
        return  -1;
    }
//shifting element
    for (int i=size-1; i>=index;i--)
    {
        arr[i+1]=arr[i];
    }

//inserting the new element
    arr[index]=element;
    return 1;
}


int main(){
    int arr[100]={1,2,6,78};
    int size=4, element=45,index=3;
    display(arr,size);
    indInsertion(arr,size,element,100,index);
    size+=1;
    
   //size is increased so that new element can be inserted within the capactiy
    display(arr,size);
    return 0;
}
