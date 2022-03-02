
#include <iostream>

int	main(int argc, char **argv)
{
	char c;
	std::string str;

	if(argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}

	for (size_t i = 1; i < (size_t)argc ; i++)
	{
		for(size_t j = 0; j < strlen(argv[i]); j++) 
		{
			c = toupper(argv[i][j]);
			std::cout << c;
		}}
    std::cout << std::endl;
    return 0;
}
