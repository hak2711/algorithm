//최단 경로

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int INF = 1000000000;

vector<pair<int, int>> a[20010]; // 간선 정보
int d[20010]; // 최단 경로

void dijkstra(int start) {
	priority_queue<pair<int, int>> pq;
	d[start] = 0;
	pq.push(make_pair(0, start));

	// 가까운 순서대로 처리하므로 큐를 사용
	while (pq.empty() == 0) {
		int current = pq.top().second;
		// 짧은 것이 먼저 오도록 음수화.
		int currentDistance = -pq.top().first;
		pq.pop();
		if (d[current] < currentDistance) continue; // 최단 경로가 아닌 경우
		for (int i = 0; i < a[current].size(); i++) {
			// 방문 노드의 인접 노드
			int next = a[current][i].first;
			int nextDistance = currentDistance + a[current][i].second;
			//기존 거리보다 짧다면 값 갱신
			if (nextDistance < d[next]) {
				d[next] = nextDistance;
				pq.push(make_pair(-d[next], next));
			}
		}
	}
}

int main(void) {
	int V, E, start, v1, v2, e;
	cin >> V >> E >> start;

	for (int i = 1; i <= V; i++) { // 배열 초기화
		d[i] = INF;
	}

	for (int i = 0; i < E; i++) { // 입력 처리
		cin >> v1 >> v2 >> e;
		a[v1].push_back(make_pair(v2, e));
	}

	dijkstra(start); // dijkstra 시행

	for (int i = 1; i <= V; i++) {
		if (d[i] == INF) // 경로가 존재하지 않는 경우
			printf("INF\n");
		else
			printf("%d\n", d[i]);
	}
}