from pathlib import Path

def a_inicio_b_final(s: str) -> bool:
    if not all(c in "ab" for c in s):
        return False
    return len(s) >= 2 and s[0] == 'a' and s[-1] == 'b'

def main():
    archivo = Path("G5.txt")
    if not archivo.exists():
        print("[ADVERTENCIA] No se encontró G5.txt")
        return
    with archivo.open("r", encoding="utf-8") as f:
        for i, linea in enumerate(f, start=1):
            s = linea.strip()
            acepta = a_inicio_b_final(s)
            veredicto = "acepta" if acepta else "NO acepta"
            mostrar = s if s else "ε"
            print(f"[G5][{i}] {mostrar} => {veredicto}")


main()