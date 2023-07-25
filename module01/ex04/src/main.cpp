/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gclement <gclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:58:00 by gclement          #+#    #+#             */
/*   Updated: 2023/07/25 09:22:25 by gclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

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

void writeInExitFile(std::string content, std::string path)
{
	size_t	pos;

	pos = path.find_last_of('/');
	if (pos != std::string::npos)
		path = path.substr(pos + 1, path.size());
	path += ".replace";
	std::ofstream exitFile(path.data());
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
	writeInExitFile(content, path);
	return (0);
}