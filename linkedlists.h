#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    
    Node()
    {
        data = 0;
        next = NULL;
    }

    
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
struct nodes {
    int value=0;
    int occurence=0;
};
class linkedList {
private:
    Node* head=NULL;
    nodes node[100];
public:
    void insert(int data);
    void print();
    void remove(int value);
        
    linkedList occurence(vector<int> v);
    void sum();
};