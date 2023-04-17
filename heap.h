#ifndef HEAP_H
#define HEAP_H
#include <vector>

class heap {
 private:
  std::vector<int> buffer;
 public:
  heap();
  int size();
  void insert(int value);
  void remove_max();
  int max();
  void print();
};


#endif
