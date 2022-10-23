#include <bits/stdc++.h>

int main( void ) {
	std::ios::sync_with_stdio( 0 );
	std::cin.tie( 0 );

	std::string str;
	getline( std::cin, str );
	std::cout << str;
	int arr[26] = { 0 };
	for ( int i : str ) arr[i - 'a']++;

	for ( int i : arr ) std::cout << i << ' ';
}