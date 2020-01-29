// Lang: CwC

#pragma once
#include <stdlib.h>
#include "object.h"

/**
  * A Dynamic First-In-First-Out data structure
  * that can hold an Object or a String.
  * This queue does not have a maximum capacity.
  * authors: horn.s@husky.neu.edu, armani.a@husky.neu.edu
  */
class ObjectQueue {
public:

  // Constructor for the queue.
  ObjectQueue();

  // Destructor for the queue.
  ~ObjectQueue();

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

/**
  * A Dynamic First-In-First-Out data structure
  * that can hold a String.
  * This queue does not have a maximum capacity.
  * authors: horn.s@husky.neu.edu, armani.a@husky.neu.edu
  */
class StringQueue {
public:

  // Constructor for the queue.
  StringQueue();

  // Destructor for the queue.
  ~StringQueue();

  // Add element toAdd to queue.
  void push(String* toAdd);

  // Removes element from front of Queue, returning the element.
  String* pop();

  // Returns the size of this queue at the moment.
  size_t size();

  // Returns whether the queue has any elements.
  bool isEmpty();

  // Returns the element at the front of the queue without removal.
  String* peek();
};
