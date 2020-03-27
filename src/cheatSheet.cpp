/*
** CPP Cheat Sheet
** Created by mathieu on 12-03-20.
** File description:
** N/a
*/

#include "../includes/cheatSheet.hpp"
#include <vector>
#include <iostream>

void cheatSheet::info(std::string str, int x)
{
    std::cout << "Info: " << str << " : " << x << std::endl;
}

void cheatSheet::info(std::string str)
{
    std::cout << "Info: " << str << std::endl;
}

void cheatSheet::vector()
{
    std::vector<std::string> vec;   // Init a vector who contain a string.

    vec.push_back("test");          // Insert two string in the vector.
    vec.push_back("Hello world");

    info("vector elements:");   // Display all elements in my vector
    for (auto &str : vec)
        std::cout << str << std::endl;

    for (auto it = vec.begin(); it != vec.end(); it++)  // Another way to travel my vector.
        std::cout << *it << std::endl;

    vec.size();                     // Return the vector's size.

    vec.erase(vec.end());           // Erase the last element of my vector.

    vec.clear();                    // Erase all elements of my vector
}