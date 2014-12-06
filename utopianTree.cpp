#include <iostream>
using namespace std;

int springCycle(int h) {
    return h*2;
}

int summerCycle(int h) {
    return h+1;
}

int height(int n) {
    int heightAfterGrowth = 1;
    for (int i = 2; i < n+2; i++) {
      if (i % 2 == 0)
        heightAfterGrowth = springCycle(heightAfterGrowth); // doubles in height during spring
      else
        heightAfterGrowth = summerCycle(heightAfterGrowth); // height increases by 1 meter
    }
    return heightAfterGrowth;
}

int main() {
    int T;
    cin >> T;
    int T2 = T;
    int n[T];
    while (T2--) {
        cin >> n[T2];
    }

    while (T--) {
        cout << height(n[T]) << endl;
    }
}

