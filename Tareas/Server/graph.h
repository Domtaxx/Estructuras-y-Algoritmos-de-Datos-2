#ifndef GRAPH_H
#define GRAPH_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "Linked_List.hpp"

struct AdjListNode;
struct AdjList;
struct Graph;
struct AdjListNode* newAdjListNode(int dest, int weight);
struct Graph* createGraph(int V);
void printPath(lista<int> parent, int j);
void addEdge(struct Graph* graph, int src, int dest, int weight);
struct MinHeapNode;
struct MinHeap;
struct MinHeapNode* newMinHeapNode(int v, int dist);
struct MinHeap* createMinHeap(int capacity);
void swapMinHeapNode(struct MinHeapNode** a, struct MinHeapNode** b);
void minHeapify(struct MinHeap* minHeap, int idx);
int isEmpty(struct MinHeap* minHeap);
struct MinHeapNode* extractMin(struct MinHeap* minHeap);
void decreaseKey(struct MinHeap* minHeap, int v, int dist);
bool isInMinHeap(struct MinHeap *minHeap, int v);
void printlist(lista<int> dist,lista<int> parent, int n);
std::string dijkstra(struct Graph* graph, int src,int to);

#endif // GRAPH_H
