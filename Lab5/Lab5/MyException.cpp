#include "MyException.h"

MyException::MyException(const char* message) : msg(message) {}

const char* MyException::what() const noexcept {
    return msg.c_str();
}