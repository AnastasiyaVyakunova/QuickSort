#include<cstdio>
#include<vector>

using namespace std;
//template<typename T>

vector<int> quickSort(vector<int> a)
{
	vector<int>l;
	vector<int>h;
	int n = a.size();
	

			for (int i = 0; i < n; i++)
			{
				int max = a[0];
				if (!a.empty())
				{
					if (max > a[i]) l.push_back(a[i]);
					else h.push_back(a[i]);
				}
				else  return a;
			}
			if ((l.size() > 1) && (h.size() > 1))
			{
				l = quickSort(l);
				h = quickSort(h);
			}
			if ((l.size() == 0) && (h.size() > 1)) h = quickSort(h);
			if ((l.size() > 1) && (h.size() == 0)) l = quickSort(l);
			l.insert(l.end(), h.begin(), h.end());
			return l;
		}


int main()
{
	vector<int> arr;
	vector<int> arr1;

	int n;
	printf("Enter n: \n");
	scanf_s("%d", &n);


	arr.resize(n);

	printf("Enter elements: \n");
	for (int i = 0; i < n; i++)
	{		
		scanf_s("%d", &arr[i]);
 	}

	arr1 = quickSort(arr);
	for (int i = 0; i < n; i++)
	{
		printf("%d", arr1[i]);
	}


	system("pause");
	return 0;
}
