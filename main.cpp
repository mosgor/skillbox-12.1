#include <iostream>
#include <string>

int main() {
    std::string flats_owners[10];
    for (int i = 0; i < 10; ++i) {
        std::cout << "Enter the last name of the owner of flat number " << i + 1 << ": ";
        std::cin >> flats_owners[i];
    }
    for (int i = 0; i < 3; ++i) {
        std::cout << "Input number of flat: ";
        int flat_number;
        std::cin >> flat_number;
        if (flat_number < 1 || flat_number > 10) {
            std::cerr << "Invalid value\n";
            return 0;
        }
        std::cout << "The owner of the flat you are interested in is " << flats_owners[flat_number - 1] << std::endl;
    }
    return 0;
}