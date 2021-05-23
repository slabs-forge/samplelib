
#include <iostream>
#include "boost/core/swap.hpp"

int test() {
	int x = 4;
	int y = 5;

	boost::swap(x,y);

	return 0;
}
