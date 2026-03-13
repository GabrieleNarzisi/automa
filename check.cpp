int check (int i, int j, int tab[32][32]) {
    int c = 0;
    if (i > 0 && j < 31 && tab[i-1][j+1] == 1) c++;
    if (j < 31 && tab[i][j+1] == 1) c++;
    if (i < 31 && j < 31 && tab[i+1][j+1] == 1) c++;
    if (i > 0 && tab[i-1][j] == 1) c++;
    if (i < 31 && tab[i+1][j] == 1) c++;
    if (i > 0 && j > 0 && tab[i-1][j-1] == 1) c++;
    if (j > 0 && tab[i][j-1] == 1) c++;
    if (i < 31 && j > 0 && tab[i+1][j-1] == 1) c++;
    if (tab[i][j] == 0) {
        if (c == 3) return 1; 
    } else {
        if (c < 2 || c > 3) return 0; 
    }
    
    return tab[i][j]; 
}
