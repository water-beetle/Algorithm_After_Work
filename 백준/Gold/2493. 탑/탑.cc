#include <iostream>
#include <stack>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    stack<pair<int, int>> s;
    int temp;
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> temp;

        while(!s.empty() && s.top().first <= temp){
            s.pop();
        }

        if(s.empty())
            cout << "0 ";
        else
            cout << s.top().second << " ";

        if(s.empty() || s.top().first > temp)
            s.push(make_pair(temp, i+1));
    }
}