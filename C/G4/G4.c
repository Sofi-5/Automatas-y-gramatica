#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool ab_o_abb(const char *s) {
    return strcmp(s, "ab") == 0 || strcmp(s, "abb") == 0;
}

void chomp(char *s) {
    int n = strlen(s);
    while (n > 0 && (s[n-1] == '\n' || s[n-1] == '\r')) {
        s[n-1] = '\0';
        n--;
    }
}

int main() {
    FILE *f = fopen("G4.txt", "r");
    if (!f) { printf("[ADVERTENCIA] No se encontró G4.txt\n"); return 0; }
    char linea[256];
    int i = 0;
    while (fgets(linea, sizeof(linea), f)) {
        chomp(linea);
        i++;
        bool acepta = ab_o_abb(linea);
        printf("[G4][%d] %s => %s\n", i, linea[0] ? linea : "ε", acepta ? "acepta" : "NO acepta");
    }
    fclose(f);
    return 0;
}
