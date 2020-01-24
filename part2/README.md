We chose to implement a Queue for this part.

First, we created two header files for Object and String.

Objects have
  the following methods:
    size_t hash();
    virtual size_t hash_me_();
    virtual bool equals(Object * other);

  the following fields:
    size_t hash_;

Objects are generic data types that have hashing and equality.

Strings have
  the following methods:
    size_t hash_me_();
    bool equals(Object * other);
    String * concat (String * other);

  the following fields:
    char* val_;
    size_t size_;

Strings extend Objects and store a char array value with a size representing the length. They have an additional method called concat, which puts two strings together.

Then, we created a Queue, which was a dynamic first in first out data structure that could hold Objects, and thereby Strings.

Our queue implementation has two fields: an array of Objects stored by their pointers as well as a size. We chose not to limit the queue and allow it to grow as large as necessary in order to make it dynamic.

Since we have a first in first out structure, we have to be able to add some Object to the structure. This represents the push method, which takes in an Object pointer. Since we need to be able to interact/remove elements from the Queue, we have two methods: pop and peek. Pop removes the element from the front and returns it. Peek, on the other hand, simply returns the element at the front without removing it. It is necessary to be able to see whether there is something in the queue, so we have a method called isEmpty. Finally, it is useful to know how many elements are waiting in the Queue. Thus, we have the size method, which will return the value of the size field.

In regards to our testing, we created tests that will check that all cases of using Queue's methods work as intended, including the edge cases. 
