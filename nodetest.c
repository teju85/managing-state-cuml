#include "node.h"

int main(int argc, char** argv) {
  NodeSp root;
  createNodeSp(&root);
  loadNodeSp(&root);
  printNodeSp(root);
  FILE *fp = fopen("/tmp/mytree", "w");
  saveNodeSp(root, fp);
  fclose(fp);
  destroyNodeSp(root);
  return 0;
}
