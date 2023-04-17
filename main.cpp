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
  
  cout << "Max element: " << h.max() << "\n";  // should print "30"

  return 0;
}
