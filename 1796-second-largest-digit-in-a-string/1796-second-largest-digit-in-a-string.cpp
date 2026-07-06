class Solution {
public:
    int secondHighest(string s) {
   int large=-1;
   int slarge=-1;
   
   for( char ch: s)
   { if (isdigit(ch))
      {int digit= ch-'0';
      if(digit>=0 && digit>large )
     { slarge=large;
      large=digit;}
      else if(digit>=0 && digit<large&& digit>slarge )
      {slarge=digit;}

     }}
     return slarge;
    }

        

        
    };
