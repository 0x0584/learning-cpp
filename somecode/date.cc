#include <iostream>

class Date {
  int jj, mm;
  int abs(int val) { return (val >= 0 ? val : -val); }
public:
  Date(void) { jj = mm = 1; }
  Date(int jj, int mm) {
    this->jj = jj;
    this->mm = mm;
  }
  
  std::string tostr() {
    char temp[6] = { '\0' };
    sprintf(temp, "%.2d/%.2d", jj, mm);
    return temp;
  }

  int getJJ() { return this->jj; }
  int getMM() { return this->mm; }

  Date operator +(Date& A) const {
    int jjs[] = {
      31, 28, 31,
      30, 31, 30,
      31, 31, 30,
      31, 30, 31
    };
    
    int jj = this->jj + A.getJJ(), mm = (this->mm + A.getMM())%12;
    int n_mm = 0;

    while(jj >= jjs[mm]) jj -= jjs[mm], n_mm++;
    
    return Date(jj, mm + n_mm);
  }
};

int main(int argc, char **argv) {

  Date d = Date(1, 2), d0 = Date(11, 5);

  puts((d+d0).tostr().c_str());
  
  return 0;
}
