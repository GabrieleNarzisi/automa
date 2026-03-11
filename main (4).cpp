#include <iostream>
#include <cstdlib>
#include "check.h"
using namespace std;

int main() {
    int tab[32][32];
    int x;
    srand(time(0));
    for (int i = 0; i < 32; i++) {
        for (int j = 0; j < 32; j++) {
            x = rand() % 67;
            if (x < 60) {
                tab[i][j] = 0;
            } else {
                tab[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < 32; i++) {
        for (int j = 0; j < 32; j++) {
            check(i, j, tab);
        }
    }
    for (int i = 0; i < 32; i++) {
        for (int j = 0; j < 32; j++) {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
    
    
    return 0;
}