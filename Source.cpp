#include "C:\Users\cmcin\Desktop\SWDV 460_DevOps\Week 4\Assignment4\pugixml-1.14\src\pugixml.hpp"

#include <iostream>
#include "Source.h"



int main()
{
    pugi::xml_document doc;
    std::string nameBook;

    if (!doc.load_file("catalog.xml")) return -1;


    pugi::xml_node books = doc.child("catalog");

    std::cout << books.name() << std::endl;

    for (pugi::xml_node book = books.first_child(); book; book = book.next_sibling())
    {
        //We found a "book" -- print it's attributes
        for (pugi::xml_attribute attr = book.first_attribute(); attr; attr = attr.next_attribute())
        {
            std::cout << " " << attr.name() << "=" << attr.value() << std::endl;

            std::string attrName = attr.name();
            if (!attrName.compare("name"))
            {
                nameBook = attr.value();
            }
        }
        std::cout << std::endl;

        std::cout << "Book: " << nameBook << std::endl;
        //Now print all elements and attributes of current "book"
        for (pugi::xml_node child = book.first_child(); child; child = child.next_sibling())
        {
            std::cout << child.name() << std::endl;     // get element name
            // iterate through all attributes
            for (pugi::xml_node book = books.child("Book"); book; book = book.next_sibling("Book"))
            {
                std::cout << "Author: " << book.attribute("author").value() << "'\n";
                std::cout << "Title: " << book.attribute("title").value() << "'\n";
                std::cout << "Genre: " << book.attribute("genre").value() << "'\n";
                std::cout << "Price: " << book.attribute("price").value() << "'\n";
                std::cout << "Publish Date: " << book.attribute("publish_date").value() << "'\n";
                std::cout << "Description: " << book.child_value("description") << "'\n";
            }
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;
}