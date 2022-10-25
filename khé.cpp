#include <cstdio>
struct Array{
    int A[10], size, length;
};
void Display(struct Array arr){
    int i; printf("\nElements are\n");
    for(i=0;i<arr.length;i++)
        printf("%d ", arr.A[i]);
}void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}int Get(struct Array arr,int index){
    if(index>=0&&index<arr.length)
        return arr.A[index];
    return -1;
}void Set(struct Array *arr,int index, int x){
    if(index>=0&&index<arr->length)
        arr->A[index]=x;
}int Max(struct Array arr){
    int max=arr.A[0], i;
    for(i=1;i<arr.length;i++){
        if(arr.A[i]>max)
            max=arr.A[i];
    }return max;
}int Min(struct Array arr){
    int min=arr.A[0], i;
    for(i=1;i<arr.length;i++){
        if(arr.A[i]<min)
            min=arr.A[i];
    }return min;
}int Sum(struct Array arr){
    int s=0, i;
    for(i=0;i<arr.length;i++)
        s+=arr.A[i];
    return s;
}float Avg(struct Array arr){
    return (float)Sum(arr)/arr.length;
}

int LinearSearch(struct Array *arr, int key){
    int i;
    for(i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            swap(&arr->A[i], &arr->A[0]);
            return i;
        }
    }return -1;
}int BinarySearch(struct Array arr,int key){
    int mid, h=arr.length-1, l=0;
    while(l<=h){
        mid=(l+h)/2;
        if(key==arr.A[mid])
            return mid;
        else if(key<arr.A[mid])
            h=mid-1;
        else
            l=mid+1;
    }return -1;
}int RBinSearch(int a[],int l, int h,int key){
    int mid=0;
    if(l<=h){
        mid=(l+h)/2;
        if(key==a[mid])
            return mid;
        else if(key<a[mid])
            return RBinSearch(a,l,mid-1,key);
    }else{
        return RBinSearch(a, mid+1,h, key);
    }return -1;
}

int main(){
    struct Array arr = {{2,3,9,16,18,21,28,32,35},10,9};
    printf("%d", Sum(arr));
    Display(arr);
    return 0;
}
