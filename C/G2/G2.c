#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool una_b_mas_que_a(const char *s) {
    int a = 0, b = 0;
    for (const char *p = s; *p; p++) {
        if (*p == 'a') a++;
        else if (*p == 'b') b++;
        else return false;
    }
    return b == a + 1;
}

void chomp(char *s) {
    int n = strlen(s);
    while (n > 0 && (s[n-1] == '\n' || s[n-1] == '\r')) {
        s[n-1] = '\0';
        n--;
    }
}

int main() {
    FILE *f = fopen("G2.txt", "r");
    if (!f) { printf("[ADVERTENCIA] No se encontró G2.txt\n"); return 0; }
    char linea[256];
    int i = 0;
    while (fgets(linea, sizeof(linea), f)) {
        chomp(linea);
        i++;
        bool acepta = una_b_mas_que_a(linea);
        printf("[G2][%d] %s => %s\n", i, linea[0] ? linea : "ε", acepta ? "acepta" : "NO acepta");
    }
    fclose(f);
    return 0;
}
