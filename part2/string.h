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

  // Constructs a string from a char*.
  // @param c: pointer to an array of char
  String(char* c);

  // Constructs a string when passed a const char*.
  // @param c: pointer to an immutable array of char
  String(const char* c);

  // Destructs a string.
  ~String();

  // Get the length of the string.
  // @return the length of the string
  size_t length();

  // Compares two strings for equality.
  // @param other: pointer to an object
  // @return true if other equals this string
  bool equals(Object * other);

  // Overriden hash function.
  // @return hash value of this string
  size_t hash();

  // Concatenates other onto the current string.
  String * concat(String * other);
};
