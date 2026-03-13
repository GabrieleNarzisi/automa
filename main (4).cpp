#include <iostream>
#include <cstdlib>
#include "check.h"
using namespace std;

int main() {
    int tab[32][32];
    int x;
    int y;
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

    while (1 == 1) {
        y = 0;
        int tab2[32][32];
        for (int i = 0; i < 32; i++) {
            for (int j = 0; j < 32; j++) {
                tab2[i][j] = check(i, j, tab);
            }
        }
        for (int i = 0; i < 32; i++) {
            for (int j = 0; j < 32; j++) {
                tab[i][j] = tab2[i][j];
                if (tab[i][j] == 1) {
                    cout << "\033[42m  \033[0m" << " ";
                } else {
                    cout << "\033[41m  \033[0m" << " ";
                }
            }
            cout << endl;
        }
        cin >> y;
    }
    
    return 0;
}
