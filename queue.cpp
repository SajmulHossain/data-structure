#include <iostream>

using namespace std;
#define size 4

int front = -1, rear = -1, value, i, top = -1;
int queue[size];

void enqueue()
{
    if (front == -1 && rear == -1)
    {
        front++;
        rear++;
        top++;

        cout << "Enter a value:" << endl;
        cin >> value;
        queue[rear] = value;
        return;
    }

    if (top >= size - 1)
    {
        cout << "Queue overflow!!!" << endl;

        return;
    }

    rear++;
    top++;
    cout << "Enter a value:" << endl;
    cin >> value;
    queue[rear] = value;
}
void dequeue()
{
    if (top < 0)
    {
        cout << "Queue underflow!!!" << endl;
        return;
    }

    front++;
    top--;
}
void display()
{
    int loopEnd = rear;
    cout << "The queue is:";
    if (top < 0)
    {
        cout << " EMPTY" << endl;
    }
    else
    {
        cout << endl;
    }
    for (i = front; i <= loopEnd; i++)
    {
        cout << queue[i] << "\t";
    }
}

int main()
{
    while (true)
    {
        cout << "\n1. Enqueue \n2. Dequeue\n3. Display\n 4.EXIT" << endl;
        int choice;
        cout << "Enter your choice\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            cout << "Proccess exited" << endl;
            return 0;

        default:
            cout << "Invalid input" << endl;
            break;
        }
    }
}