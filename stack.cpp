#include "stack.h"

void initializeStack(Stack *ps) { ps->top = 0; }

void push(StackEntry item, Stack *ps) { ps->entry[ps->top++] = item; }

StackEntry pop(Stack *ps) { return ps->entry[--ps->top]; }

void freeStack(Stack *ps) {
  delete ps;
  ps = nullptr;
}