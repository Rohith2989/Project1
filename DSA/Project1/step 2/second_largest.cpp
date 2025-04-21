#include <iostream>
using namespace std;

int main()
{

    int a[7] = {1, 845, 581, 1, 5, 3, 2};

    int max = 0, max2 = 0;

    for (int i = 0; i < 7; i++)
    {

        if (max < a[i])
        {

            max = a[i];
        }
    }

    for (int i = 0; i < 7; i++)
    {

        if (max2 < a[i] && a[i] != max)
        {

            max2 = a[i];
        }
    }

    cout << max2;
}
