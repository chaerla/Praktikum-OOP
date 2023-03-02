#include "BinaryTree.hpp"
#include <bits/stdc++.h>

using namespace std;

template <class T>
BinaryTree<T>::BinaryTree()
{
    numChildren = 0;
}

template <class T>
BinaryTree<T>::BinaryTree(const BinaryTree<T> &other)
{
    value = other.value;
    for (auto c : other.children){
        children.push_back(c);
    }
    numChildren = other.children;
}

