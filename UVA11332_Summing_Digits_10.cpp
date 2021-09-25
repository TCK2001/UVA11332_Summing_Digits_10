/*
Sample Input
2
11
47
1234567892
0
Sample Output
2
2
2
2
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

/*
f(n) = 1+2+3+4+5+6+7+8+9+2 = 47
f(f(n)) = 4 + 7 = 11
f(f(f(n))) = 1 + 1 = 2
*/

int num(int number)
{
	int sum=0;
	while(number>0) //첫 숫자 계산 함수; 
	{
		sum=sum+number%10;
		number/=10;
	}
	if(sum<10) //첫번째 계산 하고도 10보다 작으면 그냥 출력 , 크면은 한번더 재귀로 계산; 
	{
		return sum;
	}
	else if(sum>10)
	{
		return num(sum);
	}
}


int main() //재귀함수를 사용하면 더욱 편하게 풀수있음; 
{
	int n;
	int sum2=0;
	while(cin>>n)
	{
		if(n<=0)
		{
			break;
		}
		sum2=num(n); //재귀로 넘기기; 
		cout<<sum2<<endl;
	}
	 
return 0;
}

