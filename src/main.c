#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "components.h"
#include "node.h"

int main() {
    printf("Begin\n");
    struct Node* nodeA = createNode(1, 0, 0);
    struct Node* nodeB = createNode(2, 0, 0);
    struct Node* nodeC = createNode(3, 0, 0);

    struct Resistor* resistor = createResistor(1000, nodeA, nodeB, '+', 1);
    struct Capacitor* capacitor = createCapacitor(0.001, nodeB, nodeC, '+', 1);
    struct voltageSource* voltageSource = createvoltageSource(5, 50, nodeA, nodeC, '+', 1);

    struct Inductor* inductor = createInductor(0.01, nodeA, nodeB, '+', 1);
    struct Diode* diode = createDiode(0.7, nodeB, nodeC, '+', 1);
    struct CurrentSource* currentSource = createCurrentSource(0.1, 50, nodeA, nodeC, '+', 1);

    // Prfloat the details of the components
    printf("Resistor: %f ohm, NodeA: %d, NodeB: %d, Polarity: %c\n", resistor->resistance, resistor->nodeA->nodeNumber, resistor->nodeB->nodeNumber, resistor->voltagePolarity);
    printf("Capacitor: %f F, NodeA: %d, NodeB: %d, Polarity: %c\n", capacitor->capacitance, capacitor->nodeA->nodeNumber, capacitor->nodeB->nodeNumber, capacitor->voltagePolarity);
    printf("Voltage Source: %f V, Frequency: %f Hz, NodeA: %d, NodeB: %d, Polarity: %c\n", voltageSource->voltage, voltageSource->frequency, voltageSource->nodeA->nodeNumber, voltageSource->nodeB->nodeNumber, voltageSource->voltagePolarity);
    printf("Node A: %d, Voltage Sum: %f, Current Sum: %f\n", nodeA->nodeNumber, nodeA->voltageSum, nodeA->currentSum);
    printf("Node B: %d, Voltage Sum: %f, Current Sum: %f\n", nodeB->nodeNumber, nodeB->voltageSum, nodeB->currentSum);
    printf("Node C: %d, Voltage Sum: %f, Current Sum: %f\n", nodeC->nodeNumber, nodeC->voltageSum, nodeC->currentSum);
    printResistor(resistor);
    printCapacitor(capacitor);
    printInductor(inductor);
    printDiode(diode);
    printvoltageSource(voltageSource);
    printCurrentSource(currentSource);
    printNode(nodeA);
    printNode(nodeB);
    printNode(nodeC);
    
    return 0;
}