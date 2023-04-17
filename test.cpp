#include <iostream>
#include <vector>

using namespace std;

class heap {
 private:
  vector<int> buffer;

 public:
  heap() {}

  int size() {
    return buffer.size();
  }

  void insert(int value) {
    buffer.push_back(value);
    int i = buffer.size() - 1;
    int parent = (i - 1) / 2;
    while (i > 0 && buffer[i] > buffer[parent]) {
      swap(buffer[i], buffer[parent]);
      i = parent;
      parent = (i - 1) / 2;
    }
  }

  void remove_max() {
    if (buffer.empty()) {
      cerr << "Error: heap is empty\n";
      return;
    }
    swap(buffer[0], buffer.back());
    buffer.pop_back();
    int i = 0;
    while (true) {
      unsigned int left = 2 * i + 1;
      unsigned int right = 2 * i + 2;
      int largest = i;
      if (left < buffer.size() && buffer[left] > buffer[largest]) {
        largest = left;
      }
      if (right < buffer.size() && buffer[right] > buffer[largest]) {
        largest = right;
      }
      if (largest == i) {
        break;
      }
      swap(buffer[i], buffer[largest]);
      i = largest;
    }
  }

  int max() {
    if (buffer.empty()) {
      cerr << "Error: heap is empty\n";
      return -1;
    }
    return buffer[0];
  }

  void print() {
    for (unsigned int i = 0; i < buffer.size(); i++) {
      cout << buffer[i] << " ";
    }
    cout << "\n";
  }
};

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
