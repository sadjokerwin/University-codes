#ifndef __MYSTRING_H
#define __MYSTRING_H
#include <fstream>
class MyString
{
    char *str;
    size_t size;

    void copyFrom(const MyString &other);
    void free();
    void concat(const MyString &other);
    size_t getNumSize(size_t num) const;

public:
    MyString();
    MyString(const char *);
    MyString(size_t num);
    MyString(const MyString &other);
    MyString(MyString &&other);
    MyString(const char symbol);

    size_t getSize() const;
    const char *getStr() const;

    MyString &operator=(const MyString &other);
    MyString &operator=(MyString &&other);
    MyString &operator+=(const MyString &other);
    MyString &operator+=(char symbol);

    friend std::ostream &operator<<(std::ostream &out, const MyString &other);
    friend std::istream &operator>>(std::istream &in, MyString &other);

    int charInString(char sym) const;
    int subString(const char *subStr) const;

    double strToDouble() const;
    double strToInt() const;

    ~MyString();
};

MyString operator+(const MyString &lhs, const MyString &rhs);
bool operator==(const MyString &lhs, const MyString &rhs);
bool operator<=(const MyString &lhs, const MyString &rhs);
bool operator<(const MyString &lhs, const MyString &rhs);
#endif