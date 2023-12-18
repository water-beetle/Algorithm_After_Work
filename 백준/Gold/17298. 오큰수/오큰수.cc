#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    vector<int> result;
    stack<int> my_stack;


    for(int i=n-1; i>=0; i--){
        while(!my_stack.empty() && arr[i] >= my_stack.top()){
            my_stack.pop();
        }

        if(my_stack.empty()){
            result.push_back(-1);
        }else{
            result.push_back(my_stack.top());
        }

        my_stack.push(arr[i]);

    }

    for(int i=n-1; i>=0; i--){
        cout << result[i] << " ";
    }
}