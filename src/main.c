#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "components.h"
#include "calculations.h"

int main() {
    printf("Begin\n");

    struct Node* nodeA = createNode(1, 0);
    struct Node* nodeB = createNode(2, 0);
    struct Node* nodeC = createNode(3, 0);

    struct Resistor* resistor = createResistor(1000, nodeA, nodeB, '+', 1);
    struct Capacitor* capacitor = createCapacitor(0.001, nodeB, nodeC, '+', 1);
    struct voltageSource* voltageSource = createvoltageSource(5, 50, nodeA, nodeC, '+', 1);

    struct Inductor* inductor = createInductor(0.01, nodeA, nodeB, '+', 1);
    struct Diode* diode = createDiode(0.7, nodeB, nodeC, '+', 1);
    struct CurrentSource* currentSource = createCurrentSource(0.1, 50, nodeA, nodeC, '+', 1);

    
    printf("Resistor: %f ohm, NodeA: %d, NodeB: %d, Polarity: %c\n", resistor->resistance, resistor->nodeA->nodeNumber, resistor->nodeB->nodeNumber, resistor->voltagePolarity);
    printf("Capacitor: %f F, NodeA: %d, NodeB: %d, Polarity: %c\n", capacitor->capacitance, capacitor->nodeA->nodeNumber, capacitor->nodeB->nodeNumber, capacitor->voltagePolarity);
    printf("Voltage Source: %f V, Frequency: %f Hz, NodeA: %d, NodeB: %d, Polarity: %c\n", voltageSource->voltage, voltageSource->frequency, voltageSource->nodeA->nodeNumber, voltageSource->nodeB->nodeNumber, voltageSource->voltagePolarity);
    printf("Node A: %d, Current Sum: %f\n", nodeA->nodeNumber, nodeA->currentSum);
    printf("Node B: %d, Current Sum: %f\n", nodeB->nodeNumber, nodeB->currentSum);
    printf("Node C: %d, Current Sum: %f\n", nodeC->nodeNumber, nodeC->currentSum);
    printResistor(resistor);
    printCapacitor(capacitor);
    printInductor(inductor);
    printDiode(diode);
    printvoltageSource(voltageSource);
    printCurrentSource(currentSource);
    printNode(nodeA);
    printNode(nodeB);
    printNode(nodeC);

    // resistanceCapacitor(capacitor, voltageSource->frequency);
    // resistanceInductor(inductor, voltageSource->frequency);
    // printf("Capacitor impedance: %f + %fi\n", creal(resistanceCapacitor(capacitor, voltageSource->frequency)), cimag(resistanceCapacitor(capacitor, voltageSource->frequency)));
    // printf("Inductor impedance: %f + %fi\n", creal(resistanceInductor(inductor, voltageSource->frequency)), cimag(resistanceInductor(inductor, voltageSource->frequency)));
    // getRealPart(resistanceCapacitor(capacitor, voltageSource->frequency));
    // getImaginaryPart(resistanceCapacitor(capacitor, voltageSource->frequency));
    // printf("Real part: %f\n", getRealPart(resistanceCapacitor(capacitor, voltageSource->frequency)));
    // printf("Imaginary part: %f\n", getImaginaryPart(resistanceCapacitor(capacitor, voltageSource->frequency)));
    // getRealPart(resistanceInductor(inductor, voltageSource->frequency));
    // getImaginaryPart(resistanceInductor(inductor, voltageSource->frequency));
    // printf("Real part: %f\n", getRealPart(resistanceInductor(inductor, voltageSource->frequency)));
    // printf("Imaginary part: %f\n", getImaginaryPart(resistanceInductor(inductor, voltageSource->frequency)));

    return 0;
}