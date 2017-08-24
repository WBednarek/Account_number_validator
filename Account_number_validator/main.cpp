#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>



template<typename T>
T stringComparator(T fistInputtedString, T secondInputtedString)
{
	T result;

	if (fistInputtedString == secondInputtedString)
	{
		result = "Strings are the same";
	}
	else
	{
		result = "Strings are different";
	}

	return result;

}


void eraseWhiteSpacesFromStrings(std::vector<std::string>& stringsToTransform)
{
	for (int i = 0; i < stringsToTransform.size(); ++i)
	{
		stringsToTransform.at(i).erase(remove(stringsToTransform.at(i).begin(), stringsToTransform.at(i).end(), ' '), stringsToTransform.at(i).end());
		stringsToTransform.at(i).erase(remove(stringsToTransform.at(i).begin(), stringsToTransform.at(i).end(), '\t'), stringsToTransform.at(i).end());
	}
}

int main()
{


	std::vector<std::string> listOfInputs(2);

	std::cout << "Input the first string" << std::endl;
	getline(std::cin, listOfInputs[0]);

	std::cout << "Input the second string" << std::endl;
	getline(std::cin, listOfInputs[1]);
	

	eraseWhiteSpacesFromStrings(listOfInputs);

	std::cout << stringComparator<std::string>(listOfInputs[0], listOfInputs[1]) << std::endl;
	std::cout << "The first string: " + listOfInputs[0] << std::endl;
	std::cout << "The second string: " + listOfInputs[1] << std::endl;

	system("pause");
	return 0;
}
