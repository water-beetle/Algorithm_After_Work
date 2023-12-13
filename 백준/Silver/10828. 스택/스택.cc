#include <iostream>
#include <stack>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    stack<int> s;

    for(int i=0; i<n; i++){
        string inputName;
        cin >> inputName;

        if(inputName == "push"){
            int t;
            cin >> t;
            s.push(t);
        }
        else if (inputName == "pop")
        {
            if(s.empty())
                cout << "-1" << "\n";
            else{
                cout << s.top() << "\n";
                s.pop();
            }
        }
        else if (inputName == "size")
        {
            cout << s.size() << "\n";
        }
        else if (inputName == "empty"){
            cout << (int)s.empty() << "\n";
        }
        else if (inputName == "top"){
            if(s.empty())
                cout << "-1" << "\n";
            else
                cout << s.top() << "\n";
        }
    }
}