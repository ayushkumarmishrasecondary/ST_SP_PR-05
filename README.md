# ST_SP_PR-05


FEEL FREE TO CONTRIBUTE FOR THE NEW APPROACH TO SOLVE THE STOCK SPAN PROBLEM IN ANY LANGUAGE.

EXAMPLE :
C++ Code :


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
