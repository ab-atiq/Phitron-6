#include <bits/stdc++.h>
using namespace std;

class Maxheap
{
public:
    vector<int> nodes;

    void up_heapfiy(int idx)
    {
        while (idx > 0 && nodes[idx] > nodes[(idx - 1) / 2])
        {
            swap(nodes[idx], nodes[(idx - 1) / 2]);
            idx = (idx - 1) / 2;
        }
    }

    void down_heapfiy(int idx)
    {
        while (1)
        {
            int largeIdx = idx;

            int l = 2 * idx + 1;
            int r = 2 * idx + 2;

            if (l < nodes.size() && nodes[largeIdx] < nodes[l])
                largeIdx = l;
            if (r < nodes.size() && nodes[largeIdx] < nodes[r])
                largeIdx = r;

            if (largeIdx == idx)
            {
                break;
            }

            swap(nodes[idx], nodes[largeIdx]);

            idx = largeIdx;
        }
    }

    void push(int val)
    {
        nodes.push_back(val);
        up_heapfiy((nodes.size() - 1));
    }

    void pop(int idx)
    {
        swap(nodes[idx], nodes[(nodes.size() - 1)]);
        nodes.pop_back();

        down_heapfiy(idx);
    }

    void print()
    {
        for (int i : nodes)
        {
            cout << i << " ";
        }
        cout << endl;
    }
};

int main()
{
    Maxheap heap;
    heap.push(10);
    heap.push(20);
    heap.push(30);
    heap.push(40);
    heap.push(50);

    heap.pop(0);

    heap.print();

    return 0;
}