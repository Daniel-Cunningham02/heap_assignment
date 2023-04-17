#include "heap.h"
#include <iostream>

using namespace std;

int main() {
  heap my_heap;

  my_heap.insert(10);
  my_heap.insert(20);
  my_heap.insert(30);
  my_heap.insert(40);
  my_heap.insert(50);

  cout << "Heap after inserting 10, 20, 30, 40, 50:\n";
  my_heap.print();  // should print "50 40 30 10 20"

  my_heap.remove_max();
  my_heap.remove_max();

  cout << "Heap after removing two max elements:\n";
  my_heap.print();  // should print "30 10 20"

  cout << "Max element: " << my_heap.max() << "\n";  // should print "30"

  return 0;
}
