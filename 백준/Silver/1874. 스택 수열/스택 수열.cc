#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> my_stack;
    vector<char> result;

    int stack_num = 1;
    int flag = 0;

    for(int i=0; i< n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        int num = arr[i];
        while(my_stack.empty() or my_stack.back() < num){
            my_stack.push_back(stack_num);
            result.push_back('+');
            stack_num++;
            
        }
        if(my_stack.back() == num){
            result.push_back('-');
            my_stack.pop_back();
            
        }
        if(!my_stack.empty() and my_stack.back() > num){
            flag = 1;
            break;
        }

    }

    if(flag){
        cout << "NO" << "\n";
    }
    else{
        for(int i=0; i<result.size(); i++){
            cout << result[i] << "\n";
        }
    }


}