#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	std::string s1;
	std::string s2;
	std::ofstream myfile;

	int	index = 0;
	s1 = std::string(argv[2]);
	s2 = std::string(argv[3]);
	
	if(argc != 4)
	{
		std::cout << "Error : invalid argument! " << std::endl;
		return 0;
	}

	if (argc == 4)
	{
		std::string in_file = argv[1];
		std::ifstream input_file(in_file.c_str());
		std::string out_file = argv[1];
		out_file += ".replace"; //output file name test => test.replace
		std::ofstream output_file(out_file.c_str());
		std::string line;

		for (int line_num = 1; std::getline(input_file, line); ++line_num)
		{
			index = 0;
			while (line.find(s1 ,index) != std::string::npos)
			{
				index = line.find(s1);
				line.erase(index,s1.length());
				line.insert(index,s2);
				index++;
			}
			output_file << line << std::endl;
		}
		if (input_file)
		{
			input_file.close();
			output_file.close();
		}
		std::cin.get();
	}
    return 0;
}
