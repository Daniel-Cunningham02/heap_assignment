#include "heap.h"
#include <iostream>


// buffer representation = {15, 5, 10, 3, 6, 9, 12}

heap::heap() {
}

int heap::size() {
  return buffer.size();
}


void heap::insert(int value) {
  
}

void heap::remove_max() {
}

int heap::max() {
  return buffer[0];
}

void heap::print() {
  std::cout << "In order:\n"; 
  for(auto it = buffer.begin(); it != buffer.end(); it++) {
    std::cout << *it << "\n";
  }
  std::cout.flush();
}
