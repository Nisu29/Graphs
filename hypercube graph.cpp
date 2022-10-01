// C++ program to find vertices in a hypercube
// graph of order n
#include <iostream>
using namespace std;

// function to find power of 2
int power(int n)
{
	if (n == 1)
		return 2;
	return 2 * power(n - 1);
}

// driver program
int main()
{
	// n is the order of the graph
	int n = 4;
	cout << power(n);
	return 0;
}
