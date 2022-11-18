#include <cmath>
#include <stdio.h>
 
using namespace std;
 
int main() {
	unsigned int a,m,n;
	scanf("%i%i%i", &m, &n, &a);
	unsigned int x = (ceil((double)n/a)*ceil((double)m/a));
	printf("%lli", x);
}
