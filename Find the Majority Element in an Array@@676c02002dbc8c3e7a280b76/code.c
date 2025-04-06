// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int visited[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        visited[i]=0;
    }
    int count;
    int max=0,maxe;
    for(int i=0; i<n; i++){
        if(visited[i]!=0){
            continue;
        }
        count=1;
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>max){
            max=count;
            maxe=arr[i];
        }
    }
    printf("%d",maxe);
}