/**
 * 
 *  Graph file containing the base structure for the Graph.
 *  It gets two vertices and the edge between them.
 * 
 *  author Riccardo Sieve
 * 
 *  12/02/2019
 */

#include "vertex.h"
#include "edge.h"

typedef struct _Graph {
    Vertex* source_vertex;
    Vertex* destination_vertex;
    Edge* edge;
} Graph;
