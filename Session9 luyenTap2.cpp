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
    printf("Select position you want to change: ");
    scanf("%d",&position);
    printf("Input new value: ");
    scanf("%d",&value);
    arr[position]=value;
    for(int i=0;i<n;i++){
            printf("[%d]",arr[i]);
            }
}
