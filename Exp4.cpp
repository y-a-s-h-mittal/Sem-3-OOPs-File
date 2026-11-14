#include <iostream>
using namespace std;
class Matrix
{
    int a[10][10];
    int rows, cols;

public:
    void input()
    {
        cout << "Enter rows and columns: ";
        cin >> rows >> cols;
        cout << "Enter elements:\n";
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                cin >> a[i][j];
    }


    void display()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
                cout << a[i][j] << "\t";
            cout << endl;
        }
    }


    void add(Matrix b, Matrix &c)
    {
        c.rows = rows;
        c.cols = cols;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                c.a[i][j] = a[i][j] + b.a[i][j];
    }


    void subtract(Matrix b, Matrix &c)
    {
        c.rows = rows;
        c.cols = cols;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                c.a[i][j] = a[i][j] - b.a[i][j];
    }


    void multiply(Matrix b, Matrix &c)
    {
        c.rows = rows;
        c.cols = b.cols;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < b.cols; j++)
            {
                c.a[i][j] = 0;
                for (int k = 0; k < cols; k++)
                    c.a[i][j] += a[i][k] * b.a[k][j];
            }
        }
    }


    void transpose(Matrix &t)
    {
        t.rows = cols;
        t.cols = rows;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                t.a[j][i] = a[i][j];
    }

    
    bool isSquare()
    {
        return rows == cols;
    }
    int getRows()
    {
        return rows;
    }
    int getCols()
    {
        return cols;
    }


};
int main()
{
    Matrix A, B, C, T;
    cout << "Enter Matrix A:\n";
    A.input();
    cout << "\nEnter Matrix B:\n";
    B.input();
    cout << "\nMatrix A:\n";
    A.display();
    cout << "\nMatrix B:\n";
    B.display();

    if (A.getRows() == B.getRows() &&
        A.getCols() == B.getCols())
    {
        A.add(B, C);
        cout << "\nAddition of A and B:\n";
        C.display();
        A.subtract(B, C);
        cout << "\nSubtraction of A and B:\n";
        C.display();
    }
    else
    {
        cout << "\nAddition and subtraction not possible.\n";
    }

    if (A.getCols() == B.getRows())
    {
        A.multiply(B, C);
        cout << "\nMultiplication of A and B:\n";
        C.display();
    }
    else
    {
        cout << "\nMultiplication not possible.\n";
    }

    A.transpose(T);
    cout << "\nTranspose of Matrix A:\n";
    T.display();

    if (A.isSquare())
        cout << "\nMatrix A is a square matrix.";
    else
        cout << "\nMatrix A is not a square matrix.";
    return 0;
}