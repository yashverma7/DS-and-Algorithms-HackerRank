
#include<stdio.h>
//display function to print elements in array
void display(int arr[],int n){
    //Traversal
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}

indDeletion(int arr[],int size,int index){
//deletion

//shifting elements
    for (int i=index; i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
}


int main(){
    int arr[100]={1,2,6,78};
    int size=4,index=3;
    display(arr,size);
    indDeletion(arr,size,index);
    size-=1;
    //the size is reduced after a deletion
    display(arr,size);
    return 0;
}
