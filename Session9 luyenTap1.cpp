#include <stdio.h>
int main(){
    int arr[100]; //mang
    int n, position, value;
    printf("Select number of elements in array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
            printf("Input elemet number %d: ",i + 1);
            scanf("%d",&arr[i]);
            }
    printf("Select position you want to add: ");
    scanf("%d",&position);
    printf("Input new value: ");
    scanf("%d",&value);
    for(int i=n;i>position;i--){ //vong lap chay tu cuoi mang den vi tri can thay
            arr[i] = arr[i - 1]; //phan tu sau = phan tu truoc
            }
    arr[position]=value; //them vao vi tri can thay
    n++; //tang do dai mang
    for(int i=0;i<n;i++){
            printf("[%d]",arr[i]);
            }
}
