// Your code here...
int binarySearch(int arr[], int n, int target){
    int high=n-1;
    int low=0;
    int mid,index=0;
    while(low<=high){
        mid=(high+low)/2;
        if(target<arr[mid]){
            high=mid-1;
        }
        if(target>arr[mid]){
            low=mid+1;
        }
        if(target==arr[mid]){
            index=mid;
        }
    }
    if(index){
        return index;
    }
    else{
        return -1;
    }
}