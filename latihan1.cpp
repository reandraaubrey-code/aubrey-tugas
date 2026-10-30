#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> antrean = {"Budi", "Siti"};

    antrean.insert(antrean.begin(), "Roni");  
    antrean.push_back("Dewi");                
    cout << "Setelah ditambah: ";
    for (string item : antrean) {
        cout << item << " ";
    }
    cout << endl;

    antrean.erase(antrean.begin());           
    cout << "Setelah dilayani: ";
    for (string item : antrean) {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}
