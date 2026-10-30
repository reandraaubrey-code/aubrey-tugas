#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> lagu = {"Ini Abadi", "Monokrom"};

    lagu.insert(lagu.begin() + 1, "everything u are");  
    lagu.push_back("Aitakatta");                        
    cout << "Setelah ditambah: ";
    for (string item : lagu) {
        cout << item << " | ";
    }
    cout << endl;

    lagu.erase(lagu.begin());                           
    cout << "Sisa lagu: ";
    for (string item : lagu) {
        cout << item << " | ";
    }
    cout << endl;

    return 0;
}
