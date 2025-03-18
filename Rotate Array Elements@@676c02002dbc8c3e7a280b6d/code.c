// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    int arr1[n];
    for(i=0;i<n;i++){
        arr1[i+k]=arr[i];
        printf("%d\n",arr[i+k]);
    }
}