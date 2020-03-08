#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> A,Q;
	int B,R;
	int q,r;
	char ch;
	while(1){
		ch = getchar();
		if(ch == ' ') break;
		A.push_back(ch - '0');
	}

	cin >> B;
	if(A.size() == 1){
		cout << *A.begin() / B << " " << *A.begin() % B << endl;
		return 0;
	}
	vector<int>::iterator it;
	for(it = A.begin();it != A.end() - 1;++it){
		q = ((*it) * 10 + (*(it + 1)))/B;
		r = ((*it) * 10 + (*(it + 1)))%B;
		Q.push_back(q);
		*(it + 1) = r;
		//cout << *it;
	}
	for(it = Q.begin();it != Q.end();++it)
	{
		cout << *it;
	} 
	cout << " " << r << endl;
	return 0;
}
