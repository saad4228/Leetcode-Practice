class Solution {
public:
    int reverse(int x) {
        long long int n=x,rev=0,neg=0;
        if(x<0)
        {neg++;
        n=n*(-1);}
         while(n>0)
         { int r=n%10;
         rev=rev*10+r;
         n=n/10;
         }
         
         if (neg==1)
          rev=rev*(-1);

          if(rev>INT_MAX || rev<INT_MIN)
          return 0;
         else return (int)rev;
}};
        
        