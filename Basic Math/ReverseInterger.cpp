#include<bits/stdc++.h>
using namespace std;

void reverse(int x){
    stack<int> st;
    string number = to_string(x);
    for (int i = 0; i < number.length(); i++)
    {
        st.emplace(number[i]);
        cout<<"i just emplaced "<<number[i]<<endl;
    }
    for (int j = 0; j < number.length(); j++)
    {
        cout<<st.top();
        st.pop();
    }
    
};

int main(){
    int x;
    cout<<"enter your number: ";
    cin>>x;
    reverse(x);
    return 0;
}