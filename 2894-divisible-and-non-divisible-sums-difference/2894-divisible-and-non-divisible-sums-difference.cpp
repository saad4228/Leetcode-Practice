class Solution {
public:
    int differenceOfSums(int n, int m) { //going by optimal approach
        int totalsum=n*(1+n)/2;
        int totalmultiples=n/m; //therefore last element totalmultiples*m; first is m
        int divisiblesum=totalmultiples*(m+totalmultiples*m)/2;
        int nondivisiblesum=totalsum-divisiblesum;
        return nondivisiblesum-divisiblesum;
    }
};