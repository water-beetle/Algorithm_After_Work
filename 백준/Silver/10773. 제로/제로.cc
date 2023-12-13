#include <iostream>
#include <stack>

using namespace std;

int main(){
    int n;
    cin >> n;

    stack<int> s;
    int result = 0;

    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;

        if(temp == 0){
            if(!s.empty()){
                result -= s.top();
                s.pop();
            }
        }
        else{
            result += temp;
            s.push(temp);
        }


    }

    cout << result;
}