#include<stdio.h>
void main(){
    int a[]={10,30,20,50,40};
    int sum=0;
    int n=sizeof(a)/sizeof(a[0]);

    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]){
            sum+=a[i];
        }
    }
    printf("Sum of elements grester is :%d",sum);
}