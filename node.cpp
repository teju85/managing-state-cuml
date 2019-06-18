#include "node.hpp"
#include "node.h"
#include <stdio.h>

extern "C" {

void createNodeSp(NodeSp *root) {
  printf("Creating float tree node...\n");
  TreeNodeF *p = new TreeNodeF;
  root->ptr = (void *)p;
  p->data = 10.f;
}

void destroyNodeSp(NodeSp root) {
  printf("Destroying float tree node...\n");
  delete static_cast<TreeNodeF*>(root.ptr);
}

void printNodeSp(NodeSp root) {
  printf("Node data = %f\n",
         static_cast<TreeNodeF*>(root.ptr)->data);
}

void loadNodeSp(NodeSp *root) {
  printf("Loading tree node...\n");
}

void saveNodeSp(NodeSp root, FILE *fp) {
  printf("Saving tree node...\n");
}


void createNodeDp(NodeDp *root) {
  printf("Creating double tree node...\n");
  TreeNodeD *p = new TreeNodeD;
  root->ptr = (void *)p;
  p->data = 10.0;
}

void destroyNodeDp(NodeDp root) {
  printf("Destroying double tree node...\n");
  delete static_cast<TreeNodeD*>(root.ptr);
}

void printNodeDp(NodeDp root) {
  printf("Node data = %lf\n",
         static_cast<TreeNodeD*>(root.ptr)->data);
}

void loadNodeDp(NodeDp *root) {
  printf("Loading tree node...\n");
}

void saveNodeDp(NodeDp root, FILE *fp) {
  printf("Saving tree node...\n");
}

} // extern "C"
