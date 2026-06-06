#include <iostream>
#include <cstring>
using namespace std;
class String
{
private:
    size_t length;
    char *buffer;

public:
    String(void) : length(0), buffer(0) {};
    String(const char *str) : length(strlen(str)), buffer(new char[this->length + 1])
    {
        strcpy(this->buffer, str);
    };
    String(size_t length)
    {
        this->length = length;
        buffer = new char[this->length + 1];
    }
    ~String(void)
    {
        if (buffer != NULL)
        {
            delete[] this->buffer;
            this->buffer = NULL;
        }
    }
    String(const String &other) : length(other.length), buffer(new char[this->length + 1])
    {
        strcpy(this->buffer, other.buffer);
    }
    String operator=(const String &other)
    {
        this->~String();
        this->length = other.length;
        this->buffer = new char[this->length + 1];
        strcpy(this->buffer, other.buffer);
        return *this;
    }
    friend ostream &operator<<(ostream &cout, const String &other)
    {
        cout << other.buffer << endl;
        return cout;
    }
    String operator+(const char *str)
    {
        String temp(this->length + strlen(str));
        strcpy(temp.buffer, this->buffer);
        strcat(temp.buffer, str);
        return temp;
    }
    String operator+(String &other)
    {
        String temp(this->length + other.length);
        strcpy(temp.buffer, this->buffer);
        strcat(temp.buffer, other.buffer);
        return temp;
    }
    void operator~(void)
    {
        int i = 0;
        int j = this->length - 1;
        while (i < j)
        {
            swap(this->buffer[i++], this->buffer[j--]);
        }
    }
    void operator()(const char *str)
    {
        this->~String();
        this->length = strlen(str);
        this->buffer = new char[this->length + 1];
        strcpy(this->buffer, str);
    }
};
int main()
{
    // String s1 = {"Hello"};
    // String s2 = {"World"};
    // cout << s2;
    // String s3 = s1 + s2;
    // cout << s3;
    // // --------------------------------------------
    // String s1 = {"Hello"};
    // String s2 = s1 + "Karad";
    // cout << s2 << endl;
    // // --------------------------------------------
    // String s1 = {"Hello"};
    // ~s1;
    // cout << s1 << endl;
    // // --------------------------------------------
    String s1(5);
    s1("Welcome");
    cout << s1 << endl;
    // --------------------------------------------
    return 0;
}