/**
 * @file main.cpp
 * @author abdullah zayed
 * @brief
 * @version 0.1
 * @date 2024-04-17
 *
 * @copyright Copyright (c) 2024
 *
 * This is the first un-smart solution to be my ADT generic.
 *
 * I try to make my ADT structure that i built with c to be generic,
 * by doing Entry of the structure is a struct contain multiple fields.
 *
 * First eType to indicate what is the type of the Entry i will push or make,
 * another operation for it.
 *
 * Second union type for the difference data that my structure will use it.
 *
 */

#include <iostream>

#include "stack.h"

#define DATA 0
#define VOICE 1
#define FAX 2

int main() {
  StackEntry item;

  item.eType = DATA;
  item.info.data = 10;

  Stack s;

  initializeStack(&s);

  push(item, &s);

  StackEntry value = pop(&s);

  switch (value.eType) {
    case DATA:
      std::cout << value.info.data << "\n";
      return 0;
    case VOICE:
      std::cout << value.info.voice << "\n";
      return 0;
    case FAX:
      std::cout << value.info.fax << "\n";
      return 0;
    default:
      std::cout << "No data found\n";
      return 0;
  }

  freeStack(&s);

  return 0;
}