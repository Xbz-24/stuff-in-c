#incldue <cstdio>
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
}int LinearSearch(struct Array *arr, int key){
    int i;
    for(i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            swap(&arr->A[i], &arr->A[0]);
            return i;
        }
    }return -1;
}int main(){
    struct Array arr = {{2,23,14,5,6,9,8,12},10,8};
    printf("%d", LinearSearch(&arr, 14);
    Display(arr);
    return 0;
}
