##include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;

struct Pan
{
	int t, l;
};

struct cmp
{
	bool operator() (Pan& a, Pan& b)
	{
		return a.l > b.l;
	}
};

bool operator < (Pan a, Pan b)
{
	return a.t < b.t;
}

vector<Pan> v;
priority_queue<Pan, vector<Pan>, cmp> q;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int t, l;
		cin >> t >> l;
		Pan pan;
		pan.t = t; 
		pan.l = l;
		v.push_back(pan);
	}
	sort(v.begin(), v.end());
	int current = 0;
	int total = 0;
	int index = 0;

	while (true)
	{
		int i;
		for (i = index; i < n; i++)
		{
			if (v[i].t <= current)
				q.push(v[i]);
			else
			{
				index = i;
				break;
			}
		}

		if (i == n) index = n;

		if (!q.empty())
		{
			Pan pan = q.top();
			total += current + pan.l - pan.t;
			current += pan.l;
			q.pop();
		}

		else
		{
			if (index != n)
				current = v[index].t;
		}

		if (index == n && q.empty()) break;
	}

	cout << total / n << endl;
	return 0;
}
