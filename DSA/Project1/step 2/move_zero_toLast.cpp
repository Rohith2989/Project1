#include <iostream>

using namespace std;

int main()
{
    int temp;

    int n;

    cout << "enter of elements ";
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {

        cout << "element";
        cin >> a[i];
    }

    int n1 = n;

    for (int i = 0; i < n; i++)
    {

        if (a[i] == 0)
        {

            temp = a[n1];

            a[n1] = a[i];

            a[i] = temp;
            n1--;
        }
    }

    for (int i = 0; i < n; i++)
    {

        cout << a[i] << "\t";
    }
}