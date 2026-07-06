class Solution {
public:
    bool isPalindrome(int x) {
        int k=x;
        long long int rev=0;
        while(x>0)
       { int r=x%10;
        rev=rev*10+r;
        x=x/10;
 }
 
if(rev>INT_MAX ||rev<INT_MIN)
  return false;
if(k==rev && k>=0)
 return true;
 else return false;
        
    }}
;