bool isPalindrome(int x) {
   
 
    int original=x;
    long long reversed=0;
    int remainder;
    if(x<0){
        return 0;
    }
    while(x!=0){
        remainder=x%10;
        reversed=reversed*10+remainder;
        x=x/10;
    }
    return  original==reversed;
}

