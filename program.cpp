#include <iostream>
using namespace std;

int main() {
    int liczba;
    cin >>liczba;
    if (liczba <0) {
        cout << "Podana liczba nie moze byc  ujemna!"<< endl;
        return 1;
    }
    cout <<liczba<<endl;
    return 0;
}

