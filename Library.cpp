#include "Library.h"
#include "Header.h"



Library::Library(){}
Library::~Library() {}

std::list<std::string> Library::show_author()
{
	std::list <std::string> LIST;
	if (table.size() != 0)
	{
		for (auto it = table.begin(); it != table.end(); ++it)
		{
			//std::cout << it->first << " : " << std::endl;
			LIST.push_front(it->first);
		}
		return LIST;
	}
	else
	{ 
		std::cout << "List of authors is empty" << std::endl;
		return LIST;
	}
}

void Library::add_author(std::string author)
{

	if (table.find(author) == table.end())
	{
		std::list <BOOK> LIST;
		table[author] = LIST;
	}
	else
	{
		std::cout << "Wrong author" << std::endl;
	}
}

void Library::del_author(std::string author)
{
	if (table.find(author) != table.end())
	{
		table.erase(author);
	}
	else
	{
		std::cout << "Wrong author" << std::endl;
	}
}

void Library::add_book(std::string author, std::string name_of_book, int year_of_book)
{
	bool flag = false;
	for (auto it = table.begin(); it != table.end(); ++it)
	{

		for (auto itBook = it->second.begin(); itBook != it->second.end(); ++itBook)
		{
			if (name_of_book == itBook->name)
			{
				//std::cout << itBook->name << std::endl;
				flag = true;
			}
		}
	}

	if (table.find(author) != table.end() && (flag == false))
	{
		auto it = table.find(author);
		BOOK book;
		book.name = name_of_book;
		book.year = year_of_book;
		(it->second).push_back(book);
	}
	else if (table.find(author) == table.end())
	{
		add_author(author);
		auto it = table.find(author);
		BOOK book;
		book.name = name_of_book;
		book.year = year_of_book;
		(it->second).push_back(book);
	}
	else
	{
		std::cout << "Wrong book" << std::endl;
	}
}
void Library::del_book(std::string author, std::string name_of_book, int year_of_book)
{
	auto it = table.find(author);
	bool flag = false;
	if (it != table.end())
	{
		for (auto itt = it->second.begin(); itt != it->second.end(); ++itt)
		{
			if ((itt->name) == name_of_book && ((itt->year) == year_of_book))
			{
				it->second.erase(itt);
				flag = true;
				break;
			}
		}
	}
	if (flag == false)
	{
		std::cout << "Wrong book" << std::endl;
	}
}
std::list <Library::BOOK> Library::s_year(int year_of_book)
{
	bool flag = false;
	std::list <BOOK> LIST;
	for (auto it = table.begin(); it != table.end(); ++it)
	{
		for (auto itBook = it->second.begin(); itBook != it->second.end(); ++itBook)
		{
			if (year_of_book == itBook->year)
			{
				BOOK book;
				book.name = itBook->name;
				book.year = itBook->year;
				LIST.push_back(book);
				flag = true;
			}
		}
	}
	if (flag == false)
	{
		std::cout << "Not found" << std::endl;
		return LIST;
	}
	else
	{
		return LIST;
	}
		
	
}
std::list <Library::BOOK> Library::s_name(std::string name_of_book)
{
	bool flag = false;
	std::list <BOOK> LIST;
	for (auto it = table.begin(); it != table.end(); ++it)
	{
		for (auto itBook = it->second.begin(); itBook != it->second.end(); ++itBook)
		{
			if (name_of_book == itBook->name)
			{
				BOOK book;
				book.name = itBook->name;
				book.year = itBook->year;
				LIST.push_back(book);
				flag = true;
			}
		}
	}
	if (flag == false)
	{
		return LIST;
		std::cout << "Not found" << std::endl;
	}
	else
	{
		return LIST;
	}
	
}
std::list <Library::BOOK> Library::s_author(std::string name_of_author)
{
	std::list <BOOK> LIST;
	auto it = table.find(name_of_author);
	if (table.find(name_of_author) != table.end())
	{
		return it->second;
		/*for (auto itBook = it->second.begin(); itBook != it->second.end(); ++itBook)
		{
			//std::cout << itBook->name << std::endl;
			BOOK book;
			book.name = itBook->name;
			book.year = itBook->year;
			LIST.push_back(book);

		}
		return LIST;*/
	}
	else
	{
		std::cout << "Wrong author" << std::endl;
		return it->second;
	}


}

