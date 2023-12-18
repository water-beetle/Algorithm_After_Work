#include <iostream>
#include <stack>
#include <vector>
#include <numeric>

using namespace std;
using ll = long long;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    stack<int> s;
    vector<int> arr;
    vector<ll> result;
    int n;
    int cur_index = 0;
    int temp;

    cin >> n;
    result.resize(n);
    fill(result.begin(), result.end(), 0);

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }

    for (int i = 0; i < n; i++)
    {

        if (s.empty())
        {
            s.push(i);
        }
        else
        {
            while (!s.empty() && arr[s.top()] <= arr[i])
            {
                result[s.top()] = i - s.top() - 1;

                s.pop();
            }
            s.push(i);
        }
    }

    while (!s.empty())
    {
        result[s.top()] = n - s.top() - 1;
        s.pop();
    }

    ll answer = 0;

    for(auto& i : result)
        answer += i;

    cout << answer;
}