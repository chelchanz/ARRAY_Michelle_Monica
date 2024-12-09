#include <iostream>
using namespace std;

int main() {
    int arr[] = {8, 10, 20, 20, 22}; 
    int sum = 0, n = 5;

    for (int i = 0; i < n; i++) sum += arr[i];

    cout << "Rata-rata: " << sum / double(n) << endl;

    return 0;
}
