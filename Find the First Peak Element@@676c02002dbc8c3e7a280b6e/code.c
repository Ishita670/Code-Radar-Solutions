// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int m=0,m1=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>m){
            m=arr[i];
        }
        if(arr[i]<m && arr[i]>m1){
            m1=arr[i];
        }
    }
    printf("%d",m1);
}