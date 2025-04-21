#include <iostream>
#include <math.h>

int main()
{

    int index;

    for (int i = 2; i < 100; i++)
    {
        index = 0;

        for (int j = 2; j <= sqrt(i); j++)
        {

            if (i % j == 0)
            {

                index++;
                break;
            }
        }

        if (index == 0)
        {

            std::cout << i << "    ";
        }
    }
}