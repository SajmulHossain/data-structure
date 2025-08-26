#include <stdio.h>

#define size 4

int stack[4];
int top = -1;

void push()
{
    if (top >= size - 1)
    {
        printf("Stack Overflow!!!!\n");
        return;
    }

    int value;
    printf("Enter a value\n");
    scanf("%d", &value);

    top++;
    stack[top] = value;
}
void pop()
{
    if (top < 0)
    {
        printf("Stack underflow!!!\n");
        return;
    }
    top--;
}
void show()
{
    if (top < 0)
    {
        printf("Stack is empty!!!\n");
    }
    else
    {
        printf("Stack value is: ");
        for (int i = 0; i <= top; i++)
        {
            printf("%d\t", stack[i]);
        }
    }
    printf("\n");
}

int main()
{
    while (1)
    {
        int choice;
        printf("1. Push \n 2.Pop \n 3. Show \n 4. Exit \n Enter your choice \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            return 0;
            break;

        default:
            printf("Give a valid value\n");
            break;
        }
    }
}
