/**
 * @file heap.h
 * @author Anthony Osborne
 * @date 2023-04-18
 * @brief header file for the heap class
 * 
 * written by Daniel Cunningham and Colin Douglas
 */

#ifndef HEAP_H
#define HEAP_H
#include <vector>

class heap {
 private:
  std::vector<int> buffer;
 public:

/**
 * Base constructor for the heap class
 *
 * @pre 
 * @post 
 * 
 */
  heap();

/**
 * Public method that returns the size of the private integer vector buffer
 *
 * @pre 
 * @return int size of the buffer
 * @post 
 * 
 */
  int size();

/**
 * Pushes back the value into the vector, finds the current positon and the parent of the current integer. After finding the values, a while loop is performed where as long as the integer value of the buffer at the current position is greater than the buffer at the parent index, it swaps the value. Afterward, it changes the current position to the parent index and the parent index to the parent of the current position.
 *
 * @param int value the value that is getting inputted
 * @pre 
 * @return void 
 * @post buffer includes another value that is sorted within the heap
 * 
 */
  void insert(int value);

/**
 * This method sets the root of the heap to the back element of the buffer, and then it pops the back element. Then position is initialized to zero and a while loop starts. Inside the while loop a left and right child are initialized along with a largest variable which is set to position. It performs checks to check if the left or right is largest and then if largest is still the position, it returns. However, if any other index is larger, it swaps the buffer[largest] and buffer[position].
 *
 * @pre Vector with n indices for size
 * @return void
 * @post Vector with n - 1 indices with a different root
 *
 */
  void remove_max();

/**
 * Returns the first element of the vector, which should be the largest
 *
 * @pre 
 * @return int the largest number in the vector
 * @post 
 * 
 */
  int max();

/**
 * This method loops over the vector using an iterator, and then it dereferences the iterator to obtain the value to print.
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void print();
};


#endif
