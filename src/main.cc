#include <cstddef>
#include <string_view>

[[maybe_unused]] const std::string_view kGlobalVariableData{"Sample"};

int main() {
  size_t i = 0;
  if (!kGlobalVariableData.empty()) {
    i = kGlobalVariableData.size();
  }
  return 0;
}