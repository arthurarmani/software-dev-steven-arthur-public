// Lang: C++

#include "object.h"
#include "string.h"
#include "queue.h"
#include <stdio.h>

void FAIL() { exit(1); }
void OK(const char* m) { printf("%s\n", m); }
void t_true(bool p) { if (!p) FAIL(); }
void t_false(bool p) { if(p) FAIL(); }

// Size when empty.
void test_size_empty() {
  Queue * q = new Queue();
  t_true(q->size() == 0);
  OK("1");
  delete q;
}

// Size when not empty AND Size modified when pushed.
void test_not_empty_push() {
  Queue * q = new Queue();
  String * s = new String("HELLO");
  q->push(s);
  t_true(q->size() == 1);
  OK("1");
  delete s;
  delete q;
}

// Size modified when popped.
void test_size_pop() {
  Queue * q = new Queue();
  String * s = new String("HELLO");
  String * s2 = new String("GOODBYE");
  t_true(q->size() == 0);
  q->push(s);
  t_true(q->size() == 1);
  q->push(s2);
  t_true(q->size() == 2);
  q->pop();
  t_true(q->size() == 1);
  delete s;
  delete s2;
  delete q;
  OK("1");
}

// Size remains when peeked.
void test_size_peek() {
  Queue * q = new Queue();
  String * s = new String("HELLO");
  String * s2 = new String("GOODBYE");
  t_true(q->size() == 0);
  q->push(s);
  t_true(q->size() == 1);
  q->push(s2);
  t_true(q->size() == 2);
  q->peek();
  t_true(q->size() == 2);
  delete s;
  delete s2;
  delete q;
  OK("1");
}

// Size remains when pushed and popped.
void test_size_push_pop() {
  Queue * q = new Queue();
  String * s = new String("HELLO");
  t_true(q->size() == 0);
  q->push(s);
  q->pop();
  t_true(q->size() == 0);
  delete s;
  delete q;
  OK("1");
}

// Pop returns correct element.
void test_pop_element() {
  Queue * q = new Queue();
  String * s = new String("HELLO");
  String * s2 = new String("GOODBYE");
  q->push(s);
  q->push(s2);
  t_true((q->pop())->equals(s));
  t_true((q->pop())->equals(s2));
  delete s;
  delete s2;
  delete q;
  OK("1");
}

// Peek returns correct element AND Peek doesn't remove element.
void test_peek_element() {
  Queue * q = new Queue();
  String * s = new String("HELLO");
  String * s2 = new String("GOODBYE");
  q->push(s);
  q->push(s2);
  t_true((q->peek())->equals(s));
  t_true((q->peek())->equals(s));
  delete s;
  delete s2;
  delete q;
  OK("1");
}

// isEmpty returns true when elements are not there.
void test_isEmpty_true() {
  Queue * q = new Queue();
  t_true(q->isEmpty());
  delete q;
  OK("1");
}

// isEmpty returns false when elements are there.
void test_isEmpty_false() {
  Queue * q = new Queue();
  String * s = new String("HELLO");
  String * s2 = new String("GOODBYE");
  q->push(s);
  q->push(s2);
  t_false(q->isEmpty());
  q->pop();
  t_false(q->isEmpty());
  delete s;
  delete s2;
  delete q;
  OK("1");
}

/**
  * Runs the tests on Queue operations.
  * authors: horn.s@husky.neu.edu, armani.a@husky.neu.edu
  */
int main() {
  test_size_empty();
  test_not_empty_push();
  test_size_pop();
  test_size_peek();
  test_size_push_pop();
  test_pop_element();
  test_peek_element();
  test_isEmpty_true();
  test_isEmpty_false();
}
