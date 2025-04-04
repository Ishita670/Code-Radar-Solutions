// Your code here...
int findOccurance(int arr[], int n, int target, int mode){
    int index=-1;
    switch(mode){
        case 'F':
            for(int i=0; i<n; i++){
                if(target==arr[i]){
                    index=i;
                    break;
                }
            }
            return index;
            break;
        case 'L':
            for(int i=0; i<n; i++){
                if(target==arr[i]){
                    index=i;
                }
            }
            return index;
            break;
    }
}