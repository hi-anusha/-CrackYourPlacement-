#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    
    cin>>t;
    while(t--)
    {
        int n,k,y;
        cin>>n>>k;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            cin>>y;
            v.push_back(y);
        }
        
        priority_queue <int, vector<int>, greater<int>> pq;
        
        for(int i=0;i<k;i++)
        {
            pq.push(v[i]);
        }
        
        
        for(int i=k;i<n;i++)
        {
           // cout<<"hi"<<v[i]<<" ";
                cout<<pq.top()<<" ";
                pq.pop();
             //   cout<<"hi"<<v[i]<<" ";
                pq.push(v[i]);
        }
        
        while(!pq.empty())
        {
            cout<<pq.top()<<" ";
            pq.pop();
        }
        
        
        
        cout<<"\n";
    }
	return 0;
}