// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int ma=0,mi=arr[1];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>ma){
            ma=arr[i];
        }
        if(arr[i]<mi){
            mi=arr[i];
        }
    }
    printf("%d %d",mi,ma);
}