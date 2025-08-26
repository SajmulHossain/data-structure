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
        // if(front < rear) {
        std::cout << "Queue overflow!!!" << std::endl;
        // }

        return;
    }

    rear++;
    top++;
    // if(front > rear) {
    //     front = 0;
    // }
    cout << "Enter a value:" << endl;
    cin >> value;
    queue[rear] = value;
}
void dequeue()
{
    if (top < 0)
    {
        std::cout << "Queue underflow!!!" << std::endl;
        return;
    }

    front++;
    top--;
}
void display()
{
    int loopEnd = rear;
    std::cout << "The queue is:";
    if (top < 0)
    {
        std::cout << " EMPTY" << std::endl;
    }
    else
    {
        std::cout << std::endl;
    }
    // if (front > rear)
    // {
    //     i = 0;
    //     loopEnd = size - 1;
    // }
    for (i = front; i <= loopEnd; i++)
    {
        std::cout << queue[i] << "\t";
    }
}

int main()
{
    while (true)
    {
        cout << "\n1. Enqueue \n2. Dequeue\n3. Display\n 4.EXIT" << endl;
        // std::cout << "Top: " << top << " front: " << front << " rear: " << rear << std::endl;
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
            return 0;

        default:
            std::cout << "Invalid input" << std::endl;
            break;
        }
    }
}