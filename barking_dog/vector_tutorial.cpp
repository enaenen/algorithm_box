#include <bits/stdc++.h>

int main( void ) {
	std::vector<int> v1( 3, 5 );  // {5, 5, 5}
	std::cout << "v1.size() : " << v1.size() << "\n";
	v1.push_back( 7 );  // {5, 5, 5, 7}

	std::vector<int> v2( 2 );        // {0, 0}
	v2.insert( v2.begin() + 1, 3 );  // { 0, 3, 0}

	std::vector<int> v3 = { 1, 2, 3, 4 };  // {1,2,3,4}
	v3.erase( v3.begin() + 2 );            // {1,2,4};

	std::vector<int> v4;  // {}
	v4 = v3;
	std::cout << v4[0] << v4[1] << v4[2] << "\n";  // 124
	v4.pop_back();                                 //{1, 2}
	v4.clear();                                    //{}
}