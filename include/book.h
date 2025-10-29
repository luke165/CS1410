#ifndef __BOOK_H__
#define __BOOK_H__
#include "author.h"
#include <iostream>
#include <string> 

class Book{
    private:
        std::string title;
        int year;
        Author author;
    public:
        Book(const std::string& t, int y, const Author& a);
        std::string getTitle() const;
        int getYear() const;
        Author getAuthor() const;

        void setTitle(const std::string& t);
        void setYear(int y);
        void setAuthor(const Author& a);

        void show() const;
};

#endif