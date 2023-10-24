#include <iostream>
#include <stdexcept>
#include <fstream>
#include <vector>
#include "Func.h"
using namespace std;


int main() {
    vector<int> brojevi;
    try {
        brojevi = citanjeBrojeva("numbers.txt");

        for (int br : brojevi) {
            cout << br << endl;
        }
    }
    catch (const runtime_error& err) {
        cout << err.what() << endl;
    }

    funkcijeVectora(brojevi);

    return 0;
}
