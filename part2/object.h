// Lang: CwC

#pragma once
#include <stdlib.h>

/**
 * A generic object class.
 * authors: horn.s@husky.neu.edu, armani.a@husky.neu.edu
 */
class Object {
public:
  // Constructs a generic object.
  Object();

  // Destructs a generic object.
  virtual ~Object();

  // Returns the stored hash value.
  // If no hash value is stored, then it generates one.
  virtual size_t hash();

  // Determines if this object is equal to other object.
  virtual bool equals(Object* other);
};
