#include<iostream>
using namespace std;

int main() {
    long long int n, b, d;
    cin >> n >> b >> d;
    long long int total_size = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        if (a <= b) {
            total_size += a; // Add the size of the orange to total_size
        }

        if (total_size > d) {
            count++;
            total_size = 0; // Reset the waste section
        }
    }

    cout << count << endl;
    return 0;
}
