// Your code here...
int isPrime(int num){
    int c=0;
    for(int i=2; i<num; i++){
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