class Solution {
public:
    bool isPalindrome(int x) {
        int n, singledigit;
        long reversed;
        reversed=0;
        n=x;
        if (x < 0)
            return false;
        while(x!=0)
        {
            singledigit= x%10;
            reversed=(reversed*10)+singledigit;
            x=x/10;
        }
            return n == reversed;
    }
};