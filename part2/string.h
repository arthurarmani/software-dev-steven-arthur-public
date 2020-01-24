// Lang::CwC

#pragma once
#include <cstring>
#include "object.h"

/**
  * This class inherits from the Object class and creates a String.
  *
  * authors: horn.s@husky.neu.edu, armani.a@husky.neu.edu
  */
class String : public Object {
public:

  char* val_; // The value of the string as a character array.
  size_t size_; // The length of the string.

  // Constructs empty string.
  String();

  // Constructs a string from a char*.
  String(char* c);

  // Constructs a string when passed a const char*.
  String(const char* c);

  // Destructs a string.
  ~String();

  // Generates a hash value for a string.
  size_t hash_me_();

  // Compares two strings for equality.
  bool equals(Object * other);

  // Concatenates other onto the current string.
  String * concat(String * other);
};
