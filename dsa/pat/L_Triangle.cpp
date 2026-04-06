#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        // print leading spaces
        for(int s = 1; s <= n - i; s++){
            cout << " ";
        }
        // print stars
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}
