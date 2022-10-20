// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
int main()
{
	int N = 0, answercount = 0;
	bool answercheck = true;
	int values[100000];
	string answer="";
	stack<int> stacks;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> values[i];
	}
	for (int i = 1; i < N + 1; i++)
	{
		stacks.push(i);
		answer+= "+\n";
		while (stacks.size() > 0)
		{
			if (stacks.top() == values[answercount])
			{
				stacks.pop();
				answer += "-\n";
				answercount++;
			}
			else
			{
				break;
			}
		}
	}
	if (stacks.size() > 0)
	{
		cout << "NO";
	}
	else
	{
		cout << answer;
	}
}