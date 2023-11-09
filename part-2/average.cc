// Aaron Noriega
// aaronnoriega1@csu.fullerton.edu
// @Aaron-Nor
// Partners: @Aaron-Nor

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }

  double sum{0.0};
  bool first{true};
  for (std::string argument : arguments) {
    if (first) {
      first = false;
      continue;
    }
    sum += std::stod(argument);
  }

  int denominator{static_cast<int>(arguments.size()) - 1};
  double average{sum / denominator};

  std::cout << "average = ";
  std::cout << average << "\n";

  return 0;
}

