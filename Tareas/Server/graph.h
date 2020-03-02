#ifndef GRAPH_H
#define GRAPH_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "Linked_List.hpp"

/**
 * @brief structure to represent nodes of adjlist
 */
struct AdjListNode;
/**
 * @brief structure to represent adjlist
 */
struct AdjList;
/**
 * @brief graph structure
 */
struct Graph;
/**
 * @brief newAdjListNode creates a new node for the adj list
 * @param dest destination
 * @param weight
 * @return adjlistnode
 */
struct AdjListNode* newAdjListNode(int dest, int weight);
/**
 * @brief createGraph creates a new graph
 * @param V number of nodes in the graph
 * @return new graph
 */
struct Graph* createGraph(int V);
/**
 * @brief printPath
 * @param parent list of nodes
 * @param j node to visit
 */
void printPath(lista<int> parent, int j);
/**
 * @brief add Edge
 * @param graph graph to add to
 * @param src start
 * @param dest end
 * @param weight
 */
void addEdge(struct Graph* graph, int src, int dest, int weight);
/**
 * @brief node for a heap
 */
struct MinHeapNode;
/**
 * @brief a min heap
 */
struct MinHeap;
/**
 * @brief creat a MinHeapNode
 * @param v connection
 * @param dist weight of the node
 * @return new node
 */
struct MinHeapNode* newMinHeapNode(int v, int dist);
/**
 * @brief create MinHeap
 * @param capacity
 * @return minheap
 */
struct MinHeap* createMinHeap(int capacity);
/**
 * @brief swap MinHeapNode
 * @param a node 1
 * @param b node 2
 */
void swapMinHeapNode(struct MinHeapNode** a, struct MinHeapNode** b);
/**
 * @brief minHeapify
 * @param minHeap to heapify
 * @param idx pos to heapify
 */
void minHeapify(struct MinHeap* minHeap, int idx);
/**
 * @brief checks if heap is Empty
 * @param minHeap to check
 * @return
 */
int isEmpty(struct MinHeap* minHeap);
/**
 * @brief extract Min value in heap
 * @param minHeap to exctract from
 * @return  minheapnode
 */
struct MinHeapNode* extractMin(struct MinHeap* minHeap);
/**
 * @brief decreaseKey of distance in a node connection
 * @param minHeap to change
 * @param v node to check
 * @param dist new distance
 */
void decreaseKey(struct MinHeap* minHeap, int v, int dist);
/**
 * @brief checks if it is In MinHeap
 * @param minHeap to check
 * @param v value to comapre
 * @return bool
 */
bool isInMinHeap(struct MinHeap *minHeap, int v);
/**
 * @brief printlist prints solution to console
 * @param dist list of distances between nodes
 * @param parent list with node connections
 * @param n
 */
void printlist(lista<int> dist,lista<int> parent, int n);
/**
 * @brief dijkstra shortest path algorithm
 * @param graph graph to check
 * @param src start
 * @param to end
 * @return string of the route;
 */
std::string dijkstra(struct Graph* graph, int src,int to);

#endif // GRAPH_H
