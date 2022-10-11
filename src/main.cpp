#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	for (auto i = 0; i < 4; ++i) {
		for (auto j = 0; j < n; ++j) {
			for (auto k = 0; k < n; ++k) {
				cout << '@';
			}
			cout << '\n';
		}
	}

	for (auto j = 0; j < n; ++j) {
		for (auto k = 0; k < 5 * n; ++k) {
			cout << '@';
		}
		cout << '\n';
	}

	return 0;
}