//stk

#include<stdio.h>
#include<stdlib.h>

# define size 5

int stk[size], top = -1;

void push();
void pop();
void display();
void rev();

int main()
{
    int ch;
     
    while(1)
    {
        printf("\nStack Operations: ");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Reverse Stack");
        printf("\n4. Display");
        printf("\n5. Exit");

        printf("\nEnter a Choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
            {
                push();
            }
            break;

            case 2:
            {
                pop();
            }
            break;

            case 3:
            {
                rev();
            }
            break;

            case 4:
            {
                display();
            }
            break;

            case 5:
            {
                exit(0);
            }

            default:
                printf("\nEnter a Valid Choice: ");
            
        }
    }
}

void push()
{
    int x;

    if(top == size - 1)
        printf("\nStack Overflow");
    else
    {
        printf("\nEnter the element to be Pushed: ");
        scanf("%d", &x);

        top++;
        stk[top] = x;
    }
}

void pop()
{
    if (top < 0)
        printf("\nStack Overflow");
    else 
    {
        printf("\nPopped Element %d", stk[top]);

        top--;
    }
}

void rev()
{
    if (top==-1)
    {
        printf("\nStack is empty!\n");
    }
    else
    {
        int j = 0;
        for (int i = top; i >= 0; i--)
        {
            temp[j] = stack[i];
            j++;
        
        }
        printf("Reversed stack : \n");
        for (int i = top; i >= 0; i--)
        {
            stack[i] = temp[i];
            printf("%d\n",stack[i]);
        }
    }

}

void display()
{
    for(int i = top; i >= 0; i--)
        printf("\n%d ", stk[i]);
}