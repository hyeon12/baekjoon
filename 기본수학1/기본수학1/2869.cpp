#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);	//속도 향샹을 위해
	cin.tie(NULL), cout.tie(NULL);
	
	int a, b, v;
	cin >> a >> b >> v;
	cout << (v - b - 1) / (a - b) + 1;
}