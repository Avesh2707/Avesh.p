#include<iostream>
using namespace std;   
int stair(int n){
   if(n==2) return 2;
   if(n==1) return 1;
   return stair(n-1)+stair(n-2);
}

int main(){
    cout<<stair(6)<<endl;
}

//Key learning: The function stair(n) calculates the number of distinct ways to climb a staircase with n steps, where you can take either 1 step or 2 steps at a time. The base cases are defined for n=1 and n=2, and for larger values of n, the function uses recursion to sum the results of the two previous steps.
// logical explanation: The function stair(n) is a classic example of a recursive solution to the problem of counting the number of ways to climb stairs. The base cases handle the simplest scenarios: if there is 1 step, there is only 1 way to climb it (taking one step), and if there are 2 steps, there are 2 ways (either taking two single steps or one double step). For any number of steps greater than 2, the function calls itself recursively to calculate the number of ways to reach the current step by summing the ways to reach the two preceding steps. This approach effectively builds up the solution from the base cases, leveraging the overlapping subproblems characteristic of dynamic programming.
