#include <iostream>
#include <string>

std::string SuperReducedString(const std::string& sequence) {
    std::string reducedString;

    for (char character : sequence) {
        if (!reducedString.empty() && character == reducedString.back()) {
            reducedString.pop_back(); // Remove the last character
        } else {
            reducedString.push_back(character);
        }
    }

    return reducedString.empty() ? "Empty String" : reducedString;
}

int main() {
    std::string inputSequence;
    std::cin >> inputSequence;
    std::string result = SuperReducedString(inputSequence);
    std::cout << result << std::endl;

    return 0;
}
