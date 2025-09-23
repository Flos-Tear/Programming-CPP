#include <iostream>
#include <vector>
using namespace std;

void CHANGE(int n) {
    int d[4] = {1, 4, 5, 10}, k = 4;
    vector<int> C(n + 1, n + 1);      // Minimum number of coins
    vector<int> coinUsed(n + 1, -1);  // Which coin was used last
    
    C[0] = 0; // base case

    for (int p = 1; p <= n; p++) {
        for (int i = 0; i < k; i++) {
            if (p >= d[i] && C[p - d[i]] + 1 < C[p]) {
                C[p] = C[p - d[i]] + 1;
                coinUsed[p] = d[i]; // remember which coin was used
            }
        }
    }

    // Show result
    cout << "Minimum coins for " << n << " = " << C[n] << endl;

    cout << "Coins used: ";
    int p = n;
    vector<int> coins;
    while (p > 0 && coinUsed[p] != -1) {
        coins.push_back(coinUsed[p]);
        p -= coinUsed[p];
    }
    // Print in order
    for (int c : coins) cout << c << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Enter amount: ";
    