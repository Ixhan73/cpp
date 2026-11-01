#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter range: ";
    cin >> n;

    int x = n-1;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n-i; j++){
            cout << "  ";
        }
        for (int j = 1; j <= 2*i-1; j++){
            cout << "* ";
        }
    cout << endl;
    }

    for (int i = 1; i <= n; i++){   
        for (int j = 1; j <= i; j++){
            cout << "  ";
        }
        for (int j = 1; j <= 2*x-1; j++){
            cout << "* ";
        }
    x--;
    cout << endl;
    }
    return 0;
}