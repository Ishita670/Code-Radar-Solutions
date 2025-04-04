// Your code here...
// Your code here...
int bubbleSort(char arr[],int n){
    char temp;
    for(int i=0; i<n-1; i++){
        for (int j=0; j<n-1-i; j++){
           if((int)arr[j]>(int)arr[j+1]){
            temp=(char)arr[j];
            arr[j]=(char)arr[j+1];
            arr[j+1]=temp;
           }
        }
    }
}

int printArray(char arr[],int n){
    for(int i=0; i<n; i++){
        printf("%c ",arr[i]);
    }
}