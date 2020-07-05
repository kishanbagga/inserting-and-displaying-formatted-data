#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    string name;
    float price,quantity;
    char fname[]="price_list.txt";
    ofstream ofile(fname);
    for(int i=3;i>0;i--)
    {
        cout<<"name: ";
        cin>>name;
        cout<<"price: ";
        cin>>price;
        cout<<"quantity: ";
        cin>>quantity;
        ofile<<name<<endl
             <<price<<endl
             <<quantity<<endl;

    }
    ofile.close();

    ifstream ifile(fname);

    for(int i=3;i>0;i--)
    {
        ifile>>name>>price>>quantity;

        cout<<setw(15)<<left<<name
             <<setw(8)<<right<<price
             <<setw(8)<<quantity<<endl;
    }

    ifile.close();
    return 0;
}
