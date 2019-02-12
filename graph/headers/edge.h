/**
 * 
 *  Edge header file. An edge is the connection between two vertices of the same
 *  graph. Since Our program will have to work with both directed and undirected
 *  graph it will be as generic as possible.
 * 
 *  author Riccardo Sieve
 *  
 *  09/02/2019
 */

typedef struct _Edge {
    double weight;
} Edge;

/* Constructor */
Edge* Edge_create(double);
void Edge_free(Edge*);
