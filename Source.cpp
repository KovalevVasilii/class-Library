#include "Header.h"
#include "Library.h"

/*std::ostream& operator<<(std::ostream& os, Return_status c)
{
	switch (c)
	{
	case OK: os << "OK"; break;
	case WRONG_AUTHOR: os << "WRONG_AUTHOR"; break;
	case WRONG_BOOK: os << "WRONG_BOOK"; break;
	case WRONG_YEAR: os << "WRONG_YEAR"; break;
	case AUTHOR_LIST_IS_EMPTY: os << "AUTHOR_LIST_EMPTY"; break;
	case BOOK_LIST_IS_EMPTY: os << "BOOK_LIST_EMPTY"; break;
	}
	return os;
}*/
int main()
{
	Library LIB;
	//try {
		LIB.add_author("Kovalev");
		LIB.add_author("Kovalev");
		LIB.add_author("Kovalevas");
		LIB.add_author("WWEgorov");
		LIB.add_author("EEgorossv");
		LIB.add_author("DEgorodsdsgv");
	//}
	/*catch (const Return_status& rs)
	{
		std::cout << "Error name: " << rs << std::endl;
	}
	catch (std::string s)
	{
		std::cout << s << std::endl;
	}
	std::list < std::string > LIST;*/
	
	std::cin.get();
	std::cin.get();
	return 0;
}
