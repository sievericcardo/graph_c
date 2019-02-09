#include "headers/vertex.h"

Vertex* Vertex_create(void* vertex_name) {
    Vertex* vertex = (Vertex*) malloc(sizeof(Vertex));

    vertex->vertex_name = vertex_name;

    return vertex;
}

void Vertex_set_previous_vertex(Vertex* vertex, Vertex* previous_vertex) {
    vertex->previous_vertex = previous_vertex;
}

void Vertex_set_key(Vertex* vertex, double key) {
    vertex->key = key;
}
