// Your code here...
#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    int m=0;
    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
        for(i=1;i<=n;i+=3){
             if(arr[i]>m){
            m=arr[i];
            break;
        }
        else{
            m=-1;
        }
    }
    printf("%d",m);
}