#include <iostream>
using namespace std;

const int N = 50;

void print(int A[][N], int n , int m)
{
    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < m; ++j)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

bool equal(int A[][N], int n1, int m1, int B[][N], int n2, int m2)
{
    if(n1 != n2 || m1 != m2)
    {
        return false;
    }

    for(int i = 0 ; i < n1 ; ++i)
    {
        for(int j = 0 ; j < m1 ; ++j)
        {
            if(A[i][j] != B[i][j])
            {
                return false;
            }
        }
    }

    return true;
}

void sum(int A[][N], int B[][N], int C[][N], int n, int m)
{
    for(int i = 0; i <n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void transpose(int A[][N], int T[][N], int n, int m)
{
    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < m ; ++j)
        {
            T[i][j] = A[i][j];
        }
    }
}

int main()
{
    int A[][N] = {};

    int n1, m1;
    cout << "n1 : ";
    cin >> n1;
    cout<< "m1 : ";
    cin >> m1;

    for(int i = 0 ; i < n1 ; ++i)
    {
        for(int j = 0 ; j < m1 ; ++j)
        {
            cin >> A[i][j];
        }
    }
    cout << "Matrix : " << endl;
    print(A, n1, m1);
}
