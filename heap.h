/**
 * @file heap.h
 * @author Anthony Osborne
 * @date 2023-04-18
 * @brief header file for the heap class
 * 
 * written bby Daniel Cunningham and Colin Douglas
 */

#ifndef HEAP_H
#define HEAP_H
#include <vector>

class heap {
 private:
  std::vector<int> buffer;
  int largest_number;
 public:
  heap();
  int size();
  void insert(int value);
  void remove_max();
  int max();
  void print();
};


#endif
