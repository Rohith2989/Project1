#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> a(12);

    for (int l = 0; l < 12; l++)
    {

        cout << "elemtn";
        cin >> a[l];
    }

    for (int i = 0; i < a.size(); i++)
    {

        for (int j = i + 1; j < a.size(); j++)
        {

            if (a[i] == a[j])
            {

                a.erase(a.begin() + j);
                j--;
            }
        }
    }

    for (int val : a)
    {

        cout << val << "\t";
    }
}