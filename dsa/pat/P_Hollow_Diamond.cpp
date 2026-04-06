#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    for(int i = 1; i <= n; i++){
      
        for(int s = 1; s <= n - i; s++){
            cout << " ";
        }

        if(i == 1){
            cout << "* ";
        }
        else{
            cout << "*";
            for(int j = 1; j <= 2*i - 3; j++){
                cout << " ";
            }
            cout << "* ";
        }
        cout << "\n";
    }

    for(int i = n - 1; i >= 1; i--){
       
        for(int s = 1; s <= n - i; s++){
            cout << " ";
        }

        if(i == 1){
            cout << "* ";
        }
        else{
            cout << "*";
            for(int j = 1; j <= 2*i - 3; j++){
                cout << " ";
            }
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}
