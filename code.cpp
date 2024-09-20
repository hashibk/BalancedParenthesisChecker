#include <iostream>
#include <stack>
using namespace std;

int main(){
    string expression= "(A + B) * (C - D)";
    stack<char> s;

    for (int i=0; i<expression.size(); i++){
        if (expression[i]=='{' || expression[i]=='(' || expression[i]=='['){
            s.push(expression[i]);
        }
        else if (expression[i]=='}'){
            if (!s.empty()){
                if (s.top()=='{'){
                    s.pop();
                }
            }
            else{
                cout<<"Not balanced."<<endl;
                return 0;
            }
        }

        else if (expression[i]==']'){
            if (!s.empty()){
                if (s.top()=='['){
                    s.pop();
                }
            }
            else{
                cout<<"Not balanced."<<endl;
                return 0;
            }
        }

        else if (expression[i]==')'){
            if (!s.empty()){
                if (s.top()=='('){
                    s.pop();
                }
            }
            else{
                cout<<"Not balanced."<<endl;
                return 0;
            }
        }
    }

    if (s.empty()){
        cout<<"Balanced."<<endl;
    }
    else{
        cout<<"Not balanced."<<endl;
    }
}