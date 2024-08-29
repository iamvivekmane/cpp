#include <iostream>
using namespace std;
template <class K, class V>
class Entry
{
private:
    K key;
    V value;

public:
    Entry(K key, V value)
    {
        this->key = key;
        this->value = value;
    }
    K get_key(void)
    {
        return this->key;
    }
    V get_value(void)
    {
        return this->value;
    }
};
int main()
{
    Entry<int, string> e1(1, "Hello");
    int key = e1.get_key();
    string value = e1.get_value();
    cout << key << " " << value << endl;
    return 0;
}