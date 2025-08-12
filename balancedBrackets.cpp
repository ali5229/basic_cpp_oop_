#include<iostream>
#include<string>
#include<stack>


using namespace std;
bool isBalanced (string s){
    stack<char> n;
    for(char ch: s){
        if(ch=='[' || ch=='{' || ch=='(')
           n.push(ch);
        else {
            if(n.empty()) return false;
            char top = n.top();
            n.pop();
            if( (ch == ')' && top != '(') || 
                (ch == '}' && top != '{') || 
                (ch == ']' && top != '[') ) {
                    return false;
                }
        }
    }
    return n.empty();
}

int main(){
    string s = "[(){}(){}((({{}})))]";

    if(isBalanced(s)) cout<<"The string is Balanced";
    else cout<<"The string is not balanced";
    return 0;
}
