#include <iostream>
using namespace std;

class stack // last in first out
{
private:
    int top; // variable for indexing in array(stack)
    int arr[5];

public:
    stack() // constructor
    {
        top = -1; // top initialized with (index -1)
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0; // values initialized with zeroes
        }
    }

    bool isEmpty() // function to check whether the stack is empty or not
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isFull() // function to check whether the stack is full or not
    {
        if (top == (sizeof(arr) / sizeof(int) - 1))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void push(int val) // function to insert value to stack
    {
        if (isFull()) // firstly checking if the stack is full and no more values can be added
        {
            cout << "stack overflow" << endl;
        }
        else
        {                     // top is incremented on pushing any value in the stack
            arr[++top] = val; // top becomes 0 when push function is called 1st time
        }
    }

    int pop() // function to print and remove the top value from stack
    {
        if (isEmpty()) // firstly checking if the stack is empty and no more values can be popped
        {
            cout << "stack underflow" << endl;
            return 0;
        }
        else
        {
            int popValue = arr[top];
            arr[top] = 0;    // again the 0 is assigned to free space in stack
            top--;           // top is decremented on poping any value from the stack
            return popValue; // popvalue is returned and printed
        }
    }

    int peek(int pos) // function to print a value at particulat given position
    {
        if (isEmpty())
        {
            cout << "stack underflow" << endl;
            return 0;
        }
        else
        {
            return arr[pos - 1]; // returning value at pos-index
        }
    }

    int count() // function for counting items in stack
    {
        return (top + 1);
    }

    void change(int position, int value) // function for changing value at particular position
    {
        if (isEmpty())
        {
            cout << "stack underflow" << endl;
        }
        else
        {
            arr[position] = value;
            cout << "value changed at the location " << position << " with " << value << endl;
        }
    }

    void display() // function to display all the items in stack
    {
        cout << "The values are as follows : " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << endl;
        }
    }
};
int main()
{
    stack s1;
    int option, position, value;

    do
    {

        cout << "What operations do you want to perform ? Select option number. Enter 0 to exit. " << endl
             << "1. Push " << endl
             << "2. Pop " << endl
             << "3. isFull " << endl
             << "4. isEmpty " << endl
             << "5. peek " << endl
             << "6. change " << endl
             << "7. count " << endl
             << "8. display " << endl
             << "9. clear screen " << endl
             << endl;

        cin >> option;

        switch (option) // calling different functions using switch-case
        {
        case 0:
            break;
        case 1:
            cout << "push function called " << endl;
            cout << "enter a value to push into the stack " << endl;
            cin >> value;
            s1.push(value);
            break;
        case 2:
            value = s1.pop();
            cout << "Pop function called - pop value is " << value << endl;
            break;
        case 3:
            if (s1.isFull())
            {
                cout << "stack is Full " << endl;
            }
            else
            {
                cout << "stack is not Full " << endl;
            }
            break;
        case 4:
            if (s1.isEmpty())
            {
                cout << "stack is Empty " << endl;
            }
            else
            {
                cout << "stack is not Empty " << endl;
            }
            break;
        case 5:

            cout << "enter the position :" << endl;
            cin >> position;
            cout << "The value at " << position << " is " << s1.peek(position) << endl;
            break;
        case 6:
            cout << "change function called " << endl;
            cout << "enter the position :" << endl;
            cin >> position;
            cout << "enter the value :" << endl;
            cin >> value;
            s1.change(position, value);
            break;
        case 7:
            cout << "count function called " << endl
                 << "no. of items in stack are " << s1.count() << endl;
            break;
        case 8:
            cout << "display function called " << endl;
            s1.display();
            break;
        case 9:
            system("cls");
            break;
        default:
            cout << "enter proper option number " << endl;
        }
    } while (option != 0);
    cout << "exiting program...  " << endl;
    return 0;
}