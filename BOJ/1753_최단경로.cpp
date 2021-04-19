//�ִ� ���

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int INF = 1000000000;

vector<pair<int, int>> a[20010]; // ���� ����
int d[20010]; // �ִ� ���

void dijkstra(int start) {
	priority_queue<pair<int, int>> pq;
	d[start] = 0;
	pq.push(make_pair(0, start));

	// ����� ������� ó���ϹǷ� ť�� ���
	while (pq.empty() == 0) {
		int current = pq.top().second;
		// ª�� ���� ���� ������ ����ȭ.
		int currentDistance = -pq.top().first;
		pq.pop();
		if (d[current] < currentDistance) continue; // �ִ� ��ΰ� �ƴ� ���
		for (int i = 0; i < a[current].size(); i++) {
			// �湮 ����� ���� ���
			int next = a[current][i].first;
			int nextDistance = currentDistance + a[current][i].second;
			//���� �Ÿ����� ª�ٸ� �� ����
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

	for (int i = 1; i <= V; i++) { // �迭 �ʱ�ȭ
		d[i] = INF;
	}

	for (int i = 0; i < E; i++) { // �Է� ó��
		cin >> v1 >> v2 >> e;
		a[v1].push_back(make_pair(v2, e));
	}

	dijkstra(start); // dijkstra ����

	for (int i = 1; i <= V; i++) {
		if (d[i] == INF) // ��ΰ� �������� �ʴ� ���
			printf("INF\n");
		else
			printf("%d\n", d[i]);
	}
}