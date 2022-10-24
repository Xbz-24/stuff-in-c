#include <iostream>
#include <cstdio>
#define length len
using namespace std;
int i;
struct Array{
    int A[10];
    int size;
    int len;
};
void Display(struct Array arr);
void Append(struct Array *arr, int x);
void Insert(struct Array *arr,int index,int x);
int main()
{
    struct Array arr = {{2,3,4,5,6}, 10 , 5};
    Insert(&arr,5,10);
    Display(arr);
    return 0;
}
void Display(struct Array arr)
{
    printf("\nElements are\n");
    for(i=0;i<arr.len;i++){
        printf("%d ",arr.A[i]);
    }
}
void Append(struct Array *arr, int x){
    if(arr->len < arr->size){
        arr->A[arr->len++]=x;
    }
}void Insert(struct Array *arr,int index,int x){
    if(index>=0&&index<=arr->length){
        for(i=arr->length;i>index;i--)
            arr->A[i]=arr->A[i-1];
        arr->A[index]=x;
        arr->length++;
    }
}
