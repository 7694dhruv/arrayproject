#include<stdio.h>

void main(){
            
        int size , avg , sum=0;

        printf("enter your number:");
        scanf("%d",&size);

        int arr[size];

        for (int i = 0; i < size; i++)
        {
            printf("array [%d]=",i);
            scanf("%d", &arr[i]);
            sum +=arr[i];
        }
            avg= sum / size;
        printf("%d",avg);
}