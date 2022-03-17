/*
*	Author:	CS
*	Date:	2022_03_17	YYYY_MM_DD
* 
*	Implement STL-style count() : where x = count(..), x is the number of occurrences of v in [b:e).
*/

#include <iostream>
#include <vector>
#include <list>
#include <string>

template <typename T>
int count(T* begin, T* end, T val) {
	int cnt{ 0 };
	while (begin != end)
		if (val == *begin)
			++cnt;
	return cnt;
}

int main() {
	std::vector<int> vect{ 5,50,5,100,5 };
	std::list<std::string> list{ "alpha", "bravo", "alpha", "alpha", "zulu" };

	std::cout << "The count should return three of int(5) in vect :\n";
	std::cout << count(vect.begin(), vect.end(), 5) << std::endl;
	std::cout << "The count should return three of std::string(\"alpha\") in list : \n";
	std::cout << count(list.begin(), list.end(), "alpha") << std::endl;
	return 0;
}