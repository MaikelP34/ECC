#include <complex.h>

float complex resistanceCapacitor(struct Capacitor *capacitor, float frequency);
float complex resistanceInductor(struct Inductor *inductor, float frequency);
float getRealPart(float complex z);
float getImaginaryPart(float complex z);