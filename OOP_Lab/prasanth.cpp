//Function overloading and operator overloading to perform the given operations:

#include <iostream>
using namespace std;

class Matrix //Starting of the class Matrix
{
    int matrix[10][10]; //3*3 matrix
public:
    void accept();
    void display();

    //Functions for operator overloading
    int operator+(Matrix x);
    int operator-(Matrix y);
    int operator*(Matrix z);
    int operator!();
    int operator~();
    int operator++();
}; //End of class Matrix

void Matrix::accept() //Start of the function accept() to input the 3*3 matrix
{
    cout << "Enter the 3*3 Matrix: \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }
} //End of the function accept()

void Matrix::display() //Start of the function display()
{
    for (int i = 0; i < 3; i++)
    {
        cout << " ";
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }
} //End of the function display()

int Matrix::operator+(Matrix x) //Addition using function overloading and operator overloading
{
    int mat[3][3];
    int i;
    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat[i][j] = matrix[i][j] + x.matrix[i][j];
        }
    }
    cout << "\nAddition of matrix is:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << " ";
        for (int j = 0; j < 3; j++)
        {
            cout << mat[i][j] << "\t";
        }
        cout << "\n";
    }
    return 0;
}

int Matrix::operator-(Matrix y) //Subtraction using function overloading and operator overloading
{
    int mat[3][3];
    int i;
    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat[i][j] = matrix[i][j] - y.matrix[i][j];
        }
    }
    cout << "\nSubtraction of Matrix is:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << " ";
        for (int j = 0; j < 3; j++)
        {
            cout << mat[i][j] << "\t";
        }
        cout << "\n";
    }
    return 0;
}

int Matrix::operator*(Matrix z)
{
    int mat[3][3];
    int i;
    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                mat[i][j] += matrix[i][k] * z.matrix[k][j];
            }
        }
    }
    cout << "\nMultiplication of Matrix is: \n\n"; //Multiplication using function overloading and operator overloading
    for (int i = 0; i < 3; i++)
    {
        cout << " ";
        for (int j = 0; j < 3; j++)
        {
            cout << mat[i][j] << "\t";
        }
        cout << "\n";
    }
    return 0;
}

int Matrix::operator!() //Transposing using function overloading and operator overloading
{
    int mat[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat[j][i] = matrix[i][j];
        }
    }
    cout << "Transpose of Matrix is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat[i][j] << "\t";
        }
        cout << "\n";
    }
    return 0;
}

int Matrix::operator~() //Inversion using function overloading and operator overloading
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

int main() //Start of the main function
{
    Matrix M, N; //Input of two matrices M,N of 3*3 Matrix
    int y;
    M.accept(); //Calling of function accept()
    N.accept(); //Calling of function accept()
    cout << "\nFirst Matrix is: \n\n";
    M.display(); //Calling of function display()
    cout << "\nSecond Matrix is: \n\n";
    N.display(); //Calling of the function display()

    //Implimentation of operators
    M + N;
    M - N;
    M *N;
    !M;
    ~M;
    y = ++M;
    if (y == 1)
        cout << "Rank=2" << endl; //For rank of M
    if (y == 0)
        cout << "Rank=0" << endl;
    return 0;
} //End of the main function