#include <vector>
#include "test_framework/generic_test.h"

using std::vector;

int HIndex(vector<int> citations) {
  // Implement this placeholder.
  return 0;
}

int main(int argc, char* argv[]) {
  std::vector<std::string> args{argv + 1, argv + argc};
  std::vector<std::string> param_names{"citations"};
  return GenericTestMain(args, "h_index.tsv", &HIndex, DefaultComparator{},
                         param_names);
}
