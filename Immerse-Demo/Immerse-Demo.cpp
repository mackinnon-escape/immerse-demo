// Immerse-Demo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>


std::string GetNoun()
{
    return "The panda";
}

std::string GetVerb()
{
    return " eats";
}

std::string GetObjectOne()
{
    return " shoots";
}

std::string GetObjectTwo()
{
    return " and leaves.";
}

int main()
{
    std::cout << GetNoun() << GetVerb() << ',' << GetObjectOne() << ',' << GetObjectTwo();
}
