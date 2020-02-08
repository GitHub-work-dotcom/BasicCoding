#include <iostream>
using namespace std;

class Queue
{
public:

    int arr[5]={NULL};
    int counter=0;
    int a=0;

    void enqueue(int value)
    {
        if(counter==5)
        {
            cout<<value<<" cannot be inserted into the queue.......QUEUE OVERFLOW\n";

        }
        else if(counter==0)
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

        for(int i=0;i<5;i++)
        {
            if(arr[i]==NULL)
            {
                cout<<"___      <-  This slot is empty "<<endl;
            }
            else
            {
                cout<<arr[i]<<endl;
            }
        }

    }
    void dequeue(int value)
    {
        bool find=true;

        for(int i=0;i<5;i++)
        {
            if(arr[0]==value)
            {
                bool find =true;


                 for(int i=0;i<5;i++)
                 {

                     arr[i]=arr[i+1];
                     arr[5]=NULL;


                 }

            }
            else
            {
                find =false;
            }

        }
        if (find==false) cout<<value<<" is not in the queue\n";
    }


};



int main()
{
    Queue q;
    int n;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);

    q.display();
    cout<<"Dequeue an element from the queue:";cin>>n;
    q.dequeue(n);
    q.display();
    q.dequeue(6);
    cout<<"After dequeuing:\n";
    q.display();





}
