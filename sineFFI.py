from cffi import FFI

ffi = FFI()

ffi.set_source("sinusCFFI",
"""
#include <stdio.h>
#include <math.h>


        double mySine(double winkel) {
             // Konstante Pi definieren
             const double Pi = 3.141592653;

             // Variablen definieren
             double rad;
             double sinus;

             rad = winkel * Pi / 180;
             sinus = sin(rad);
             return(sinus);
        }
""")

ffi.cdef("double mySine(double winkel);")

ffi.compile()

