class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> h(m,1);
        vector<int> v(n,1);
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    v[i]=0;
                    h[j]=0;
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
            for(int j=0;j<m;j++)
            {
                matrix[i][j]=0;
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
            {
                for(int j=0;j<m;j++)
                {
                     matrix[i][j]=0;
                }
            }
        }
        
        for(int i=0;i<m;i++)
        {
            if(h[i]==0)
            {
                for(int j=0;j<n;j++)
                {
                    matrix[j][i]=0; 
                }
            }
        }
        
    }
};