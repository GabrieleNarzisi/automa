int check (int i, int j, int tab[32][32]) {
    int c = 0;
    for (int i = 0; i < 32; i++) {
        for (int j = 0; j < 32; j++) {
            if (tab[i- 1][j+ 1] == 1) {
                c++;
            }
            if (tab[i][j+ 1] == 1) {
                c++;
            }
            if (tab[i+ 1][j+ 1] == 1) {
                c++;
            }
            if (tab[i- 1][j] == 1) {
                c++;
            }
            if (tab[i+ 1][j] == 1) {
                c++;
            }
            if (tab[i- 1][j- 1] == 1) {
                c++;
            }
            if (tab[i][j- 1] == 1) {
                c++;
            }
            if (tab[i+ 1][j- 1] == 1) {
                c++;
            }
            if (tab[i][j] == 0) {
                if (c == 0) {
                    tab[i][j] = 1;
                }
            } else {
                if (c < 2) {
                    tab[i][j] = 0;
                } else if (c > 3) {
                    tab[i][j] = 0;
                }
            }
            return tab[i][j];
        }
    }
}