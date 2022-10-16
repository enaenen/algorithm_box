#include <bits/stdc++.h>

int main( void ) {
	{
		std::vector<int> v1( 3, 5 );  // {5, 5, 5}
		std::cout << "v1.size() : " << v1.size() << "\n";
		v1.push_back( 7 );  // {5, 5, 5, 7}

		std::vector<int> v2( 2 );        // {0, 0}
		v2.insert( v2.begin() + 1, 3 );  // { 0, 3, 0}

		// this should compile : c++ -std=c++11 flag
		std::vector<int> v3 = { 1, 2, 3, 4 };  // {1,2,3,4}
		v3.erase( v3.begin() + 2 );            // {1,2,4};

		std::vector<int> v4;  // {}
		v4 = v3;
		std::cout << v4[0] << v4[1] << v4[2] << "\n";  // 124
		v4.pop_back();                                 //{1, 2}
		v4.clear();                                    //{}
	}

	// for
	{
		std::vector<int> v1;
		v1.push_back( 1 );
		v1.push_back( 2 );
		v1.push_back( 3 );
		v1.push_back( 4 );
		v1.push_back( 5 );

		// this CANNOT change v1's value cause it's  e is value copy
		for ( int e : v1 ) {
			e += 1;
			std::cout << e << ' ';
		}
		std::cout << '\n';

		for ( int& e : v1 ) {
			std::cout << e << ' ';
		}
		std::cout << '\n';

		// this & CAN change v1's value
		for ( int& e : v1 ) {
			std::cout << ++e << ' ';
		}
		std::cout << '\n';

		for ( int e : v1 ) {
			std::cout << e << ' ';
		}
	}
}