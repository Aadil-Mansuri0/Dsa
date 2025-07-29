#include <iostream>
using namespace std;
class queue
{
public:
    int size = 6;
    int queue[6];
    int qfront = 0;
    int rear = -1;

    void enqueue(int x)
    {
        if (rear == size - 1)
        {
            cout << " queue is overflow " << endl;
        }
        else
        {
            rear = rear + 1;
            queue[rear] = x;
            cout << " rear element is :" << x << endl;
        }
    }
    void dequeue()
    {
        if (qfront > rear)
        {
            cout << " queue is underflow " << endl;
        }
        else
        {
            int y = queue[qfront];
            qfront = qfront + 1;
            cout << " front element is :" << y << endl;

            if (qfront > rear)
            {
                qfront = 0;
                rear = -1;
            }
        }
    }

    void front()
    {
        if (qfront > rear)
        {
            cout << " queue is empty" << endl;
        }
        else
        {
            cout << "The front element is :" << queue[qfront] << endl;
        }
    }
    void display()
    {
        if (qfront > rear)
        {
            cout << " queue is underflow " << endl;
        }
        else
        {
            cout << " the queue element :" << " ";
            for (int i = qfront; i <= rear; i++)
            {
                cout << queue[i] << " ";
            }
        }
        cout << endl;
    }
};
int main()
{
    queue q;
    q.enqueue(23);
    q.enqueue(47);
    q.enqueue(66);
    q.display();
    q.front();
    q.dequeue();
    q.dequeue();
    q.display();
    q.enqueue(35);
    q.enqueue(76);
    q.enqueue(99);
    q.enqueue(98);
  
}