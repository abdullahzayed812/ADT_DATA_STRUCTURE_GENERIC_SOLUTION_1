#ifndef STACK_H
#define STACK_H

#include "global.h"

#define ARRAY_IMPLEMENTATION
// #define LINKED_IMPLEMENTATION

#ifdef ARRAY_IMPLEMENTATION

typedef struct stack {
  int top;
  StackEntry entry[MAX_STACK];
} Stack;

#else

typedef struct stackNode {
  StackEntry entry;
  struct stackNode *next;
} StackNode;

typedef struct stack {
  StackNode *top;
} Stack;

#endif

void initializeStack(Stack *ps);
void push(StackEntry, Stack *);
StackEntry pop(Stack *);
void freeStack(Stack *);
// StackEntry stackTop();
// bool isEmpty();
// bool isFull();
// int stackSize();
// void clearStack();
// void traverseStack(void (*visit)(StackEntry* item));

#endif