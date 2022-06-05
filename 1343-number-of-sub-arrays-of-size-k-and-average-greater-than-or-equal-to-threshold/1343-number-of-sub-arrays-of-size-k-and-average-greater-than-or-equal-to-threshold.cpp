class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int ans=INT_MIN;
        int sum=0;
        int c=0;
     double maxi;
        for(int i=0;i<arr.size();i++)
        {
            sum=sum+arr[i];
            if(i>=k-1)
            {
           
                
                maxi=(double)sum/k;
                if(maxi >= threshold)
                {
                    cout<<maxi<<" ";
                    c++;
                }
                    
                sum=sum-arr[i-k+1];
            }
        
        }
        return c;
    }
};