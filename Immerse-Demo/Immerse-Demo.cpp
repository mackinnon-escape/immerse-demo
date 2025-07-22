// Immerse-Demo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>


std::string GetNoun()
{
    return "Buffalo buffalo ";
}

std::string GetVerb()
{
    return "Buffalo buffalo buffalo";
}

std::string GetObjectOne()
{
    return " buffalo";
}

std::string GetObjectTwo()
{
    return " Buffalo buffalo.";
}

int main()
{
    std::cout << GetNoun() << GetVerb() << ',' << GetObjectOne() << ',' << GetObjectTwo();
    std::cout << "\n\n";
}
