#include <iostream>
#include <vector>
using namespace std;



int main(){

    int index,n, temp;
   vector <int> a;
    cout<<"enter yuour number";
    cin >> n;
    temp = n;
     index = 0;
    while (temp != 0)
    {

       a.push_back(temp%10);

        index++;
        temp = temp/10;
    }

    for (int i = index-1 ; i >= 0; i--)
    {

        cout << "the   " << i+1 << "         element  is  " << a[i] << endl;
    }
}