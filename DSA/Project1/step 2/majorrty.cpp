#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n;
    cout << "enter n";
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {

        cout << "element";
        cin >> a[i];
    }

    int max;

    max = a[0];

    for (int i = 0; i < n; i++)
    {

        if (a[i] > max)
        {

            max = a[i];
        }
    }

    int c[max + 1] = {};

    for (int i = 0; i < n; i++)
    {

        c[a[i]] += 1;
    }

    std::cout << "\n\n";

    for (int i = 0; i <= max; i++)
    {

        if (c[i] > (i / 2))
        {

            cout << i << "\t";
        }
    }
}