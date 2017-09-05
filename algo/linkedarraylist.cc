#include <iostream>
#include <vector>

// An unsorted list allows for constant-time insert by adding a new element at
// the end of the list. Unfortunately, searching for the element with key value X
// requires a sequential search through the unsorted list until X is found, which
// on average requires looking at half the list element. On the other hand, a
// sorted array-based list of n elements can be searched in log n time with a
// binary search. Unfortunately, inserting a new element requires a lot of time
// because many elements might be shifted in the array if we want to keep it
// sorted. How might data be organized to support both insertion and search in
// log n time?
  
class LL {  
public:				// just for easiness
  int value;
  LL *next;
  
  std::vector<LL> arr;

  static LL *head;
  static void ins(int value), del(int value);

  LL() { isfirst = false; head = NULL; }
  LL(int value) {
    this->value = value;
    next = NULL;
    isfirst = true;
  };
  
private:
  bool isfirst;
};

void LL::ins(int value) {
  
}

int main(int argc, char **argv) {
  
  return 0;
}
