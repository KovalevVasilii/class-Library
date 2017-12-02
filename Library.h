#pragma once
#include "Header.h"
#include "status.h"
class Library
{
public:
	struct BOOK
	{
		std::string name;
		int year;
	};
	std::map <std::string, std::list<BOOK>> table;

	Library();

	~Library();

	std::list <std::string> show_author();

	void add_author(std::string author);

	void del_author(std::string author);

	void add_book(std::string author, std::string name_of_book, int year_of_book);
	
	void del_book(std::string author, std::string name_of_book, int year_of_book);
	
	std::list <BOOK> s_year(int year_of_book);
	
	std::list <BOOK> Library::s_name(std::string name_of_book);
	
	std::list <BOOK> s_author(std::string name_of_author);
};

