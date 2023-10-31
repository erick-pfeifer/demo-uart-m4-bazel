#include <string_view>

[[maybe_unused]] std::string_view global_variable_data{"Sample"};

int main() {
  int i = 0;
  if (global_variable_data.size() > 0) {
    i = global_variable_data.size();
  }
  return 0;
}