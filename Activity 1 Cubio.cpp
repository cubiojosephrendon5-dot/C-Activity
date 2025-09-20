#include <iostream>

int main()
{
    bool question;

    std::cout << "Thank you for listening" << std::endl;

    std::cout << "Any questions?  (Choose 1 for Yes or 0 for No): ";

    std::cin >> question;

    if (question == true) {
        std::cout << "Raise hand; Ask question." << std::endl;
    }
    else {
        std::cout << "Prepare for Module Excercise." << std::endl;
    }

    return 0;

}
