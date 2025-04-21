#include <iostream>

using namespace std;

int main()
{

    int b;
    cout << "entr num";

    cin >> b;

    int temp = b;

    int r;

    int re = 0;

    while (temp != 0)
    {

        r = temp % 10;

        re = re * 10 + r;

        temp = temp / 10;
    }

    if (re == b)
    {

        cout << " your num is  a paildrome";
    }
    else
    {

        cout << "it aint";
    }
}