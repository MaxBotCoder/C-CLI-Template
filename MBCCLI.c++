#include <iostream>

std::string command_input;

void commandinputfunction(bool allowcommandinput) {

    std::cout << "\n" << "Please enter a valid command: ";

    allowcommandinput = true;

    if(allowcommandinput == true) {

    std::cin >> command_input;

    }
    
}

int main() {

    std::cout << "\n" << "Hello and welcome to this command intake application" << "\n" << "to see a list of valid commands please type in help or --help thank you for choosing M.B.C. C++ CLI template!" << "\n";

    while(command_input != "exit") { 

    commandinputfunction(true);

    if(command_input == "help" || command_input == "--help") {

        std::cout << "\n" << "The commands --help or help can be used to access the help menu;" << "\n";

        std::cout << "\n" << "The command --about or about can be used to access the about menu" << "\n";

        std::cout << "\n" << "The command --credit or credit to see the origins of this application" << "\n";

        std::cout << "\n" << "The command --easteregg or easteregg will result in the display of the hidden menu" << "\n";

        std::cout << "\n" << "What commands will you list for people to get help with?" << "\n";

    }

    if(command_input == "about" || command_input == "--about") {

        std::cout << "\n" << "Welcome to the about menu! You may repurpose it how you see fit." << "\n";

        std::cout << "\n" << "M   M  BBBB     CCC   Publisher Max Bot Coder";
        std::cout << "\n" << "MM MM  B   B   C      Publication date May 25th 2025";
        std::cout << "\n" << "M M M  B   B  C       Version 0.0.0";
        std::cout << "\n" << "M   M  BBBB   C       Name of Application M.B.C. C++ CLI template";
        std::cout << "\n" << "M   M  B   B  C       Last time updated May 25th 2025";
        std::cout << "\n" << "M   M  B   B   C      About: not much to say about this application";
        std::cout << "\n" << "M   M  BBBB     CCC   ";


    }

    if(command_input == "--credit" || command_input == "credit") {

        std::cout << "\n" << "To be clear I am Max Bot Coder however the message below if for when you use this template for you're own CLI application." << "\n";

        std::cout << "\n" << "This application was made with Max Bot Coder's C++ CLI template to use his template feel free to visit his github page!" << "\n";

    }

    if(command_input == "easteregg" || command_input == "--easteregg"){

        std::cout << "\n" << "What did you expect from the easter egg command?" << "\n";

    }

    }

    if(command_input != "exit") {

        exit(false);

    } else if (command_input == "exit") {

        exit(true);

    }
}
