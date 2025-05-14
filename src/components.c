#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "components.h"
#include "node.h" // Make sure this header defines struct Node

//=====================================================================================================================================================================

struct Resistor* createResistor (float resistance, struct Node *nodeA, struct Node *nodeB, char voltagePolarity, int number) {
    struct Resistor *resistor = (struct Resistor *)malloc(sizeof(struct Resistor));
    if (resistor == NULL) return NULL;
    resistor->resistance = resistance;
    resistor->nodeA = nodeA;
    resistor->nodeB = nodeB;
    resistor->voltagePolarity = voltagePolarity;
    resistor->number = number;
    return resistor;
}

struct Capacitor* createCapacitor (float capacitance, struct Node *nodeA, struct Node *nodeB, char voltagePolarity, int number) {
    struct Capacitor *capacitor = (struct Capacitor *)malloc(sizeof(struct Capacitor));
    if (capacitor == NULL) return NULL;
    capacitor->capacitance = capacitance;
    capacitor->nodeA = nodeA;
    capacitor->nodeB = nodeB;
    capacitor->voltagePolarity = voltagePolarity;
    capacitor->number = number;
    return capacitor;
}

struct Inductor* createInductor (float inductance, struct Node *nodeA, struct Node *nodeB, char voltagePolarity, int number) {
    struct Inductor *inductor = (struct Inductor *)malloc(sizeof(struct Inductor));
    if (inductor == NULL) return NULL;
    inductor->inductance = inductance;
    inductor->nodeA = nodeA;
    inductor->nodeB = nodeB;
    inductor->voltagePolarity = voltagePolarity;
    inductor->number = number;
    return inductor;
}

struct Diode* createDiode (float forwardvoltage, struct Node *nodeA, struct Node *nodeB, char voltagePolarity, int number) {
    struct Diode *diode = (struct Diode *)malloc(sizeof(struct Diode));
    if (diode == NULL) return NULL;
    diode->forwardvoltage = forwardvoltage;
    diode->nodeA = nodeA;
    diode->nodeB = nodeB;
    diode->voltagePolarity = voltagePolarity;
    diode->number = number;
    return diode;
}

struct voltageSource* createvoltageSource (float voltage, float frequency, struct Node *nodeA, struct Node *nodeB, char voltagePolarity, int number) {
    struct voltageSource *voltageSource = (struct voltageSource *)malloc(sizeof(struct voltageSource));
    if (voltageSource == NULL) return NULL;
    voltageSource->voltage = voltage;
    voltageSource->frequency = frequency;
    voltageSource->nodeA = nodeA;
    voltageSource->nodeB = nodeB;
    voltageSource->voltagePolarity = voltagePolarity;
    voltageSource->number = number;
    return voltageSource;
}

struct CurrentSource* createCurrentSource (float current, float frequency, struct Node *nodeA, struct Node *nodeB, char currentDirection, int number) {
    struct CurrentSource *currentSource = (struct CurrentSource *)malloc(sizeof(struct CurrentSource));
    if (currentSource == NULL) return NULL;
    currentSource->current = current;
    currentSource->frequency = frequency;
    currentSource->nodeA = nodeA;
    currentSource->nodeB = nodeB;
    currentSource->currentDirection = currentDirection;
    currentSource->number = number;
    return currentSource;
}

//=====================================================================================================================================================================

void deleteResistor (struct Resistor *resistor) {
    if (resistor != NULL) {
        free(resistor);
    }
}

void deleteCapacitor (struct Capacitor *capacitor) {
    if (capacitor != NULL) {
        free(capacitor);
    }
}

void deleteInductor (struct Inductor *inductor) {
    if (inductor != NULL) {
        free(inductor);
    }
}

void deleteDiode (struct Diode *diode) {
    if (diode != NULL) {
        free(diode);
    }
}

void deletevoltageSource (struct voltageSource *voltageSource) {
    if (voltageSource != NULL) {
        free(voltageSource);
    }
}

void deleteCurrentSource (struct CurrentSource *currentSource) {
    if (currentSource != NULL) {
        free(currentSource);
    }
}

void deleteNode (struct Node *node) {
    if (node != NULL) {
        free(node);
    }
}

//=====================================================================================================================================================================

void printResistor (struct Resistor *resistor) {
    if (resistor != NULL) {
    //print visualisation of the resistor
    printf("      R%d\n", resistor->number);
    printf("   ---------  \n");
    printf(" --|       |--\n");
    printf("   ---------  \n");
    }
}

void printCapacitor (struct Capacitor *capacitor) {
    if (capacitor != NULL) {
    //print visualisation of the capacitor
    printf("    C%d\n", capacitor->number);
    printf("   |  |  \n");
    printf(" --|  |--\n");
    printf("   |  |  \n");;
    }
}

void printInductor (struct Inductor *inductor) {
    if (inductor != NULL) {
    //print visualisation of the inductor
    printf("       L%d\n", inductor->number);
    printf("     /\\       \n");
    printf(" --/   \\  /--\n");
    printf("        \\/    \n");;
    }
}

void printDiode (struct Diode *diode) {
    if (diode != NULL) {
    //print visualisation of the diode
    printf("     D%d\n", diode->number);
    printf("   |\\  |  \n");
    printf(" __|  \\|__\n");
    printf("   |  /|  \n");
    printf("   |/  |  \n");
    }
}

void printvoltageSource (struct voltageSource *voltageSource) {
    if (voltageSource != NULL) {
    //print visualisation of the voltage source
    printf("    V%d\n", voltageSource->number);
    printf("      |  \n");
    printf(" --|  |--\n");
    printf("      |  \n");;
    }
}

void printCurrentSource (struct CurrentSource *currentSource) {
    if (currentSource != NULL) {
    //print visualisation of the current source
    printf("      I%d\n", currentSource->number);
    printf("    --  --  \n");
    printf(" --|  ||  |--\n");
    printf("    --  --  \n");
    }
}

void printNode (struct Node *node) {
    if (node != NULL) {
    //print visualisation of the node
    printf("    N%d\n", node->nodeNumber);
    printf("    --  \n");
    printf(" --|  |--\n");
    printf("    --  \n");
    }
}
