//Given two strings. The task is to find the length of the longest common substring.


#include <bits/stdc++.h>

using namespace std;
int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        // your code here
        int t[n+1][m+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0||j==0)
                t[i][j]=0;
            }
        }
        int res=INT_MIN;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(S1[i-1]==S2[j-1]){
                    t[i][j]=1+t[i-1][j-1];
                }
                else
                t[i][j]=0;
                
                res=max(res,t[i][j]);
            }
        }
        return res;
    }

int main()
{
    int t;
    cin>>t;
    while(t--){
    string s1,s2;
    cin>>s1>>s2;
    int ans=longestCommonSubstr(s1,s2,s1.length(),s2.length());
    cout<<ans<<endl;}

    return 0;
}
