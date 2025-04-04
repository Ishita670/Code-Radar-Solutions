// Your code here...
int binarySearch(int arr[], int n, int target){
    int high=n-1;
    int low=0;
    int mid,index=0;
    for(int i=1; i<=n; i++){
        mid=(high+low)/2;
        if(target<arr[mid]){
            high=mid-1;
        }
        if(target>arr[mid]){
            low=mid+1;
        }
        if(target==arr[mid]){
            index=i;
        }
    }
    if(index){
        return index;
    }
    else{
        return -1;
    }
}