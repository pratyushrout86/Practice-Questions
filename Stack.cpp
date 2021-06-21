#include<iostream>
#include<stack>
using namespace std;
void display(stack<int> s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
void input_data(stack<int> s)
{
    int element;
    char ch;
    cout<<"Enter your 1st element: ";
    cin>>element;
    cout<<"Do you want to continue ? ";
    cin>>ch;
    while(ch=='Y' || ch=='y')
    {
        cin>>element;
        s.push(element);
        cout<<"Do you want to continue ? ";
        cin>>ch;
        if(ch=='N' || ch=='n')
        {
            display(s);
            break;
        }

    }
}
int main()
{
    stack<int> stack1;
    input_data(stack1);
    return 0;
}
