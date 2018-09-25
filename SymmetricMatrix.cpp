/* **************************************************************************

    * File Name : SymmetricMatrix.cpp

    * Creation Date : 2018-09-13 14:33:29

    * Last Modified : 2018-09-25 12:52:04

    * Created By : Samuel Chi <Yu-Ning Chi>

************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
    int numOfInput; //資料組數
    int numOfDimension; //維度
    int inputAry[10000]; //儲存輸入資料
    int isSymmetric = 0; //判斷是否對稱
    char inputN, inputEqual; //N、等於

    cin >> numOfInput; //輸入組數
    for(int i = 0; i < numOfInput; i++)
    {
        cin >> inputN >> inputEqual >> numOfDimension;
        //輸入N、輸入等於、輸入維度
        numOfDimension *= numOfDimension; //將數字變成2維
        int index = 0; //初始化陣列要使用的引數
        while(numOfDimension > 0)
        {
            cin >> inputAry[index]; //輸入資料
            numOfDimension--;
            index++;
        }
        int center = (index - 1) / 2; //判斷中間值
        if(index % 2 == 0) //如果個數是偶數，中間值將會有兩個數，則取第二個數
            center++;
        for(int j = 0; j < center; j++)
            if(inputAry[j] < 0 || inputAry[index - 1] < 0 ||
                inputAry[j] != inputAry[index - 1])
            {
                isSymmetric = 0;
                break;
            }
            else
            {
                isSymmetric = 1;
                index--;
            }
    	cout << "Test #" << i + 1 << ": ";
        if(isSymmetric == 1)
            cout << "Symmetric." << endl;
        else
            cout << "Non-symmetric." << endl;
    }
    return 0;
}
