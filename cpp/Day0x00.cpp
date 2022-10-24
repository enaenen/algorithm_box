#include <bits/stdc++.h>
using namespace std;
// N 이 3의 배수 혹은 5의 배수라면 더해서 리턴
int func1( int N ) {
	int result = 0;
	for ( int i = 1; i <= N; i++ ) {
		if ( i % 3 == 0 )
			result += i;
		else if ( i % 5 == 0 )
			result += i;
	}
	return result;
}
// arr의 원소의 합이 100이 되는게 있는지 찾아라
int func2( int arr[], int N ) {
	for ( int i = 0; i < N; i++ ) {
		for ( int j = i + 1; j < N; j++ )
			if ( arr[i] + arr[j] == 100 )
				return 1;
	}
	return 0;
}
/**
 * @brief i 가 어떤수의 제곱수인지 찾아라
 *
 * @param N
 * @return int
 */

int func3( int N ) {
	for ( int i = 1; i * i <= N; i++ )
		if ( i * i == N )
			return 1;
	return 0;
}
// N 이하의 수 중에서 가장 큰 2의 거듭제곱수를 반환하는 함수 작성
// N 은 2^k 이상 2^k+1 미만 이라고 할때, i 는 최대 k번만 2배로 커진다.
// N 이 2^k 이상 2^k+1 미만 이라고 할때 시간복잡도는 2(k) => k 는 logN
// O(logN)
int func4( int N ) {
	int prev = 0;
	for ( int i = 2; i <= N; i *= 2 ) {
		prev = i;
	}
	return prev;
}

void test1() {
	cout << "****** func1 test ******\n";
	int n[3] = { 16, 34567, 27639 };
	int ans[3] = { 60, 278812814, 178254968 };
	for ( int i = 0; i < 3; i++ ) {
		int result = func1( n[i] );
		cout << "TC #" << i << '\n';
		cout << "expected : " << ans[i] << " result : " << result;
		if ( ans[i] == result )
			cout << " ... Correct!\n";
		else
			cout << " ... Wrong!\n";
	}
	cout << "*************************\n\n";
}

void test2() {
	cout << "****** func2 test ******\n";
	int arr[3][4] = { { 1, 52, 48 }, { 50, 42 }, { 4, 13, 63, 87 } };
	int n[3] = { 3, 2, 4 };
	int ans[3] = { 1, 0, 1 };
	for ( int i = 0; i < 3; i++ ) {
		int result = func2( arr[i], n[i] );
		cout << "TC #" << i << '\n';
		cout << "expected : " << ans[i] << " result : " << result;
		if ( ans[i] == result )
			cout << " ... Correct!\n";
		else
			cout << " ... Wrong!\n";
	}
	cout << "*************************\n\n";
}

void test3() {
	cout << "****** func3 test ******\n";
	int n[3] = { 9, 693953651, 756580036 };
	int ans[3] = { 1, 0, 1 };
	for ( int i = 0; i < 3; i++ ) {
		int result = func3( n[i] );
		cout << "TC #" << i << '\n';
		cout << "expected : " << ans[i] << " result : " << result;
		if ( ans[i] == result )
			cout << " ... Correct!\n";
		else
			cout << " ... Wrong!\n";
	}
	cout << "*************************\n\n";
}

void test4() {
	cout << "****** func4 test ******\n";
	int n[3] = { 5, 97615282, 1024 };
	int ans[3] = { 4, 67108864, 1024 };
	for ( int i = 0; i < 3; i++ ) {
		int result = func4( n[i] );
		cout << "TC #" << i << '\n';
		cout << "expected : " << ans[i] << " result : " << result;
		if ( ans[i] == result )
			cout << " ... Correct!\n";
		else
			cout << " ... Wrong!\n";
	}
	cout << "*************************\n\n";
}

int main( void ) {
	test1();
	test2();
	test3();
	test4();
}