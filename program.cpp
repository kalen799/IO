#include <iostream>
using namespace std;

int silnia(int n) {
    if (n ==0) return 1;
    return n *silnia(n -1);
}

int main() {
    int liczba;
    cin >>liczba;

    if (liczba <0) {
        cout << "Podana liczba nie moze byc  ujemna!"<< endl;
        return 1;
    }
    cout <<silnia(liczba)<<endl;
    return 0;
}

