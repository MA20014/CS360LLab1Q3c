#include <iostream>
using std::cout;
using std::string;

int main() {
    // Named string constant for first and last names with a space in between
    const string fullName = "Mir Ahmad Ali";
  cout << "Length of fullName: " << fullName.length() << std::endl;
  cout << "Size of fullName: " << fullName.size() << std::endl;

    // Print the last name first followed by a comma and then the first name
    cout << "Formatted name: " << fullName.substr(fullName.find(' ') + 1) << ", " << fullName.substr(0, fullName.find(' ')) << std::endl;

  cout << "Last name, first initial: " << fullName.substr(fullName.find(' ') + 1) << ", " << fullName.at(0) << std::endl;
    return 0;
}
