#include <bits/stdc++.h>

using namespace std;

vector<long long> seg(4 * 1000000);
vector<long long> lazy(4 * 1000000);
vector<long long> arr(1000000 + 1);

//트리 만들기ㅣㅣ
void maketree(int node, int start, int end) {
	if (start == end) seg[node] = arr[start];
	else {
		int mid = (start + end) / 2;
		maketree(node * 2, start, mid);
		maketree(node * 2 + 1, mid + 1, end);
		seg[node] = seg[node * 2] + seg[node * 2 + 1];
	}
}

//느리게 반영하기ㅣㅣㅣ
void updatelazy(int node, int start, int end) {
	if (lazy[node] != 0) {
		seg[node] += (end - start + 1) * lazy[node];

		if (start != end) {
			lazy[node * 2] += lazy[node];
			lazy[node * 2 + 1] += lazy[node];
		}

		lazy[node] = 0;
	}
}

//선택 노드를 변경해버리기ㅣㅣㅣㅣ
void update(int node, int start, int end, int l, int r, long long val) {
	updatelazy(node, start, end);

	if (r < start || l > end) return;

	if (l <= start && r >= end) {
		lazy[node] += val;
		updatelazy(node, start, end);
	}
	else {
		int mid = (start + end) / 2;
		update(node * 2, start, mid, l, r, val);
		update(node * 2 + 1, mid + 1, end, l, r, val);
		seg[node] = seg[node * 2] + seg[node * 2 + 1];
	}
}

//선택 노드 더해버리기ㅣㅣㅣㅣㅣ
long long query(int node, int start, int end, int l, int r) {
	updatelazy(node, start, end);

	if (r < start || l > end) return 0;

	if (l <= start && r >= end) return seg[node];
	else {
		int mid = (start + end) / 2;
		return query(node * 2, start, mid, l, r) + query(node * 2 + 1, mid + 1, end, l, r);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m, k;
	cin >> n >> m >> k;

	for (int i = 1; i <= n; i++) cin >> arr[i];

	maketree(1, 1, n);

	int rep = m + k;
	while (rep--) {
		int type;
		cin >> type;

		if (type == 1) {
			int a, b;
			long long c;
			cin >> a >> b >> c;

			update(1, 1, n, a, b, c);
		}
		else {
			int a, b;
			cin >> a >> b;

			cout << query(1, 1, n, a, b) << '\n';
		}
	}

	return 0;
}