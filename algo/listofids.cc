// this is a class..

class ListofIds {
  static const int MAX = 50;
public:
  int largest();
  int lowest();
  void sort();
  int *get();
  void set(int [MAX]);
private:
  int *list = new int[MAX];
};
