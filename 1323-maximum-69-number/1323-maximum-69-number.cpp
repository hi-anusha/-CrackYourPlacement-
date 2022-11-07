class Solution {
public:
    int maximum69Number (int num) 
    {
         int r;
        int rev=0;
         int number=num;
        
         while(number!=0)
         {
             r=number%10;
            
             rev=rev*10+r;
             
             number=number/10;
         }
         
        r=0;
        int n=rev;
      
        rev=0;
        bool flag=false;
        
        while(n!=0)
         {
             r=n%10;
            if(r==6 && flag==false)
            {
                r=9;
                flag=true;
            }
             rev=rev*10+r;
             n/=10;
         }
        
     /*   number=rev;
        rev=0;
        while(number!=0)
         {
             r=number%10;
             rev=rev*10+r;
             number/=10;
         }
        */
        return rev;
        
    }
};