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
    printf("Seclect position you want to delete in the array: ");
    scanf("%d",&position);
    for(int i=position;i<n-1;i++){ //vong lap chay tu dau mang den vi tri can xoa
            arr[i]=arr[i+1]; //phan tu truoc = phan tu sau
            }
    n--; //giam do dai mang
    for(int i=0;i<n;i++){
            printf("[%d]",arr[i]);
            }
}
