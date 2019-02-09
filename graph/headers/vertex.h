/**
 * 
 *  Veretx header file
 *  
 *  The vertex elements are the base components of the graphs. They will be
 *  used as nodes for the graph structure. They will be connected via edges.
 *  Since a generic element is necessary to make the graph code reusable, their
 *  element will have void* type
 * 
 *  @author Riccardo Sieve
 *  @version 0.1
 *  @date 09/02/2019
 */

typedef struct _Vertex {
    void* vertex_name;
    double key;
    struct _Vertex* previous_vertex;
} Vertex;

/* Constructor */
Vertex* Vertex_create(void*);

/*
 *  Definition of setters for initialisation of elements inside the vertex
 */
void Vertex_set_previous_vertex(Vertex*, Vertex*);
void Vertex_set_key(Vertex*, double);
