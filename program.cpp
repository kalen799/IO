#include <iostream>
using namespace std;

int silnia(int n) {
    if (n ==0) return 1;
    return n *silnia(n -1);
}

int main() {
    int liczba;
    cin >>liczba;
    cout <<silnia(liczba)<<endl;
    return 0;
}

