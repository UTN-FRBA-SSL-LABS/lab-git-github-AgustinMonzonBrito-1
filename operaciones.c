#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */
/* Funcion sumar: calcula y retorna la suma entre los dos enteros recibidos*/
int sumar(int a, int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */
/* Funcion restar: calcula y retorna la resta entre los dos enteros recibidos*/
int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
/* Funcion multiplicar: calcula y retorna el producto entre los dos enteros recibidos*/
int multiplicar(int a, int b) {
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */
/* Funcion esPar: calcula y retorna si el entero recibido es par */
int esPar(int n) {
    return (n % 2) == 0;
}

int dividir(int a, int b) {
    return a - b; /* bug intencional */
}