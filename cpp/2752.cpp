#include <bits/stdc++.h>

void sortArr( int arr[] ) {
	for ( int i = 0; i < 3; i++ ) {
		for ( int j = i + 1; j < 3; j++ ) {
			if ( arr[j] < arr[i] ) {
				int tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}
	}
}

int main( void ) {
	int arr[3] = { 0 };
	for ( int i = 0; i < 3; i++ ) std::cin >> arr[i];
	sortArr( arr );
	for ( int n : arr ) {
		std::cout << n << ' ';
	}
	std::cout << std::endl;
}