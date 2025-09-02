#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {2, 4, 2, 5, 1};
    vector<int> v(10, 5);

    string a = "hatti";
    string b = a + a;
    cout << b << "\n"; // hattihatti
    b[5] = ’v’;
    cout << b << "\n"; // hattivatti
    string c = b.substr(3, 4);
    cout << c << "\n"; // tiva
    return 0;
}