#include <iostream>

using namespace std;

class Dice
{

private:
	int roll, num = 0,allDice = 0;

public:

	Dice(){

	};
     
	void rollDice(){
		roll = rand() % 6 + 1;
		allDice += roll;
		num++;
	}

	float average(Dice d,int num){
		return float(d.allDice/num);
	}

	float average(int arr[],int num){
		int sum=0;
		for (int i = 0; i < num;i++){
			sum += arr[i];
		}
		return float(sum) / float(num);
	}

};

int main(){

	return 0;
}