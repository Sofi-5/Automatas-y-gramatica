from pathlib import Path

def una_b_mas_que_a_con_n_mayor_0(s: str) -> bool:
    if not all(c in "ab" for c in s):
        return False
    return s.count('a') >= 1 and s.count('b') == s.count('a') + 1

def main():
    archivo = Path("G3.txt")
    if not archivo.exists():
        print("[ADVERTENCIA] No se encontró G3.txt")
        return
    with archivo.open("r", encoding="utf-8") as f:
        for i, linea in enumerate(f, start=1):
            s = linea.strip()
            acepta = una_b_mas_que_a_con_n_mayor_0(s)
            veredicto = "acepta" if acepta else "NO acepta"
            mostrar = s if s else "ε"
            print(f"[G3][{i}] {mostrar} => {veredicto}")

main()