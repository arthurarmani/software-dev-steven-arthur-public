// Lang: CwC

#pragma once
#include <stdlib.h>
#include "object.h"

/**
  * A Dynammic First-In-First-Out data structure
  * that can hold an Object or a String.
  * This queue does not have a maximum capacity.
  * authors: horn.s@husky.neu.edu, armani.a@husky.neu.edu
  */
class Queue {
public:

  size_t size_; // number of elements in Queue
  Object ** arr_; // the elements stored in Queue

  // Constructor for the queue.
  Queue();

  // Destructor for the queue.
  ~Queue();

  // Add element toAdd to queue.
  void push(Object* toAdd);

  // Removes element from front of Queue, returning the element.
  Object* pop();

  // Returns the size of this queue at the moment.
  size_t size();

  // Returns whether the queue has any elements.
  bool isEmpty();

  // Returns the element at the front of the queue without removal.
  Object* peek();
};
