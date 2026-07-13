class Solution {
public:

    bool isPrime(int n){

        if(n <= 1) return false;

        for(int i=2; i*i<=n; i++){

            if(n%i == 0)
                return false;
        }

        return true;
    }


    int reverseNum(int n){

        int rev = 0;

        while(n > 0){

            int digit = n % 10;

            rev = rev * 10 + digit;

            n /= 10;
        }

        return rev;
    }


    int sumOfPrimesInRange(int n) {

        int r = reverseNum(n);


        int start = min(n,r);
        int end = max(n,r);


        int sum = 0;


        for(int i=start; i<=end; i++){

            if(isPrime(i)){
                sum += i;
            }
        }


        return sum;
    }
};