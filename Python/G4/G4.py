from pathlib import Path

def ab_o_abb(s: str) -> bool:
    return s in ("ab", "abb")

def main():
    archivo = Path("G4.txt")
    if not archivo.exists():
        print("[ADVERTENCIA] No se encontró G4.txt")
        return
    with archivo.open("r", encoding="utf-8") as f:
        for i, linea in enumerate(f, start=1):
            s = linea.strip()
            acepta = ab_o_abb(s)
            veredicto = "acepta" if acepta else "NO acepta"
            mostrar = s if s else "ε"

            print(f"[G4][{i}] {mostrar} => {veredicto}")

main()
