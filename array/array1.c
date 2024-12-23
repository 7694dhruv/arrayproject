#include<stdio.h>

void main(){
            //  int arr[]={1,2,3,4};

            //  int leng;

            // leng=sizeof(arr)/sizeof(arr[0]);

            // printf("%d",leng); 

        int size;

        printf("enter your number:");
        scanf("%d",&size);

        int arr[size];

        for (int i = 0; i < size; i++)
        {
            printf("array [%d]=",i);
            scanf("%d", &arr[i]);
        }

        printf("array size is: %d",size);
        
}