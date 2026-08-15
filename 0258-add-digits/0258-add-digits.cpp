class Solution {
public:
     int sumofdigits(int k)
     {  int sum=0;int rem;
        while(k>0)
        {
            rem=k%10;
            sum+=rem;
            k=k/10;
        }
        return sum;
     }
    int addDigits(int num) {
        if(num<10)return num;
        int final=sumofdigits(num);
         while(final>=10)
         {
            final=sumofdigits(final);
         }
         return final;
         }
};