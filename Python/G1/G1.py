from pathlib import Path

def es_palindromo(s: str) -> bool:
    return all(c in "01" for c in s) and s == s[::-1]

def main():
    archivo = Path("G1.txt")
    if not archivo.exists():
        print("[ADVERTENCIA] No se encontró G1.txt")
        return
    with archivo.open("r", encoding="utf-8") as f:
        for i, linea in enumerate(f, start=1):
            s = linea.strip()
            acepta = es_palindromo(s)
            veredicto = "acepta" if acepta else "NO acepta"
            mostrar = s if s != "" else "ε"
            print(f"[G1][{i}] {mostrar} => {veredicto}")

main()