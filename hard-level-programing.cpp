// This program will sort a list of items, alphabetically, from a file

#include <iostream>
#include <fstream>
#include <vector>

int readFile(std::vector<std::string> &array);

int main(){
    std::vector<std::string> list;
    readFile(list);

    std::cout << "*****************" << '\n';

    for(std::string i : list){
        std::cout << i << '\n';
    }

    return 0;
}

int readFile(std::vector<std::string> &array){

    std::ifstream file("list.txt");

    // checks if the file was open correct
    if (!file.is_open()) {
        std::cout << "Error opening file: " << "list.txt" << std::endl;
        return 1; // Return non-zero to indicate an error
    }

    std::string line;
    while(std::getline(file, line)){
        array.push_back(line);
    }

    file.close();

    return 0;
}