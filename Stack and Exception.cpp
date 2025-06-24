#include <stdexcept>
#include <iostream>
using namespace std;
class MyException : public runtime_error
{
	public:
		MyException(char ch[]):runtime_error(ch){}

};

class Stack
{
    private:
        int arr[5];
        int top;
    public:
        Stack():top(-1){}
        void Push(int var)
        {
            if(top >= 4)
                throw MyException("Stack Over Flow");
            arr[++top] = var;
        }
        int pop()
        {
            if(top == -1)
                throw MyException("Stack Under Flow");
            return arr[top--];
        }
};
int main()
{
    Stack s;
    try
    {
        s.Push(11);
        s.Push(11);
        s.Push(11);
        s.Push(11);
        s.Push(11);
        s.Push(11);
        cout<<"value is "<<s.pop()<<endl;
        cout<<"value is "<<s.pop()<<endl;
        cout<<"value is "<<s.pop()<<endl;
        cout<<"value is "<<s.pop()<<endl;
        cout<<"value is "<<s.pop()<<endl;
    }
    catch(MyException e)
    {
       cout<<e.what()<<endl;
    }
    return 0;
}

