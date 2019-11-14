#include <iostream>

using namespace std;

void cuadrado(int width, int height)
{
    if(width % 2 == 0)
        width += 1;
    if(height % 2 ==  0)
        height +=1;

    for(int row = 0; row < height; row++)
    {
        for(int col = 0; col < width; col++)
        {
            if((0 < row and row < height - 1) and (0 < col and col < width -1))
            {
                cout << " ";
            }
            else if(col % 2 == 0)
                cout << "+";
            else
                cout << "-";
        }
        cout << endl;
    }
}

int main(void)
{
    cuadrado(5, 5);
    return 0;
}