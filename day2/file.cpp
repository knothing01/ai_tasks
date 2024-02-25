#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main()
{   
    //create a new file using fstream(creates, reades, and writes to files) class
    std::ofstream newFile("text.txt");

    //is_open checks if the file stream has an assosiated file
    //if not return 1
    if(!newFile.is_open()) {
        std::cerr << "Failed to open file for writing";
        return 1;
    }

    std::vector<std::string> names = {
        "Alice",
        "Bob",
        "Charlie",
        "David",
        "Eve"
    };


    for (int i = 0; i < names.size(); ++i) {
        newFile << names[i] << std::endl;
    }
    newFile.close();

    //read from file
    std::string line;
    std::ifstream readFile("text.txt");
    while (std::getline(readFile, line)) {
        std::cout << line << std::endl;
    }

    newFile.close();
    return 0;
}