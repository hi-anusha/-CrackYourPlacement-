class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp=0;
        int msf=prices[0];
        for(int i=0;i<prices.size();i++)
        {
            msf=min(msf,prices[i]);
            mp=max(mp,prices[i]-msf);
        }
        return mp;
    }
};