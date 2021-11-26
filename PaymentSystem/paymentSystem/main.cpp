#include <iostream>
using namespace std;
int main()
{
    string FirstName, LastName, Position, password, username;
    float HA, TA, MA, NSSF, PAYEE, TotalAllowances;
    int GrossPay, Overtime, BasicPay, OvertimePay, NetPay;
    cout<<"Please enter username: ";
    cin>>username;
    for(int i=0; i<username.length(); i++){
        string user_name = "admin";
        if(username[i] == user_name[i]){
           cout<<"Please enter password: ";
           cin>>password;
           string pass_word = "password";
           for(int j=0; j<password.length(); j++){
            if(password[j] == pass_word[j]){
                cout<<"Please Enter your first name: ";
                cin>>FirstName;
                cout<<"Please Enter your Last name: ";
                cin>>LastName;
                cout<<"Rank (Manager, Technician or Others): ";
                cin>>Position;
                cout<<"Enter overtime worked(Hrs): ";
                cin>>Overtime;
                if (Overtime < 10){
                    OvertimePay = 0;
                }
                else{
                    OvertimePay = Overtime * 30000;
                }
                if (Position == "Manager"){
                    GrossPay = 800000 + OvertimePay;
                }
                else if (Position == "Technician")
                    GrossPay = 500000 + OvertimePay;
                else
                    GrossPay = 350000 + OvertimePay;
                HA = 0.08 * GrossPay;
                TA = 0.05 * GrossPay;
                MA = 0.06 * GrossPay;
                NSSF = 0.15 * GrossPay;
                if (GrossPay <= 200000)
                    PAYEE = 0;
                else if (GrossPay > 200000 && GrossPay <= 350000)
                    PAYEE = 0.1 * (GrossPay - 200000);
                else if (GrossPay > 350000 && GrossPay <= 500000)
                    PAYEE = 20000 + (0.2 * (GrossPay - 350000));
                else
                    PAYEE = 60500 + (0.3 * (GrossPay - 500000));
                NetPay = GrossPay - (NSSF + PAYEE);
                TotalAllowances = HA + TA + MA;
                cout<<"*******************************************"<<endl;
                cout<<"NAME: "<<FirstName + " " + LastName<<endl;
                cout<<"RANK: "<<Position<<endl;
                cout<<"OVER-TIME PAY(SHS): "<<OvertimePay<<endl;
                cout<<"GROSS PAY(SHS): "<<GrossPay<<endl;
                cout<<"HOUSING ALLOWANCE(SHS): "<<HA<<endl;
                cout<<"TRANSPORT ALLOWANCE(SHS): "<<TA<<endl;
                cout<<"MEDICAL ALLOWANCE(SHS): "<<MA<<endl;
                cout<<"TOTAL OVERTIME(SHS): "<<OvertimePay<<endl;
                cout<<"NSSF(SHS): "<<NSSF<<endl;
                cout<<"PAYEE(SHS): "<<PAYEE<<endl;
                cout<<"NET PAY(SHS): "<<NetPay<<endl;
                cout<<"*******************************************"<<endl;



    return 0;

}
