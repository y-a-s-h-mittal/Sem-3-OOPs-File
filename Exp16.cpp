#include <iostream>
using namespace std;
const int MAX = 5;
class LIST
{
public:
    virtual void store(int value) = 0;
    virtual void retrieve() = 0;
    virtual ~LIST() {}
};
class Stack : public LIST
{
    int arr[MAX];
    int top;

public:
    Stack() { top = -1; }
    void store(int value) override
    {
        if (top == MAX - 1)
        {
            cout << "Stack Overflow!\n";
            return;
        }
        arr[++top] = value;
        cout << value << " stored in Stack.\n";
    }
    void retrieve() override
    {
        if (top == -1)
        {
            cout << "Stack is Empty!\n";
            return;
        }
        cout << "Retrieved from Stack: " << arr[top--] << endl;
    }
};
class Queue : public LIST
{
    int arr[MAX];
    int front, rear;

public:
    Queue()
    {
        front = 0;
        rear = -1;
    }
    void store(int value) override
    {
        if (rear == MAX - 1)
        {
            cout << "Queue is Full!\n";
            return;
        }
        arr[++rear] = value;
        cout << value << " stored in Queue.\n";
    }
    void retrieve() override
    {
        if (front > rear)
        {
            cout << "Queue is Empty!\n";
            return;
        }
        cout << "Retrieved from Queue: " << arr[front++] << endl;
    }
};
int main()
{
    Stack s;
    Queue q;
    LIST *ptr;
    cout << "--- Stack Operations ---\n";
    ptr = &s;
    ptr->store(10);
    ptr->store(20);
    ptr->store(30);
    ptr->retrieve();
    ptr->retrieve();
    cout << "\n--- Queue Operations ---\n";
    ptr = &q;
    ptr->store(10);
    ptr->store(20);
    ptr->store(30);
    ptr->retrieve();
    ptr->retrieve();
    return 0;
}