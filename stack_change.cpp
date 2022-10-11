#include <iostream>
using namespace std;

class stack
{
private:
    int top;
    int arr[5];

public:
    stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }

    bool isEmpty()
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

    void change(int position, int value)
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
};

int main()
{
    stack s1;
    s1.change(4, 46);
    return 0;
}
