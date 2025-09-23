#include <iostream>
#include <vector>
using namespace std;

void CHANGE(int n) {
    int C[n + 1];        // เก็บจำนวนเหรียญขั้นต่ำ
    int coinUsed[n + 1]; // เก็บว่า p มาจากเหรียญอะไร
    int d[4] = {1, 4, 5, 10}, k = 4;

    C[0] = 0;
    coinUsed[0] = -1; // base case

    for (int p = 1; p <= n; p++) {
        int min = n;
        int used = -1;
        for (int i = 0; i < k; i++) {
            if (p >= d[i]) {
                if (C[p - d[i]] + 1 < min) {
                    min = C[p - d[i]] + 1;
                    used = d[i]; // จำว่า p ได้มาจากใช้เหรียญนี้
                }
            }
        }
        C[p] = min;
        coinUsed[p] = used;
    }

    // แสดงผล DP ทั้งหมด
    for (int i = 0; i <= n; i++) {
        cout << "C[" << i << "] = " << C[i] << endl;
    }

    // แสดงผลการใช้เหรียญจริง ๆ
    cout << "\nMinimum coins for " << n << " = " << C[n] << endl;
    cout << "Coins used: ";
    int p = n;
    while (p > 0 && coinUsed[p] != -1) {
        cout << coinUsed[p] << " ";
        p -= coinUsed[p];
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter amount: ";
    cin >> n;
    CHANGE(n);
    return 0;
}
