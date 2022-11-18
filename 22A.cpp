#include <iostream>
#include <set>

int main() {
	std::set<int> m;
	int i; std::cin >> i;
	while (std::cin >> i) m.insert(i);
	m.erase(*m.begin());
	if (m.size()) std::cout << *m.begin();
	else std::cout << "NO";
}
