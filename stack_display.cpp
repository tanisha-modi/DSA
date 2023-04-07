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
    void display()
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
    s1.display();

    return 0;
}