#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool a_inicio_b_final(const char *s) {
    int len = strlen(s);
    if (len < 2) return false;
    for (int i = 0; i < len; i++) {
        if (s[i] != 'a' && s[i] != 'b') return false;
    }
    return s[0] == 'a' && s[len-1] == 'b';
}

void chomp(char *s) {
    int n = strlen(s);
    while (n > 0 && (s[n-1] == '\n' || s[n-1] == '\r')) {
        s[n-1] = '\0';
        n--;
    }
}

int main() {
    FILE *f = fopen("G5.txt", "r");
    if (!f) { printf("[ADVERTENCIA] No se encontró G5.txt\n"); return 0; }
    char linea[256];
    int i = 0;
    while (fgets(linea, sizeof(linea), f)) {
        chomp(linea);
        i++;
        bool acepta = a_inicio_b_final(linea);
        printf("[G5][%d] %s => %s\n", i, linea[0] ? linea : "ε", acepta ? "acepta" : "NO acepta");
    }
    fclose(f);
    return 0;
}
