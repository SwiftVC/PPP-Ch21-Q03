/*
*	Author:	CS
*	Date:	2022_03_17	YYYY_MM_DD
*
*	Implement STL-style count_if() : where x = count(..), x is the number of occurrences of v in [b:e).
*	Lesson: Visual studio has xutility included by default which was called instead of my version of count
*
*	Properties>C/C++>Advanced>Show includes is accessible from Project1\Project1\x64\Debug\Project1.log
*	xutlities is included in iostream, which has a version of count in the global namespace.
*/

#include <iostream>
#include <vector>
#include <list>
#include <string>

template <typename It, typename T>
int my_count(It begin, It end, T val) {
	int cnt{ 0 };
	while (begin != end) {
		if (val == *begin)
			++cnt;
		++begin;
	}
	return cnt;
}

int main() {
	std::vector<int> vect{ 5,50,5,100,5 };
	std::list<std::string> list{ "alpha", "bravo", "alpha", "alpha", "zulu" };

	std::cout << "The count should return three of int(5) in vect :\n";
	std::cout << my_count(vect.begin(), vect.end(), 5) << std::endl;
	std::cout << "The count should return three of std::string(\"alpha\") in list : \n";
	std::cout << my_count(list.begin(), list.end(), "alpha") << std::endl;

	return 0;
}