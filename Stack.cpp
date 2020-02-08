#include <iostream>
using namespace std;


class Stack
{
public:
    int arr[10]={NULL};
    int counter=0;


    void push(int value)
    {

        if(counter==10)
        {
            cout<<"Error: "<<value<<" cannot be inserted into the stack.......STACK OVERFLOW !!!\nThe stack is occupied with elements:\n";

        }
        if(counter==0)
        {
            arr[0]=value;
            counter++;
        }
        else if(counter>0)
        {
            arr[counter]=value;
            counter++;
        }
    }
    void display()
    {
        bool status=true;
        for(int i=0;i<10;i++)
        {
            if(arr[i]==NULL)
            {
                cout<<"---      <-  This slot is empty "<<endl;
            }

            else
            {

                cout<<arr[i]<<endl;
                if(arr[10-1]!=NULL) status=false;

            }

        }
        if(status==false) cout<<"STACK IS FULL..."<<endl;
        cout<<endl;

    }

    void pop(int value)
    {
        bool find=true;

        for(int i=0;i<10;i++)
        {
            if(arr[i]==value)
            {
                find=true;
                counter=counter-1;
                arr[counter]=NULL;
            }
            else
            {
                find=false;
            }


        }
        if(find==false) cout<<value<<" was not found in the stack"<<endl;

    }

};


int main()
{
    int n;
    Stack s;


    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    s.push(10);
    s.push(50);
    s.display();
    s.push(1);
    s.push(12);
    s.display();
    cout<<"Enter a number into the stack:";cin>>n;
    s.push(n);
    s.display();
    s.pop(n);
    cout<<"After popping out the last element entered:"<<endl;
    s.display();


}
