# ST_SP_PR-05


FEEL FREE TO CONTRIBUTE FOR THE NEW APPROACH TO SOLVE THE STOCK SPAN PROBLEM IN ANY LANGUAGE.

EXAMPLE :
C++ Code :


#include<iostream>
#include<bits/stdc++.h>
using namespace std;



vector<int> stockSpanProblem(int arr[], int n)
{
    vector<int> v;
    stack<pair<int,int>> s;
    for (int i = 0; i < n; i++)
    {
        if(s.empty())
            v.push_back(-1);
        else if(!s.empty() && s.top().first > arr[i])
            v.push_back(s.top().second);
        else if(!s.empty() && s.top().first<= arr[i])
        {
            while(!s.empty() && s.top().first <= arr[i]){
                s.pop();
            }
            if(s.empty())
                v.push_back(-1);
            else
                v.push_back(s.top().second);
        }

        s.push({arr[i], i});
    }

    for (int i = 0; i < v.size(); i++)
        v[i] = i - v[i];
    return v;
}

int main()
{
    int arr[] = {100,80,60,70,60,75,85};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v;
   v = stockSpanProblem(arr, n);
   for (int i = 0; i < v.size();i++)
       cout << v[i] << " ";
   cout << endl;
   return 0;
}
