#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int cnt;
	vector<int> nums;
	vector<int> out;
	set<int> res;
	cin >> cnt;
	for(int i = 0;i < cnt;i++){
		int num;
		cin >> num;
		nums.push_back(num);
	}
	if(cnt == 0){
		return 0;
	}
	for(vector<int>::iterator it=nums.begin();it != nums.end();++it){
		int n = (*it);
		while(1)
    	{
    		if(1 == n)
        	{
        	    break;
        	}
        	if(n%2)
        	{
        	    n = (3 * n + 1)/2;
        	    res.insert(n);
        	}else{
        	    n /= 2;
        	    res.insert(n);
        	}       
    	}
	}
	for(vector<int>::iterator it = nums.begin();it != nums.end();++it){
		if(res.end() == res.find(*it)){
			out.push_back(*it);
		}
	}
	sort(out.begin(),out.end());
	for(vector<int>::reverse_iterator it = out.rbegin();it != out.rend()-1;++it){
		cout << *it << " ";
	}
	cout << *(out.rend()-1) << endl;
}
