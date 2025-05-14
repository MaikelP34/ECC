#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <complex.h> // https://stackoverflow.com/questions/6418807/how-to-work-with-complex-numbers-in-c

#include "components.h"
#include "node.h"

#define PI 3.14159265358979323846

//=====================================================================================================================================================================

float complex resistanceCapacitor(struct Capacitor *capacitor, float frequency) {
    if (capacitor == NULL) return 0.0;
    return 1.0 / (2.0 * PI * frequency * capacitor->capacitance * I);
}
float complex resistanceInductor(struct Inductor *inductor, float frequency) {
    if (inductor == NULL) return 0.0;
    return 2.0 * PI * frequency * inductor->inductance * I;
}

float getRealPart(float complex z) {
    return creal(z);
}

float getImaginaryPart(float complex z) {
    return cimag(z);
}