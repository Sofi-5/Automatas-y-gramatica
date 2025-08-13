#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool es_palindromo(const char *s) {
    for (const char *p = s; *p; p++) {
        if (*p != '0' && *p != '1') return false;
    }
    int i = 0, j = strlen(s) - 1;
    while (i < j) {
        if (s[i] != s[j]) return false;
        i++; j--;
    }
    return true;
}

void chomp(char *s) {
    int n = strlen(s);
    while (n > 0 && (s[n-1] == '\n' || s[n-1] == '\r')) {
        s[n-1] = '\0';
        n--;
    }
}

int main() {
    FILE *f = fopen("G1.txt", "r");
    if (!f) { printf("[ADVERTENCIA] No se encontró G1.txt\n"); return 0; }
    char linea[256];
    int i = 0;
    while (fgets(linea, sizeof(linea), f)) {
        chomp(linea);
        i++;
        bool acepta = es_palindromo(linea);
        printf("[G1][%d] %s => %s\n", i, linea[0] ? linea : "ε", acepta ? "acepta" : "NO acepta");
    }
    fclose(f);
    return 0;
}
