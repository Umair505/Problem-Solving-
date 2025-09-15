#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        vector<int>v2;
        vector<int>v3;

        long long mx = *max_element(v.begin(),v.end());
        for(int i=0; i<n; i++){
            if(v[i] != mx){
                v2.push_back(v[i]);
            }
            else{
                v3.push_back(v[i]);
            }
        }
        if(v2.size() == 0 || v3.size() == 0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<v2.size()<<" "<<v3.size()<<endl;
            for(auto it : v2)
            {
                cout<<it<<" ";   
            }
            cout<<endl;
            for(auto it : v3)
            {

                cout<<it<<" ";
            }
            cout<<endl;
        }
    } 
    return 0;
}