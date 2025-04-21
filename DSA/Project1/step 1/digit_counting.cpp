#include <iostream>

using namespace std;

int main()
{

    int b , temp;

    cout<<"enter num";

    cin >> b;

     temp = b;

    int index = 0;

    while (temp != 0)
    {

        index++;

        temp = temp / 10;
    }

    cout << "number of didgits are " << index;
}