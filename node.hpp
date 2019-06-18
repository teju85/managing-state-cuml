#pragma once

template <typename T>
struct TreeNode {
  T data;
  TreeNode<T> *left, *right;
};

typedef TreeNode<float> TreeNodeF;
typedef TreeNode<double> TreeNodeD;
