```c
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <io.h>
#include <cmath>
using namespace std;

int main()
{
    string inputfile;
    struct _finddata_t file;
    intptr_t handle = _findfirst("*.csv", &file);
    if (handle == -1) 
    {
        return 1;
    }
    inputfile = string(file.name);
    _findclose(handle);
    
    string baseName = inputfile.substr(0, inputfile.find_last_of('.'));
    if (baseName.size() >= 6 && baseName.substr(baseName.size() - 6) == "_input") 
    {
        baseName = baseName.substr(0, baseName.size() - 6);
    }
    string outputfile = baseName + "_output.txt";

    ifstream fin(inputfile);
    ofstream fout(outputfile);
    if (!fin || !fout) 
    {
        return 1;
    }

    
    vector<vector<double>> A;
    string line;
    while (getline(fin, line)) 
    {
        vector<double> row;
        stringstream ss(line);
        string all;
        while (getline(ss, all, ',')) 
        {
            row.push_back(stod(all));
        }
        A.push_back(row);
    }
    fin.close();

    int row = A.size();
    int column = A[0].size();
    int r = 0;

   
    for (int c = 0; c < column && r < row; c++) 
    {
        int pivot = r;
        for (int i = r + 1; i < row; i++)
            if (abs(A[i][c]) > abs(A[pivot][c]))
            {
                pivot = i;
            }
        if (abs(A[pivot][c]) < 1e-12)
        {
            continue;
        }
        if (pivot != r)
        {
            swap(A[r], A[pivot]);
        }

        double div = A[r][c];
        for (int j = 0; j < column; j++)
        {
            A[r][j] /= div;
        }
           
        for (int i = 0; i < row; i++) 
        {
            if (i != r) 
            {
                double f = A[i][c];
                for (int j = 0; j < column; j++)
                {
                    A[i][j] -= f * A[r][j];
                }   
            }
        }
        r++;
    }

    int rankA = 0;
    int rankAb = 0;
    int n = column - 1;

    for (int i = 0; i < row; i++)
    {
        bool nonzeroA = false;
        bool nonzeroAb = false;
        for (int j = 0; j < n; j++)
        {
            if (abs(A[i][j]) > 1e-12)
            {
                nonzeroA = true;
            }
        }
        for (int j = 0; j < column; j++)
        {
            if (abs(A[i][j]) > 1e-12)
            {
                nonzeroAb = true;
            }
        }
        if (nonzeroA)
        {
            rankA++;
        }
        if (nonzeroAb)
        {
            rankAb++;
        }
    }

    bool solution = true;
    for (int i = 0; i < row; i++) 
    {
        bool allzero = true;
        for (int j = 0; j < column - 1; j++) 
        {
            if (abs(A[i][j]) > 1e-12) 
            {
                allzero = false;
                break;
            }
        }
        if (allzero && abs(A[i][column - 1]) > 1e-12) 
        {
            solution = false;
            break;
        }
    }

    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < column; j++)
        {
            double val = A[i][j];
            if (abs(val) < 1e-12)
            {
                val = 0;
            }
            fout << static_cast<int>(round(val));
            if (j != column - 1)
            {
                fout << "\t";
            }
        }
        fout << "\n";
    }
                                                                                                              
    fout << "Rank(A)=" << rankA << "\n";
    fout << "Rank(Ab)=" << rankAb << "\n";
    if (solution)
    {
        fout << "Consistent";
    }
    else
    {
        fout << "Not consistent";
    }
    fout.close();
    return 0;
}
```
