#include <iostream>
using namespace std;

int main() {
    int cash;
    cin >> cash;

    for (cash; cash != 0; cash) {
        if (cash >= 1000) {
            cout << cash / 1000  << "張一千元" << "\n";
            cash -= 1000 * (cash / 1000);
        } else if (cash >= 500) {
            cout << cash / 500  << "張五百元" << "\n";
            cash -= 500 * (cash / 500);  
        } else if (cash >= 100) {
            cout << cash / 100  << "張一百元" << "\n";
            cash -= 100 * (cash / 100);
        } else if (cash >= 50) {
            cout << cash / 50  << "個五十元" << "\n";
            cash -= 50 * (cash / 50);
        } else if (cash >= 10) {
            cout << cash / 10  << "個十元" << "\n";
            cash -= 10 * (cash / 10);
        } else if (cash >= 5) {
            cout << cash / 5  << "個五元" << "\n";
            cash -= 5 * (cash / 5);
        } else if (cash >= 1) {
            cout << cash / 1 << "個一元" << "\n";
            cash -= 1 * (cash / 1);
        } 
    }
}
