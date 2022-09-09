class Solution {
public:
    bool isPerfectSquare(int num)
    {
        int l=1;
        long long h=num;
        while(l<=h)
        {
            long long m=l+(h-l)/2;
            
            if(m*m==num)
            {
                return true;
            }
            else if(m*m<num)
                l=m+1;
            else if(m*m>num)
                h=m-1;
        }
        return false;
    }
};