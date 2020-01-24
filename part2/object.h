// Lang: CwC

#pragma once
#include <stdlib.h>

/**
  * A generic object class.
  *
  * authors: horn.s@husky.neu.edu, armani.a@husky.neu.edu
  */
class Object {
public:
  // Stores the hash of this object.
  size_t hash_;

  // Constructs a generic object.
  Object();

  // Destructs a generic object.
  virtual ~Object();

  // Returns the stored hash value.
  // If no hash value is stored, then it generates one.
  size_t hash();

  // Generates a new hash value for the object.
  virtual size_t hash_me_();

  // Determines if this object is equal to other object.
  virtual bool equals(Object* other);
};
