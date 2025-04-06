// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count,c=0;
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        count=0;
        for(int j=1; j<=arr[i]; j++){
            if(arr[i]%j==0){
                count++;
            }
        }
        if(count==2){
            c++;
        }
    }
    printf("%d",c);
}