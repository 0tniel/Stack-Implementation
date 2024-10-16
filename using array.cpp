//stack implementation using array
#include<iostream>
#include<stack>
using namespace std; 

int main()
{
    stack<int>st;
    st.push(30);
    st.push(20);
    st.push(10);
    cout<< "Top element of the stack: " <<st.top() <<endl;
}

/*
OUTPUT: 
Top element of the stack: 10
*/
