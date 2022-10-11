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

    int count()
    {
        return (top + 1);
    }
};
int main()
{
    stack s1;
    int a = s1.count();
    cout << "total no. of elements in array(stack) are " << a << endl;

    return 0;
}