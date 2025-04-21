#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;

    cout << "enter number";

    cin >> n;

    vector<int> a;
    int i = 1;

    while (i != n)
    {

        if ((n % i) == 0)
        {

            cout << i << "\t";

            a.emplace_back(i);
                }

        i++;
    }

    cout << "\n\n\n"
         << "vector sssssss \n";

    for (int d : a)
    {

        cout << d << "\t";
    }
}