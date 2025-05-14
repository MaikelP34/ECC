struct Node {
    int nodeNumber;
    float voltageSum; // Voltage in volts
    float currentSum; // Current in amperes
};

struct Node* createNode (int nodeNumber, float voltageSum, float currentSum);