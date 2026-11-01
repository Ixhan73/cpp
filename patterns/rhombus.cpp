#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter range: ";
    cin >> n;

    int m;
    cout << "Enter width: ";
    cin >> m;

    int x = 1; 

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n-i ; j++){
            cout << "  ";
        }
        for (int j = 1; j <= m; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}