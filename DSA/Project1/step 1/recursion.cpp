#include <iostream>

using namespace std;
void print(int n)
{
    static int i = 0;
    cout << i;

    if (n == 0)
    {
        return;
    }
    i++;
    print(n - 1);
}

int main()
{

    int n = 10;

    print(n);
}