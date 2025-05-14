#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "node.h"

struct Node* createNode (int nodeNumber, float voltageSum, float currentSum) {
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    if (node == NULL) return NULL;
    node->nodeNumber = nodeNumber;
    node->voltageSum = voltageSum;
    node->currentSum = currentSum;
    return node;
}