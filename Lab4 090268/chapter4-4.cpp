#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
using namespace std;

int main()
{

    vector<int> v = {5, 2, 8, 1, 9};
    int a[] = {4, 7, 3, 6};
    const int n = sizeof(a) / sizeof(a[0]);
    set<int> s = {10, 20, 40, 50};
    int x = 33;

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    random_shuffle(v.begin(), v.end());

    sort(a, a + n);
    reverse(a, a + n);
    random_shuffle(a, a + n);

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << "\n";
    }
    auto it = s.find(x);
    if (it == s.end())
    {
        auto it = s.lower_bound(x);
        if (it == s.begin())
        {
            cout << *it << "\n";
        }
        else if (it == s.end())
        {
            it--;
            cout << *it << "\n";
        }
        else
        {
            int a = *it;
            it--;
            int b = *it;
            if (x - b < a - x)
                cout << b << "\n";
            else
                cout << a << "\n";
        }
    }
    return 0;
}