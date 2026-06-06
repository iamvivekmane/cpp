#include <iostream>
#include <cstring>
using namespace std;
class String
{
private:
    size_t length;
    char *buffer;

public:
    String(void) : length(0), buffer(NULL) {}
    String(size_t length) : length(length), buffer(new char[this->length]) {}
    String(char *str)
    {
        this->length = strlen(str);
        this->buffer = new char[this->length + 1];
        strcpy(this->buffer, str);
    }
    String(const String &other)
    {
        this->length = strlen(other.buffer);
        this->buffer = new char[this->length + 1];
        strcpy(this->buffer, other.buffer);
    }
    void to_uppercase();
    void to_lowercase();
    void print_record(void)
    {
        cout << this->buffer << endl;
    }
    ~String(void)
    {
        if (buffer != NULL)
        {
            delete[] this->buffer;
            this->buffer = NULL;
        }
    }
};
int main()
{
    String s1("Hello");
    String s2 = s1;
    s2.print_record();
    return 0;
}