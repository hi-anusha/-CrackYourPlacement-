// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int sumOfDigits(int N)
    {
        int sum=0;
        for(int i=1;i<=N;i++)
        {
            int j=i;
            while(j>0)
            {
                int y=j%10;
                j=j/10;
                sum=sum+y;
            }
        }
        return sum;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.sumOfDigits(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends