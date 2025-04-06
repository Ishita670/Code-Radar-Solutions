// Your code here...
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int r,s;
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        r=s=0;
        while(arr[i]!=0){
            r=arr[i]%10;
            s=s+r;
            arr[i]=arr[i]/10;
        }
        printf("%d ",abs(s));
    }
}