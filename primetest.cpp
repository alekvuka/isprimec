#include <iostream>
using std::cin;
using std::cout;
#include <cmath>
using std::endl;
using std::string;



int main()
{
	unsigned long n;
	while(cin >> n) {
		
		float sqn = sqrt(n);
		if (floor(sqn) == sqn){
			cout << 0 << endl;
		}else {
			
		    	for(int r = 2; r <= floor(sqn); r++){
				if (n%r==0) {
					cout << 0 << endl;
					break;
				} else if (r == floor(sqn)) {
					cout << 1 << endl;
				}
			}
		}
	}

	return 0;
}
