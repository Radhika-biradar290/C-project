#include<iostream>
#include<fstream>
#define MAX_SIZE 5

using namespace std;

template<class type>
class stack
{
        public:
        type a[MAX_SIZE];
        int a_size;

        int datatype();
        stack();
        ~stack();
        void push();
        void pop();
        void display();
        void reset();
        void operation();
};
template <typename t>
void stack<t>::reset()
{
        a_size=0;
}
template<typename t>
stack<t>::~stack()
{
        reset();
}
template <typename t>
stack<t>::stack()
{
                                                a_size=0;
}
template<typename t>
int stack<t>::datatype()
{
        const char* c=typeid(a).name();
        if(*(c+3)=='c')
                cout<<"Character data ";
        else if(*(c+3)=='i')
                cout<<"Integer data ";
        else if(*(c+3)=='f')
                cout<<"Float data ";
        else if(*(c+3)=='d')
                cout<<"double data ";
        else if(*(c+3)=='N')
        {
                cout<<"String data ";
                return 1;
        }
        return 0;
}
template<typename t>
void stack<t>::push()
{
        if(a_size==MAX_SIZE)
        {
                cout<<"Stack overflow"<<endl;
                return;
        }
        cout<<"Enter the data to push in stack : ";
        cin>>a[a_size];
        datatype();
        cout<<a[a_size]<<" entered successfully\n";
        a_size++;
}
template<typename t>
void stack<t>::pop()
{
        if(a_size==0)
        {
                cout<<"Stack underflow\n";
                return;
        }
        datatype();
        cout<<a[a_size-1]<<" deleted successfully\n";
        a_size--;
}
template<class t>
void stack<t>::display()
{
        if(a_size==0)
        {
                cout<<"Array is empty\n";
                return;
        }
        datatype();
        cout<<"Array elements are : ";
        for(int i=0;i<a_size;i++)
                cout<<a[i]<<" ";
        cout<<endl;
}
template<class t>
void stack<t>::operation()
{

        cout<<"\033[34m";
        int count=0;
        int op;
        if(a_size!=0)
        {
lable:
                cout<<"1.Continue old stack\n2.Create new stack\n";
                cin>>op;
                if(op==1)
                {
                }
                else if(op==2)
                {
                        reset();
                }
                else
                {

                        cout<<"\033[31m";
                        cout<<"Invalid option\n";
                        cout<<"\033[0m";
                        goto lable;
                }
        }
        cout<<"\033[34m";
        while(1)
        {

               cout<<"\033[34m";
                cout<<"1.Push\n2.Pop\n3.Display\n4.Main menu\n";
                cin>>op;
                switch(op)
                {
                        case 1:push();break;
                        case 2:pop();break;
                        case 3:display();break;
                        case 4:return;break;
                        default:{

                                        cout<<"\033[31m";
                                        if(count==0)
                                                cout<<"Please read the option carefully\n";
                                        else if(count==1)
                                                cout<<"last chance please take care\n";
                                        else if(count==2)
                                        {cout<<"Thanks for using our application.Please read the manual and come back properly\n";
                                        cout<<"\033[0m";
                                         exit(0);
                                        }
                                        count++;
                                        cout<<"\033[0m";
                                        break;
                                }
                }
        }
}
                         
void function()
{
        int count=0;
        static stack<int> i;
        static stack<char>c;
        static stack<float>f;
        static stack<double>d;
        static stack<std::string>s;
        int op;
        while(1)
        {

                cout<<"\033[32m";
                cout<<"1.Int\n2.Char\n3.Float\n4.Double\n5.String\n6.Exit\n";
                cout<<"\033[0m";
                cin>>op;
                cout<<"\033[0m";
                switch(op)
                {
                        case 1:i.operation();break;
                        case 2:c.operation();break;
                        case 3:f.operation();break;
                        case 4:d.operation();break;
                        case 5:s.operation();break;
                        case 6:return;break;
                        default:{
                                        cout<<"\033[31m";
                                        if(count==0)
                                                cout<<"Please read the option carefully\n";
                                        else if(count==1)
                                                cout<<"last chance please take care\n";
 else if(count==2)
                                        {cout<<"Thanks for using our application.Please read the manual and come back properly\n";
                                                cout<<"\033[0m";
                                         exit(0);
                                        }
                                        count++;
                                        cout<<"\033[0m";
                                        break;
                                }
                }
        }
}

int main()
{
        function();
}
