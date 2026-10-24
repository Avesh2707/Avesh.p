int reverse(int x){
    int a=0;
        while(x!=0){
            int ld=x%10;
            //overflow cheack 
            if(a>INT_MAX/10 || (a==INT_MAX/10 && ld>7)){
                return 0;
            }
            //underflow check
            if(a<INT_MIN/10 || (a==INT_MIN/10 && ld<-8)){
                return 0;
            }
            a=10*a+ld;
            x/=10;
        }
        return a;
}