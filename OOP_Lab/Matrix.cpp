#include <iostream>

using namespace std;
#define size 3
class Matrix
{
    int matrix[size][size];

public:
    void input();
    void print();

    int operator+(Matrix a);
    int operator-(Matrix a);
    int operator*(Matrix a);
    int operator!();
    int operator~();
    int operator++();
};

void Matrix::input()
{
    cout << "Enter the 3x3 matrix :\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

void Matrix::print()
{
    for (int i = 0; i < size; i++)
    {
        cout << " ";
        for (int j = 0; j < size; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }
}

int Matrix::operator+(Matrix a)
{
    int temp[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            temp[i][j] = matrix[i][j] + a.matrix[i][j];
        }
    }
    cout << "\n\n\tM + N\n\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << " " << temp[i][j];
        }
        cout << endl;
    }
    return 0;
}

int Matrix::operator-(Matrix a)
{
    int temp[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            temp[i][j] = matrix[i][j] - a.matrix[i][j];
        }
    }
    cout << "\n\tM - N\n\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << " " << temp[i][j];
        }
        cout << endl;
    }
    return 0;
}

int Matrix::operator*(Matrix a)
{
    int temp[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            temp[i][j] = 0;
            for (int k = 0; k < size; k++)
            {
                temp[i][j] += matrix[i][k] * a.matrix[k][j];
            }
        }
    }
    cout << "\n\tM * N\n\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << " " << temp[i][j];
        }
        cout << endl;
    }
    return 0;
}

int Matrix::operator!()
{
    int temp[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            temp[j][i] = matrix[i][j];
        }
    }
    cout << "\n\tTranspose\n\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << " " << temp[i][j];
        }
        cout << "\n";
    }
    return 0;
}

int Matrix::operator~()
{
    float determinant = 0;
    for (int i = 0; i < 3; i++)
    {
        determinant = determinant + (matrix[0][i] * (matrix[1][(i + 1) % 3] * matrix[2][(i + 2) % 3] - matrix[1][(i + 2) % 3] * matrix[2][(i + 1) % 3]));
    }
    cout << "\n\nDeterminant is: " << determinant;
    cout << "\n\nInverse of matrix is: \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ((matrix[(j + 1) % 3][(i + 1) % 3] * matrix[(j + 2) % 3][(i + 2) % 3]) - (matrix[(j + 1) % 3][(i + 2) % 3] * matrix[(j + 2) % 3][(i + 1) % 3])) / determinant << "\t";
        }
        cout << "\n";
    }
    return 0;
}

int Matrix::operator++()
{
    float determinant = 0;
    for (int i = 0; i < 3; i++)
    {
        determinant = determinant + (matrix[0][i] * (matrix[1][(i + 1) % 3] * matrix[2][(i + 2) % 3] - matrix[1][(i + 2) % 3] * matrix[2][(i + 1) % 3]));
    }
    if (determinant)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    Matrix M, N;
    int y;
    M.input();
    N.input();
    cout << "\nFirst Matrix is: \n\n";
    M.print();
    cout << "\nSecond Matrix is: \n\n";
    N.print();
    M + N;
    M - N;
    M *N;
    !M;
    ~M;
    y = ++M;
    if (y == 1)
        cout << "Rank=2" << endl;
    if (y == 0)
        cout << "Rank=0" << endl;
    return 0;
}