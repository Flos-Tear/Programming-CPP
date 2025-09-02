#include <iostream>
#include <string>
#include <vector>
#include <bitset>
#include <deque>
#include <queue>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

int main() {
    bitset<10> s_bitset(string("0010011010"));
    cout << s_bitset[4] << "\n";
    cout << s_bitset[5] << "\n";

    bitset<10> a(string("0010110110"));
    bitset<10> b(string("1011011000"));
    cout << (a & b) << "\n";
    cout << (a | b) << "\n";
    cout << (a ^ b) << "\n";

    deque<int> d;
    d.push_back(5);
    d.push_back(2);
    d.push_front(3);
    d.pop_back();
    d.pop_front();

    priority_queue<int> q;
    q.push(3);
    q.push(5);
    q.push(7);
    q.push(2);
    cout << q.top() << "\n";
    q.pop();
    cout << q.top() << "\n";
    q.pop();
    q.push(6);
    cout << q.top() << "\n";
    q.pop();

    typedef tree<int, null_type, less<int>, rb_tree_tag,
                 tree_order_statistics_node_update>
        indexed_set;

    indexed_set s_indexed;
    s_indexed.insert(2);
    s_indexed.insert(3);
    s_indexed.insert(7);
    s_indexed.insert(9);
    auto x = s_indexed.find_by_order(2);
    cout << *x << "\n";
    cout << s_indexed.order_of_key(7) << "\n";
    cout << s_indexed.order_of_key(6) << "\n";
    cout << s_indexed.order_of_key(8) << "\n";
    return 0;
}