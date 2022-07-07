class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
         if(s1.length() + s2.length() != s3.length()) return false;
        
        int X = s1.length();
        int Y = s2.length();
        
        // visited location track
        vector<vector<bool>>visited(X+1,vector<bool>(Y+1,false));
        
        // current level of BFS or S3 index
        int K = 0;
        
        queue<pair<int,int>>Q;
        Q.push({0,0});
        visited[0][0] = true;
        
        int curr_x, curr_y;
        int size;
        
        while(!Q.empty())
        {
            size = Q.size();
            while(size--)   // level order traverse
            {
                curr_x = Q.front().first;
                curr_y = Q.front().second;
                Q.pop();
                
                // target reached and return true
                if(curr_x == X && curr_y == Y)return true;
                                
                // move right if match and mark visited
                if(curr_x < X && s1[curr_x]==s3[K] && !visited[curr_x+1][curr_y])
                {
                    visited[curr_x+1][curr_y] = true;
                    Q.push({curr_x+1,curr_y});
                }

                // move down if match and mark visied
                if(curr_y < Y && s2[curr_y]==s3[K] && !visited[curr_x][curr_y+1])
                {
                    visited[curr_x][curr_y+1] = true;
                    Q.push({curr_x,curr_y+1});                                        
                }
            }
            
            K++;    // increment level or index of S3
        }
        
        return false;
    }
};