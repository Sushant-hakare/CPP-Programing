#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse_str(){
        string s= "sushant";
    stack<char> st;

    for(char c:s )
    st.push(c);
for(int i = 0; i < s.length() ; i++){
    s[i] =st.top();
    st.pop();
}
cout<<"reverse of given string  s is : "<<s;

}
void reverse_num(){
    stack<int> stack;
int num = 123;
while(num!= 0 ){
    int dig = num%10;
    stack.push(dig);
     num = num/10;
}
int rev=0;
int mult=1;
while(!stack.empty()){
    rev = rev + mult * stack.top();
    mult = mult *10 ;
    stack.pop();
}
cout<<"reverse is : "<<rev;
}

int main() {

    stack<char> st1 ;
    stack<char> st2;

    string s = "abbbacca";
    string ans = "";
    cout<<"given string is : "<<s<<endl;

    for(char c: s){
        if(!st1.empty() && st1.top() == c)
            st1.pop();
        else
            st1.push(c);
    }

    while(!st1.empty())
    {   
        st2.push(st1.top());
        st1.pop();
    }

    while(!st2.empty()){
        ans +=st2.top();
        st2.pop();
    }
    cout<<"reverse with no alternative char is " <<ans;





    
    return  0 ;
}