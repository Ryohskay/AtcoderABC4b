#include <iostream>
#include <string>

int main() {
  std::string first_varname, second_varname, longer_name;

  // fetch two variable names
  std::cin >> first_varname >> second_varname;

  // compare the two names and determine the longer name
  if (first_varname.size() > second_varname.size()) {
    longer_name = first_varname;
  } else {
    longer_name = second_varname;
  }

  // print the "better" (longer) name
  std::cout << longer_name << std::endl;
}
