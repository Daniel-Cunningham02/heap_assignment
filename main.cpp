/**
 * @file main.cpp
 * @author Anthony Osborne
 * @date 2023-04-18
 * @brief driver code for the assignment
 * written by Colin Douglas Daniel Cunningham
 * 
 */

#include "heap.h"
#include <iostream>

using namespace std;

int main() {
  heap h;

  for(int i=0; i< 1000; i++)
    h.insert(rand()%100);
  
  while(h.size() > 0) {
    cout << h.max() << endl;
    h.remove_max();
  }
  
  cout << "Max element: " << h.max() << "\n";

  return 0;
}
