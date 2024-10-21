#include <cctype>
#include <iostream>
#include <cstring>

class String
{ 
    friend String operator+(const String& str1, const String& str2);
    friend std::ostream & operator<<(std::ostream& os, String& str);
    friend std::istream & operator>>(std::istream& is, String& str);
public:
    String(String& str);
    String(const char* str = "");
    ~String();
    String& operator=(const String &str);
    bool operator==(String& str);
    void Stringlow();
    void Stringup();
    int has(char c) const;
private:
    char *m_str;
    int m_len;//length of m_str
};
