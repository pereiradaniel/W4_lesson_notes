#include <iostream>
using namespace std;

template<typename T>
void print(T val)
{
	val++;				// must support ++ postfix
	cout << val;		// must be insertable
	val.setData(54);	// must have a member function called setData with an integer as param
}

class Pair_int_string
{
	int val;
	string key;
};

class Pair_string_string
{
	string val;
	string key;
};

template<>
void print<Pair_int_string>(Pair_int_string val)
{

}

int main()
{
	print<int>(12);
}