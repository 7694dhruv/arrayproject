#include<stdio.h>

void main(){
          
         int size;

        printf("enter your number:");
        scanf("%d",&size);

        int arrA[size],arrB[size],arrC[size];
        printf("Enter elements A:\n");
        for (int i = 0; i < size; i++)
        {
            printf("array A[%d]=",i);
            scanf("%d", &arrA[i]);
        }
        printf("Enter elements B:\n");
        for (int i = 0; i < size; i++)
        {
            printf("array B[%d]=",i);
            scanf("%d", &arrB[i]);
        }
        for (int i = 0; i < size; i++)
        {
        arrC[i]=arrA[i]+arrB[i];
            
        }
    for (int i = 0; i < size; i++)
    {
       printf("array %d is: %d",i,arrC[i]);

    }
            
}