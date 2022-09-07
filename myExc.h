//
// Created by Sg on 07.09.2022.
//
#include <exception>
class fishException : public std::exception
{
public:
    const char* what() const noexcept override
    {
        return "You caught a fish! You've win! :)";
    }
};
class bootException : public std::exception
{
public:
    const char* what() const noexcept override
    {
        return "You caught a boot! You've loose! :(";
    }
};