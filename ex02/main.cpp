#include "Array.hpp"

int main()
{
	Array<int>	some(5);

	for (int i = 0; i < some.size(); ++i)
		some[i] = i * i;

	Array<int>	copy(some);
	Array<int>	def;

	std::cout << "Some array: " << std::endl;
	for (int i = 0; i < some.size(); ++i)
	{
		std::cout << some[i] << '\n';
	}
	std::cout << std::endl;

	std::cout << "Copy array: " << std::endl;

	for (int i = 0; i < copy.size(); ++i)
	{
		std::cout << some[i] << " -> " << copy[i] << '\n';
	}
	std::cout << "Array address some: " << some.getArray() << std::endl;
	std::cout << "Array address copy: " << copy.getArray() << std::endl;
	

	std::cout << "def: " << std::endl;
	try
	{
		def[1];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	return (0);
}