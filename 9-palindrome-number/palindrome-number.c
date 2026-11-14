bool isPalindrome(int x) {
    if (x<0) return false;
    int copy=x;
    int temp=0;
    long long result=0;
    while(x>0){
        temp=x%10;
        result=result*10+temp;
        x=x/10;
        temp=0;
    }
    if(result==copy) return true;
    else return false;
}