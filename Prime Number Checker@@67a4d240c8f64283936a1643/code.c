// Your code here...
int isPrime(int num){
    int c;
    for(int i=2; i<n; i++){
        if(num%i==0){
            c++;
        }
    }
    if(c==0){
        return 1;
    }
    else{
        return 0;
    }
}