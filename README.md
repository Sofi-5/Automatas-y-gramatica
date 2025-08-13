# Automatas-y-gramatica

# Reconocedor de Lenguajes — 5 Gramáticas

Este proyecto implementa **5 gramáticas** de la presentación del curso, en **Python** y en **C**, donde cada gramática está en un archivo separado.  
Las cadenas se leen desde archivos `.txt` (uno por gramática) y la salida se muestra por pantalla con el formato:

---

## Introducción

En el ámbito del procesamiento de lenguajes formales y autómatas, es fundamental poder reconocer si una cadena pertenece a un lenguaje definido por una gramática.  
Este trabajo implementa, en dos lenguajes de programación distintos (Python y C), el reconocimiento de cadenas para 5 gramáticas específicas:

1. **G1:** Palíndromos (tapicúas) sobre `{0,1}`.  
2. **G2:** Cadenas con **una `b` más que `a`**, en cualquier orden.  
3. **G3:** Cadenas con **una `b` más que `a`**, pero con al menos **una `a`**.  
4. **G4:** Lenguaje formado solo por las cadenas `"ab"` y `"abb"`.  
5. **G5:** Cadenas que **empiezan con `a` y terminan con `b`**, con cualquier combinación de `a` y `b` en el centro.

---

## Gramáticas

### G1 — Palíndromos sobre `{0,1}`
Una cadena se acepta si:
- Contiene solo `0` y `1`.
- Se lee igual de izquierda a derecha y de derecha a izquierda.
- La cadena vacía `ε` es aceptada.

Ejemplo: `010`, `0110`, `ε`.

---

### G2 — Una `b` más que `a`
Una cadena se acepta si:
- Contiene solo `a` y `b`.
- El número de `b` es **exactamente 1 más** que el número de `a`.

Ejemplo: `b`, `abb`, `aabbb`.

---

### G3 — Una `b` más que `a` con `n>0`
Una cadena se acepta si:
- Contiene solo `a` y `b`.
- Tiene **al menos una `a`**.
- El número de `b` es **exactamente 1 más** que el número de `a`.

Ejemplo: `abb`, `aabbb`.

---

### G4 — `ab` | `abb`
Solo se aceptan exactamente:
- `"ab"`
- `"abb"`

---

### G5 — `a` inicio, `b` final
Una cadena se acepta si:
- Contiene solo `a` y `b`.
- Mide al menos 2 caracteres.
- Empieza con `a` y termina con `b`.

Ejemplo: `ab`, `aab`, `aaabb`.

---

## Implementación

### En Python
- Cada gramática está en un archivo independiente: `G1.py`, `G2.py`, ..., `G5.py`.
- Cada script:
  - Abre el archivo `Gx.txt` correspondiente.
  - Lee línea por línea.
  - Aplica la función de validación según la gramática.
  - Imprime si la cadena **acepta** o **NO acepta**.

## En C
Cada gramática está en un archivo independiente: G1.c, G2.c, ..., G5.c.

Compilación con GCC:
