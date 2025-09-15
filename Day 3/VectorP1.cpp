// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v1 = {1, 2, 5, 0, 3, 1, 7};
//     vector<int> v2;
//     for(int i=1;i<v1.size()-1;i++)
//     {
//         if(v1[i]< v1[i-1] && v1[i]< v1[i+1])
//         {
//             v2.push_back(i);
//         }
//     }   
//     for(int i=v2.size()-1;i>=0;i--)
//     {
//         v1.erase(v1.begin() + v2[i]);
//     }
//     for(int i=0;i<v1.size();i++)
//     {
//         cout<<v1[i]<<" ";
//     }
//     return 0;
// }

/*
Write a C++ program that erases the elements in a vector that are strictly smaller than their adjacent left and right neighbors.
Example:
Original Vector elements:
1 2 5 0 3 1 7
Output: 1 2 5 3 7 (0 and 1 are erased)
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1 = {1, 2, 5, 0, 3, 1, 7};
    vector<int> v2;
    for(int i=0;i<v1.size();i++)
    {
        if(i==0 || i==v1.size()-1)
        {
            v2.push_back(v1[i]);
        }
        else if(!(v1[i]< v1[i-1] && v1[i]< v1[i+1]))
        {
            v2.push_back(v1[i]);
        }
    }   
    v1 = v2;
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    return 0;
}