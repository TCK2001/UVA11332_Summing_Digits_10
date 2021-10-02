## UVA11332_Summing_Digits_10
+ website : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=25&page=show_problem&problem=2307
-----
```c++
int num(int number)
{
	int sum=0;
	while(number>0) //첫 숫자 계산 함수; 
	{
		sum=sum+number%10; //plus one by one;
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
```
We have to use recursive to solve this program.
