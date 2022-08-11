#include <iostream>
#include <ctime>
#include <Eigen/Core>
#include <Eigen/Dense>

//#define MATRIX_SIZE 50;
const int MATRIX_SIZE = 50;

using namespace std;
using namespace Eigen;

int main(int argc, char **argv)
{
    Matrix<float, 2, 3> matrix_23;

    Vector3d v_3d;
    Matrix<float, 3, 1> vd_3d;

    Matrix3d matrix_33 = Matrix3d::Zero();//为什么可以这样初始化？Zero成员不需要通过对象就能使用？ 静态成员函数！

    Matrix<double, Dynamic, Dynamic> matrix_dynamic;
    MatrixXd matrix_x;

    matrix_23 << 1, 2, 3, 4, 5, 6;
    //cout << matrix_23 << endl;

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //         cout << matrix_23(i, j);
    //     cout << endl;
    // }

    v_3d << 3, 2, 1;
    vd_3d << 4, 5, 6;

    Matrix<double, 2, 1> result = matrix_23.cast<double>() * v_3d;
    Matrix<float, 2, 1> result2 = matrix_23 * vd_3d;
    // cout << result2 << endl << result2.transpose();


    matrix_33 = Matrix3d::Random();
    cout << matrix_33 << endl;
    cout << matrix_33.sum() << endl;

    cout << matrix_33.trace() << endl;//矩阵的迹
    cout << matrix_33.inverse() << endl << matrix_33.reverse() * matrix_33 << endl;
    cout << matrix_33.determinant();

    SelfAdjointEigenSolver<Matrix3d> eigen_sover(matrix_33.transpose() * matrix_33);
    cout << eigen_sover.eigenvalues() << endl;
    cout << eigen_sover.eigenvectors() << endl;

    Matrix<double, MATRIX_SIZE, MATRIX_SIZE> matrix_NN = MatrixXd::Random(MATRIX_SIZE, MATRIX_SIZE);



}
