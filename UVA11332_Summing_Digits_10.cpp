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
	while(number>0) //ù ���� ��� �Լ�; 
	{
		sum=sum+number%10;
		number/=10;
	}
	if(sum<10) //ù��° ��� �ϰ� 10���� ������ �׳� ��� , ũ���� �ѹ��� ��ͷ� ���; 
	{
		return sum;
	}
	else if(sum>10)
	{
		return num(sum);
	}
}


int main() //����Լ��� ����ϸ� ���� ���ϰ� Ǯ������; 
{
	int n;
	int sum2=0;
	while(cin>>n)
	{
		if(n<=0)
		{
			break;
		}
		sum2=num(n); //��ͷ� �ѱ��; 
		cout<<sum2<<endl;
	}
	 
return 0;
}

