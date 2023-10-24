#include <iostream>
#include <fstream>
#include <algorithm>
#include <stdexcept>
#include <vector>
#include "Func.h"
using namespace std;

void funkcijeVectora(vector<int> brojevi)
{
    auto num = find_if(brojevi.begin(), brojevi.end(), [](int x)
        {
            return x % 2;
        });
    if (num != brojevi.end()) {
        cout <<  *num << endl;
    }
    else {
        cout << "Nema neparnih brojeva" << endl;
    }

    auto cnt = count_if(brojevi.begin(), brojevi.end(), [](int x)
        {
            return x % 2;
        });
    cout << "Broj neparnih brojeva: " << cnt << endl;

    replace_if(brojevi.begin(), brojevi.end(), [](int x) { return (x & (x - 1)) == 0; }, 2);

    for (int x : brojevi) {
        cout << x << ' ';
    }

}


vector<int> citanjeBrojeva(const string& fileName) {
    vector<int> brojevi;
    int cnt;
    ifstream file(fileName);

    if (!file.is_open()) {
        throw runtime_error("Error occured while opening a file!");
    }

    istream_iterator<int> it(file);
    istream_iterator<int> end;

    copy(it, end, back_inserter(brojevi));

    cnt = count_if(brojevi.begin(), brojevi.end(), [](int x) {return x > 500; });
    cout <<"Lista ima "<< cnt << " brojeva koji su veci od 500 " << endl;

    auto min = min_element(brojevi.begin(), brojevi.end());
    cout << "Najmanji broj je " << *min << endl;
    auto max = max_element(brojevi.begin(), brojevi.end());
    cout << "Najveci je: " << *max << endl;

    sortiranjeParnihPaNeparnih(brojevi);

    file.clear();
    file.seekg(0, ios::beg);

    istream_iterator<int> it2(file);
    ostream_iterator<int> out(cout, "\n");
  

    brojevi.erase(remove_if(brojevi.begin(), brojevi.end(), [](int x) {return x < 300; }), brojevi.end());

    sort(brojevi.begin(), brojevi.end(), [](int a, int b) { return a > b; });

    return brojevi;
}

bool comp(int x, int y)
{
    bool evenX = (x % 2) == 0;
    bool evenY = (y % 2) == 0;

    if (evenX && !evenY)
        return true;

    else if (!evenX && evenY)
        return false;
    else
        return x < y;
}

void sortiranjeParnihPaNeparnih(vector<int> brojevi)
{
    sort(brojevi.begin(), brojevi.end(), comp);
    for (int x : brojevi) 
    {
        cout << x << endl;
    }
}

