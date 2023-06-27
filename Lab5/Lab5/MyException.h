#pragma once
#include <exception>
#include <string>

class MyException : public std::exception {
public:
    MyException(const char* message);
    const char* what() const noexcept override;
private:
    std::string msg;
};