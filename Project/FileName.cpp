#include <iostream>
using namespace std;
#include<iostream>
using namespace std;

class Point // �������� ������ ����!!!
{
private: // ���������� �������
    int x; // ���� �������
    int y; // ���� �������
    char s; // ���� �������

public: // ��������� �������
    void Print() // ����� ������ 
    {
        cout << s << "-> X: " << x << "\tY: " << y << endl;
    }
    void Init(char t, int _x, int _y) // ����� ������ 
    {
        s = t;
        x = _x;
        y = _y;
    }
};
int main() // �����
{
    Point a, b;
    //cout << sizeof(a) << endl; // 12

    a.Init('A', 10, -20);
    a.Print();

    b.Init('B', 5, 16);
    b.Print();
}