from cffi import FFI

ffi = FFI()

ffi.cdef("double zehnSine(void)")

ffi.set_source("sineFFI",
"""
#include <stdio.h>
#include <math.h>

double zehnSine(void) {
     // Konstante Pi definieren
    const double Pi = 3.141592653;

    // Variablen definieren
    double winkel;
    double rad;
    double sinus;
    int i;

    rad = winkel * Pi / 180;
    sinus = sin(rad);
    return sinus;
}
""")

ffi.compile()

