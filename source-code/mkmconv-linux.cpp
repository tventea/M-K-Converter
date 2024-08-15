#include <iostream>
int main(){
        using std::cout;
        using std::cin;

    double uzunluk;
    char birim;

    cout << "******MIL TO KM CONVERTER*****\n";

    while (true) {
    cout << "M=Mile\n";
    cout << "K=Kilometer\n";
    cout << "Which unit of length do you want to convert it to?: ";
    cin >> birim;

    if (birim == 'K' || birim == 'k')
    {
        cout << "Enter the length as a mile: ";
        cin >> uzunluk;
        double km = uzunluk * 1.60934;
        cout << "The lenght is " << km << " kilometer.\n"; 
        break;
    }
    else if (birim == 'M' || birim == 'm')
    {
        cout << "Enter the length as a kilometer: \n";
        cin >> uzunluk;
        double mil = uzunluk / 1.60934;
        cout << "The length is " << mil << " mile.\n";
        break;
    }
    else{
        cout << "Please enter either K or M units.\n";
        
        
    }
    cout << "******************************\n";
    }
    




    cout << "*****************************\n";

  return 0;
}
