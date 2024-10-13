#include <iostream>
#include <algorithm>
#include <list>
#include <vector>

using namespace std;

typedef unsigned int uint32_t;

/*
template<class type>
void swaps(type &a,type &b)
{
    type temp = 0;
    temp = a;
    a = b;
    b = temp;
    return;
}
*/

template<class type>
void perm(type *lists,uint32_t k,uint32_t m)
{

    if(k > m)
    {
        cout << "error!" << endl;
        return;
    }

    if(k == m)
    {
        for(uint32_t i = 0;i < m;i++)
        {
            cout << lists[i] << ",";
        }
        cout << lists[m] << "." << endl;
    }
    else
    {
        for(uint32_t i = 0;i <= m;i++)
        {
            swap(lists[k],lists[i]);
            perm(lists,k+1,m);
            swap(lists[k],lists[i]);
        }
    }
}

int main()
{
    int x = 9;
    int y = 5;
//    list<int> ls = {0,1,9,2,8,3,7,4,6,5};
//    vector<int> ls = {0,1,9,2,8,3,7,4,6,5};
    int ls[] = {0,1,9,2,8,3,7,4,6,5};
    for(auto &v : ls)
    {
        cout << v << ",";
    }
    cout << endl;

    cout << "x = " << x << ":" << "y = " << y << endl;
//    swaps(x,y);
    swap(x,y);
    cout << "x = " << x << ":" << "y = " << y << endl;
    cout << "please input x in y elements Permutations" << endl;
    cin >> x >> y;
    perm(ls,x,y);
    cout << "Hello world!" << endl;
    return 0;
}
