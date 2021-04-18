#include <string>
#include <vector>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;

    bool ended[citations.size()]; // �� �̻� ���غ��� �ʾƵ� �ȴٸ� true, �ƴ϶�� false
    fill_n(ended, citations.size(), false);

    for (int i = 0; i < citations.size(); i++) {
        int v = 0;
        for (int j = 0; j < citations.size(); j++) {
            if (!ended[j]) { // ���غ��� �ϴ� ������ ���
                if (citations[j] >= i) v++; // i�� �̻��� ���� ���� count
                else ended[j] = true; // i������ ���� ��� i+1���ʹ� �湮���� �ʵ��� ��.
            }
        }

        if (v >= i) // i�� �̻��� ���� ����(v)�� i�� �̻��̶��
            answer = i;
    }

    return answer;
}