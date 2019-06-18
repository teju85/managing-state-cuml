#pragma once

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
  void *ptr;
} NodeSp;
void createNodeSp(NodeSp *root);
void destroyNodeSp(NodeSp root);
void printNodeSp(NodeSp root);
void loadNodeSp(NodeSp *root);
void saveNodeSp(NodeSp root, FILE *fp);

typedef struct {
  void *ptr;
} NodeDp;
void createNodeDp(NodeDp *root);
void destroyNodeDp(NodeDp root);
void printNodeDp(NodeDp root);
void loadNodeDp(NodeDp *root);
void saveNodeDp(NodeDp root, FILE *fp);

#ifdef __cplusplus
};
#endif
