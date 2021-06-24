#include<stdio.h>
#include<stdlib.h>
//this is just a custom data type where we can create functions and allocate memory
//according to our preference
struct myArray{
    int total_size;
//memory to be reserved
    int used_size;
//memory to be used
    int *ptr;
//pointer to the memory allocated
};
//this function takes the adt(abstract data type) we have created as an input
void createArray(struct myArray* a, int tSize, int uSize){
    //(*a).total_size= tSize;//the address is dereferenced through the pointer
    //(*a).used_size= uSize;
    //(*a).ptr = (int*)malloc(tSize*sizeof(int));
//it updates the values in the variables created
    a->total_size= tSize;
    a->used_size= uSize;
    //we use heap instead of stack because stack memory is destroyed after once the
    //createArray is run
    a->ptr = (int*)malloc(tSize*sizeof(int));
//tSize and uSize are the local variables in the function

//* is known as value at operator and & is addressof operator
}

void show(struct myArray *a){
for (int i=0;i<a->used_size;i++)
{
    printf("%d\n",(a->ptr)[i]);
}
}
void setVal(struct myArray *a){
int n;
for (int i=0;i<a->used_size;i++)
{

    printf("Enter element %d\n",i);
    scanf("%d",&n);
    (a->ptr)[i]=n;
    }
}




int main(){
    struct myArray marks;//compiler makes a structure and reserves a memory for the variables
    //we made totalsize , used size and ptr
    createArray(&marks, 10, 2);
    //this updates the values in the array just by taking in the address and allocates
    //memory by the user's choice 10 is reserved and 2 is used
    //it then goes an updates the values
    printf("We are running SetVal now\n");
    setVal(&marks);

    printf("We are running show now\n");
    show(&marks);

//here &marks refers to the address to the structure myArray and gives
    return 0;
}
//other than entering elements , insertion,deletion are important parts of adt
