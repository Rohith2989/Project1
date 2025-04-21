#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5, d = 2;
    
    int temp[n];
    
    for (int i = 0; i < n - d; i++) {
        temp[i] = arr[i + d];
    }
    
    for (int i = 0; i < d; i++) {
        temp[n - d + i] = arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
