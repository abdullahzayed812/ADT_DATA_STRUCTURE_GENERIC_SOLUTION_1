#ifndef GLOBAL_H
#define GLOBAL_H

#define TYPE_0 int
#define TYPE_1 double
#define TYPE_2 float

typedef struct elementType {
  short int eType;

  union {
    TYPE_0 data;
    TYPE_1 voice;
    TYPE_2 fax;
  } info;

} ElementType;

#define MAX_ELEMENTS 100

typedef ElementType StackEntry;
#define MAX_STACK MAX_ELEMENTS

#endif