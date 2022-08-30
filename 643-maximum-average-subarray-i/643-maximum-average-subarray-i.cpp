class Solution 
{
public:
    double findMaxAverage(vector<int>& nums, int k)
    {
        int sum=0;
        int j=0;
        vector<double> v;
        for(int i=0;i<nums.size();i++)
        {
            sum=nums[i]+sum;

            if(i>=(k-1))
            {
                double avg=(double)sum/k;
                v.push_back(avg);
                sum=sum-nums[j];
                j++;
            }
        }
        
         return *max_element(v.begin(), v.end());
        
    }
};