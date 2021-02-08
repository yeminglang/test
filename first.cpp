#include <iostream>
using namespace std;
class CharShape
{
public:
   	CharShape(char ch)
   	{
     _ch=ch;
   	}    //带参数的构造函数声明 —— 重载
    virtual void Show() = 0;
protected:
    char _ch;       //组成图形的字符
};

class Triangle: public CharShape
{
public:
    Triangle(char ch, int rows):CharShape(ch),_rows(rows){}	//带参数的构造函数声明 —— 重载
    void Show();

private:
    int _rows;

};

class Rectangle: public CharShape
{
public:
    Rectangle(char ch,int rows,int cols):CharShape(ch),_rows(rows), _cols(cols){}	//带参数的构造函数声明 —— 重载
    void Show();
private:
    int _rows, _cols;        //行数和列数
};

//构造函数初始化

void Triangle::Show()       //输出字符组成的三角形
{
    for (int i = 1; i <= _rows; i++)
    {
        for (int j = 1; j <= 2*i-1; j++)
        cout << _ch;
        cout << endl;
    }
}

void Rectangle::Show()      //输出字符组成的矩形
{
    for (int i = 1; i <=_rows ; i++)
    {
        for (int j = 1; j <=_cols; j++)
        {
        cout << _ch;

        }
        cout << endl;
    }
}

/*void fun()
{
    cs.Show();
}*/
int main()
{
    char ch1;//输出三角形
    int rows1;
    cout << "Please enter a character: ";
    cin>>ch1;//输入一个字符
    cout << "Please enter the number of rows: ";
    cin>>rows1;

    char ch2;//输出三角形
    int rows2;//输出矩形
    int cols2;
    cout << "Please enter a character: ";
    cin>>ch2;
    cout << "Please enter the number of rows: ";
    cin>>rows2;
    cout << "Please enter the number of cols: ";
    cin>>cols2;
    CharShape *a = new Triangle(ch1,rows1);
    a->Show() ;

    CharShape *b = new Rectangle(ch2,rows2,cols2);
    b->Show() ;
    return 0;

}
