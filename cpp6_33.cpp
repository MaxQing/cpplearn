#include <iostream>
#include <vector>

using namespace std;

void printVecRec(const vector<string> &target, unsigned index) {
  auto sz = target.size();
  if (!target.empty() && index < sz) {
    cout << target[index] << " ";
    printVecRec(target, index + 1);
  }
  return;
}

int main() {
  vector<string> s1{"I will", "be", "the", "best."};
  printVecRec(s1, 0);
  return 0;
}