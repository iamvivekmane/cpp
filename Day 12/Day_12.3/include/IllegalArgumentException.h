#ifndef ILLEGALARGUMENTEXCEPTION
#define ILLEGALARGUMENTEXCEPTION
#include <string>
using namespace std;
namespace kdac
{

    class IllegalArgumentException
    {
    private:
        string message;

    public:
        IllegalArgumentException(const string message) throw();
        string getMessage() const throw();
    };
}

#endif /*ILLEGALARGUMENTEXCEPTION*/