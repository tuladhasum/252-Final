#include <iostream>
using namespace std;

int main()
{
    int num=1;  // initial statement
    while (num <= 10)  // loop condition
    {
        cout << num << endl;
        num++;  // update statement
    }

    for (int num=1; num<=5; num++)
        cout << num << endl;
    cout << "num = " << num << endl;

    num=1;
    do
    {
       cout << num << endl;
       num++;
    }
    while (num <= 10);

    return 0;
}

