#include "../include/IllegalArgumentException.h"

using namespace kdac;

IllegalArgumentException::IllegalArgumentException(const string message) throw() : message(message) {};
string IllegalArgumentException::getMessage() const throw()
{
    return this->message;
}
