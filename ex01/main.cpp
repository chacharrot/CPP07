
#include "iter.hpp"

int main()
{
	int i[] = {0, 1, 2, 3, 4}; 
	double d[] = {0, 1.1, 2.2, 3.3, 4.4, 5.5};
	std::string s[] = {"one", "two", "three"}; 
	iter(i, 5, printtemp);
	iter(d, 6, printtemp);
	iter(s, 3, printtemp);

	return 0;
}

class Awesome{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
private:
	int _n;
};
