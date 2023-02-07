class Solution {
public:
    bool isPalindrome(int x) {
       int rem;
       long long int ans=0;
        int a=x;
        if(x<0) return false;
        while(x!=0){
            rem=x%10;
            ans = (ans*10)+rem;
            x=x/10;
             }
        if(ans==a)
           return true;
        else 
            return false;
    }
};