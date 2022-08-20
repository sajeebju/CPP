//Find LCM using HCF
//The LCM of two numbers is given by:
//LCM = (n1 * n2) / HCF


#include <iostream>
using namespace std;

int main()
{
    int n1, n2, hcf, temp, lcm;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    hcf = n1;
    temp = n2;
    
    while(hcf != temp)
    {
        if(hcf > temp)
            hcf -= temp;
        else
            temp -= hcf;
    }

    lcm = (n1 * n2) / hcf;

    cout << "LCM = " << lcm;
    return 0;
}
