class Solution 
{
public:
    double findMaxAverage(vector<int>& nums, int k)
    {
 double maxi = -1 * numeric_limits<double>::max();
        int sum=0;
        int j=0;

        for(int i=0;i<nums.size();i++)
        {
            sum=nums[i]+sum;

            if(i>=(k-1))
            {
                double avg=(double)sum/k;
                maxi=max(maxi,avg);
                sum=sum-nums[j];
                j++;
            }
        }
        
         return maxi;
        
    }
};