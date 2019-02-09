#include "headers/edge.h"

Edge* Edge_create(double weight) {
    Edge* edge = (Edge*) malloc(sizeof(Edge));

    edge->weight = weight;

    return edge;
}
