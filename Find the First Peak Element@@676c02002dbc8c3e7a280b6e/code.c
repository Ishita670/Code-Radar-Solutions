// Your code here...
#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    int m=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(int j=0;j<n;j+=3){
             if(arr[j]>m){
            m=arr[j];
            break;
        }
        else{
            m=-1;
        }
        }
    }
    printf("%d",m);
}