#include "heap.h"
#include <iostream>


// buffer representation = {15, 5, 10, 3, 6, 9, 12}

heap::heap() {
}

int heap::size() {
  return buffer.size();
}


void heap::insert(int value) {
  buffer.push_back(value);
  int position  = buffer.size() - 1;
  int parent_index = (position - 1) / 2;
  while(position > 0 && buffer[position] > buffer[parent_index]) {
    int temp = buffer[parent_index];
    buffer[parent_index] = buffer[position];
    buffer[position] = temp;
    position = parent_index;
    parent_index = (position - 1) / 2;
  }
}

void heap::remove_max() {
  buffer[0] = buffer.size() - 1;
  buffer.pop_back();
  int position = 0;
  while(true) {
    int left = 2 * position + 1;
    int right = 2 * position + 2;
    int largest = position;
    if(left < buffer.size() && buffer[left] > buffer[largest]) {
      largest = left;
    }
    else if(right < buffer.size() && buffer[right] > buffer[largest]) {
      largest = right;
    }
    if(largest == position) {
      return;
    }
    int temp = buffer[largest];
    buffer[largest] = buffer[position];
    buffer[position] = temp;
    position = largest;
  }
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
