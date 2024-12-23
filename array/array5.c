#include<stdio.h>
void main(){
    int arr[]={10,30,20,50,40};//it checks & sums only if next number is greater than previous one

    int sum=0;
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            sum+=arr[i];
        }
    }
    printf("Sum of elements grester than previous number is :%d",sum);
}