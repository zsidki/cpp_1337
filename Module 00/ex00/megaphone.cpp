#include <iostream>
//#include <ctype>

int	main()
{
	char c;
	std::string str;


	//std::cin >> str;


	std::getline(std::cin, str);
	//std::cout << str<< std::endl;
	//gets(str) = len;
	for(size_t i = 0; i < str.length() ; i++) 
	{
		c = toupper(str[i]);
		std::cout << c;
	}

    //std::cout << str;
    return 0;
}