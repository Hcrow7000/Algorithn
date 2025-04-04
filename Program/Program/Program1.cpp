#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define SIZE 6
#define INFINITY 1000000

class Dijkctra
{
private:
	int node[SIZE][SIZE] =
	{
		{0,2,5,1,INFINITY,INFINITY},
		{2,0,3,2,INFINITY,INFINITY},
		{5,3,0,3,1,5},
		{1,2,3,0,1,INFINITY},
		{INFINITY,INFINITY,1,1,0,2},
		{INFINITY,INFINITY,5,INFINITY,2,0},
	};

	bool visited[SIZE];
	int distance[SIZE];

public:
	Dijkctra()
	{
		for (int i = 0; i < SIZE; i++)
		{
			visited[i] = false;
			distance[i] = 0;
		}
	}

	const int& Find()
	{
	
	}

	void calculate(int start)
	{
		
	}
};

int main() 
{
#pragma region 다익스트라 알고리즘
	// 시작점으로부터 모든 노드까지의
	// 최소거리를 구해주는 알고리즘입니다.
	
	// 1. 거리배열에 weight[시작노드]의
	// 값들로 초기화합니다.

	// 2. 시작점을 방문 처리합니다.

	// 3. 거리 배열에서 최소 비용 노드를 찾고 방문 처리함.
	// 단, 이미 방문한 노드는 제외
	
	// 4. 최소 비용 노드를 거쳐갈지 고민해서 거리 배열을 갱신함
	// 단, 이미 방문한 노드는 제외

	// 5. 모든 노드를 방문할 때가지 3번~4번을 반복함
	
	// 방문하지 않은 노드 중에서 가장 작은 거리를 가진 
	// 노드를 방문, 그 노드와 연결된 다른 노드까지의 거리를 계산함.
	
	Dijkctra dijkctra;


	dijkctra.calculate(1);






	cout << "distance : " << << endl;
#pragma endregion 
	
	return 0;

}