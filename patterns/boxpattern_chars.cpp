#include <iostream>
using namespace std;

int main()
{
    int m;
    cout << "Enter rows: ";
    cin >> m;

    int n;
    cout << "Enter range: ";
    cin >> n;

    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            cout << (char)(j+64) << " "; 
        }
        cout << endl;
    }
    return 0;
}