#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {

    if(n==1 || n==0) return false;
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i == 0) return false;
    }
    return true;

}

void findprime(int n){

    for(int i=0; i<=n; i++) {
        if(isPrime(i)){
            cout << i << " ";
        }
    }

}

int main() {

    int n;
    cout << "enter number: ";
    cin >> n;

    findprime(n);

    return 0;
}
