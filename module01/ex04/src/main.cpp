/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:58:00 by gclement          #+#    #+#             */
/*   Updated: 2023/07/23 12:51:32 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

/* s1 = copains, s2 = putes*/
/* Salut les copains comment ca va ? Moi bien*/
std::string getEntry(std::ifstream &entryFile)
{
	std::string entry;
	std::string line;

	while (std::getline(entryFile, line))
	{
		entry += line;
		entry += "\n";
	}
	return (entry);
}

std::string replace(std::string entry, std::string s1, std::string s2)
{
	size_t pos;
	size_t i;
	std::string result;

	i = 0;
	while (i < entry.size())
	{
		pos = entry.find(s1, i);
		if (i == 0 && pos == std::string::npos)
			return (entry);
		if (pos != std::string::npos)
		{
			result += entry.substr(i, pos - i);
			result += s2;
			i = pos + s1.size();
		}
		else
		{
			result += entry.substr(i, entry.size());
			i = entry.size();
		}
	}
	return (result);
}

void createExitFilesAndWrite(std::string content, std::string filename)
{
	std::ofstream exitFile(filename + ".replace");
	
	if (!exitFile.is_open())
	{
		std::cout << "Error: can't open file" << std::endl;
		return ;
	}
	exitFile << content << std::endl;
}

int main(int argc, char **argv)
{
	std::ifstream entryFile;
	std::string content;
	std::string path;
	
	if (argc != 4)
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
		return (1);
	}
	path = argv[1];
	entryFile.open(argv[1], std::fstream::in);
	if (!entryFile.is_open())
	{
		std::cout << "Error: can't open file" << std::endl;
		return (1);
	}
	content = getEntry(entryFile);
	content = replace(content, argv[2], argv[3]);
	createExitFilesAndWrite(content, path[path.find_last_of('/')]);
	return (0);
}