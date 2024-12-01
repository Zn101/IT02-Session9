#include <stdio.h>
int main(){
    int arr[100]; //mang
    int n, position, value;
    printf("1.Enter array \n");
	printf("2.Show array \n");
	printf("3.Add element \n");
    printf("4.Change element \n");
	printf("5.Delete element \n");
	printf("6.Exit \n");
    int menu;
    printf("Your choice: ");
    scanf("%d",&menu);
    while(menu>6){ //neu menu chon khac 6 thi hoi lai
        printf("Your choice: ");
        scanf("%d",&menu);
    }
    while(menu<6){
        switch(menu){
            case 1: 
                printf("Select number of elements in array: ");
                scanf("%d",&n);
                for(int i=0;i<n;i++){
                printf("Input elemet number %d: ",i + 1);
                scanf("%d",&arr[i]);
                    }
                break;
            case 2:
                for(int i=0;i<n;i++){
                printf("[%d]",arr[i]);
                    }
                printf("\n");
                break;
            case 3:
                printf("Select position you want to add: ");
                scanf("%d",&position);
                printf("Input new value: ");
                scanf("%d",&value);
                for(int i=n;i>position;i--){ //vong lap chay tu cuoi mang den vi tri can thay
                        arr[i] = arr[i - 1]; //phan tu sau = phan tu truoc
                    }
                arr[position]=value; //them vao vi tri can thay
                n++; //tang do dai mang 
                break;
            case 4:
                printf("Select position you want to change: ");
                scanf("%d",&position);
                printf("Input new value: ");
                scanf("%d",&value);
                arr[position]=value;
                break;
            case 5:
                printf("Seclect position you want to delete in the array: ");
                scanf("%d",&position);
                for(int i=position;i<n-1;i++){ //vong lap chay tu dau mang den vi tri can xoa
                        arr[i]=arr[i+1]; //phan tu truoc = phan tu sau
                    }
                n--; //giam do dai mang
            }
        printf("Your choice: "); //hoi lai cho den khi chon 6. thoat
        scanf("%d",&menu);
    }
}
