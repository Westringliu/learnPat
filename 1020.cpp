#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

typedef struct Cake{
	double total_price;
	double total_weight;
	double single_price;
}Cake;

int comp(Cake& a,Cake& b){
	return a.single_price > b.single_price;
}

int main(){
	vector<Cake> cakes;
	double kinds,demands;
	double weights[1000] = {0};	//ע�����������п���Ҳ��double���ͣ��ɴ�intȫ����double���棬��һ�㿨�˺ܾ� 
	double prices[1000] = {0};
	double res_price = 0;
	cin >> kinds >> demands;
	getchar();
	for(int i = 0;i < kinds;i++){
		cin >> weights[i];
	}
	getchar();
	for(int i = 0;i < kinds;i++){
		cin >> prices[i];
	}
	for(int i = 0;i < kinds;i++){
		Cake cake;
		cake.total_weight = weights[i];
		cake.total_price = prices[i];
		cake.single_price = prices[i] / weights[i];
		cakes.push_back(cake);
	}
	sort(cakes.begin(),cakes.end(),comp);
	vector<Cake>::iterator it;
	for(it = cakes.begin();it != cakes.end();++it){
		if(demands > (*it).total_weight){
			res_price += (*it).total_price;
		}else{
			res_price += (*it).single_price * demands;
			break;
		}
		demands -= (*it).total_weight;
		//cout << (*it).total_price << " " << (*it).total_weight << " " << (*it).single_price << endl;
	}
	cout.setf(ios::fixed);
	cout << setprecision(2) << res_price << endl;
}
