struct Resistor {
    float resistance; // Resistance in ohms
    struct Node *nodeA;
    struct Node *nodeB;
    char voltagePolarity; // + : A->B, - : B->A
    int number;
    
};
struct Capacitor {
    float capacitance; // Capacitance in farads
    struct Node *nodeA;
    struct Node *nodeB;
    char voltagePolarity; // + : A->B, - : B->A
    int number;
};
struct Inductor {
    float inductance; // Inductance in henries
    struct Node *nodeA;
    struct Node *nodeB;
    char voltagePolarity; // + : A->B, - : B->A
    int number;
};
struct Diode {
    float forwardvoltage; // Forward voltage drop in volts
    struct Node *nodeA;
    struct Node *nodeB;
    char voltagePolarity; // + : A->B, - : B->A
    int number;
};
struct voltageSource {
    float voltage; // voltage in volts
    float frequency; // Frequency in hertz
    struct Node *nodeA;
    struct Node *nodeB;
    char voltagePolarity; // + : A->B, - : B->A
    int number;
};
struct CurrentSource {
    float current; // Current in amperes
    float frequency; // Frequency in hertz
    struct Node *nodeA;
    struct Node *nodeB;
    char currentDirection; // + : A->B, - : B->A
    int number;
};

struct Node {
    int nodeNumber;
    float currentSum; // Current in amperes
};

struct Resistor* createResistor(float resistance, struct Node *nodeA, struct Node *nodeB, char voltagePolarity, int number);
struct Capacitor* createCapacitor(float capacitance, struct Node *nodeA, struct Node *nodeB, char voltagePolarity, int number);
struct Inductor* createInductor(float inductance, struct Node *nodeA, struct Node *nodeB, char voltagePolarity, int number);
struct Diode* createDiode(float forwardvoltage, struct Node *nodeA, struct Node *nodeB, char voltagePolarity, int number);
struct voltageSource* createvoltageSource(float voltage, float frequency, struct Node *nodeA, struct Node *nodeB, char voltagePolarity, int number);
struct CurrentSource* createCurrentSource(float current, float frequency, struct Node *nodeA, struct Node *nodeB, char currentDirection, int number);
struct Node* createNode (int nodeNumber,  float currentSum);

void deleteResistor (struct Resistor *resistor);
void deleteCapacitor (struct Capacitor *capacitor);
void deleteInductor (struct Inductor *inductor);
void deleteDiode (struct Diode *diode);
void deletevoltageSource (struct voltageSource *voltageSource);
void deleteCurrentSource (struct CurrentSource *currentSource);
void deleteNode(struct Node *node);
void printResistor (struct Resistor *resistor);
void printCapacitor (struct Capacitor *capacitor);
void printInductor (struct Inductor *inductor);
void printDiode (struct Diode *diode);
void printvoltageSource (struct voltageSource *voltageSource);
void printCurrentSource (struct CurrentSource *currentSource);
void printNode (struct Node *node);
void updateResistor (struct Resistor *resistor, float newResistance, struct Node *newNodeA, struct Node *newNodeB, char newVoltagePolarity);
void updateCapacitor (struct Capacitor *capacitor, float newCapacitance, struct Node *newNodeA, struct Node *newNodeB, char newVoltagePolarity);
void updateInductor (struct Inductor *inductor, float newInductance, struct Node *newNodeA, struct Node *newNodeB, char newVoltagePolarity);
void updateDiode (struct Diode *diode, float newForwardVoltage, struct Node *newNodeA, struct Node *newNodeB, char newVoltagePolarity);
void updatevoltageSource (struct voltageSource *voltageSource, float newVoltage, float newFrequency, struct Node *newNodeA, struct Node *newNodeB, char newVoltagePolarity);
void updateCurrentSource (struct CurrentSource *currentSource, float newCurrent, float newFrequency, struct Node *newNodeA, struct Node *newNodeB, char newCurrentDirection);

