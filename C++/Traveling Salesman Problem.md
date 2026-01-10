```c
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
    const int n = 25;
    vector<vector<int>> d(n, vector<int>(n));
    ifstream fin("25City_forTSP.csv");
    if (!fin.is_open()) 
    {
        cerr << "error\n";
        return 1;
    }

    string line;
    for (int i = 0; i < n; i++) 
    {
        getline(fin, line);
        stringstream ss(line);
        string val;
        for (int j = 0; j < n; j++) 
        {
            getline(ss, val, ',');
            d[i][j] = stoi(val);
        }
    }
    fin.close();

    cout << "min=";
    bool a = true;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (i != j) 
            {
                if (!a)
                {
                    cout << "+";
                }
                cout << "x" << i + 1 << "_" << j + 1 << "*d" << i + 1 << "_" << j + 1;
                a = false;
            }
        }
    }
    cout << ";\n\n";

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j) 
            {
                cout << "@bin(x" << i + 1 << "_" << j + 1 << ");\n";
            }
        }
    }
    cout << "\n";

    for (int i = 0; i < n; i++) 
    {
        cout << "@gin(u" << i + 1 << ");\n";
    }
    cout << "\n";

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (i != j) 
            {
                cout << "d" << i + 1 << "_" << j + 1 << "=" << d[i][j] << ";\n";
            }
        }
    }
    cout << "\n";

    for (int i = 0; i < n; i++) 
    {
        cout << "u" << i + 1 << ">=1;\n";
        cout << "u" << i + 1 << "<=" << n << ";\n";
    }
    cout << "\n";

    for (int i = 0; i < n; i++) 
    {
        bool first2 = true;
        for (int j = 0; j < n; j++) 
        {
            if (i != j) 
            {
                if (!first2)
                {
                    cout << "+";
                }
                cout << "x" << i + 1 << "_" << j + 1;
                first2 = false;
            }
        }
        cout << "=1;\n";
    }
    cout << "\n";

    for (int j = 0; j < n; j++) 
    {
        bool b = true;
        for (int i = 0; i < n; i++) 
        {
            if (i != j) 
            {
                if (!b)
                {
                    cout << "+";
                }
                cout << "x" << i + 1 << "_" << j + 1;
                b = false;
            }
        }
        cout << "=1;\n";
    }
    cout << "\n";
    cout << "u1=1;\n";
    for (int i = 1; i < n; i++) 
    {
        for (int j = 1; j < n; j++) 
        {
            if (i != j) 
            {
                cout << "u" << i + 1 << "-u" << j + 1
                    << "+" << n << "*x" << i + 1 << "_" << j + 1 << "<=" << n - 1 << ";\n";
            }
        }
    }
    return 0;
}
```
