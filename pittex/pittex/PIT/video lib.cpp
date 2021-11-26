#include <iostream>
#include <string>
#include <ctime>
using namespace std;
int main()
{
string DATE_OF_RENT, RETURN_DATE, STORAGE_TYPE, PURCHASE_TYPE;
string CLIENT_NAME, CLIENT_ADDRESS;
int COST_RENTING, COST_SALE, TOTAL_RENTING, TOTAL_SALE, DISCOUNT, TOTAL_DISCOUNTS, PENALTY;
	time_t now = time(0);
	char* dt = ctime(&now);

    cout<<"\t\t\t\t\t*******PITTEX VIDEO LIBRARY*******"<<endl;
    cout<<"\t\t\t\t\t**********************************"<<endl;
    cout<<"\t\t\tENTER CLIENT NAME: ";
    cin>>CLIENT_NAME;
    cout<<"\t\t\tENTER CLIENT ADDRESS: ";
    cin>>CLIENT_ADDRESS;
    cout<<"\t\t\tDATE OF RENT: "<<dt;
    //cout<<"\t\t\tRETURN DATE: ";
    //cin>>RETURN_DATE;

int No_of_CDs, No_of_DVDs, No_of_tapes, Total_Rent, No_of_CDs1, No_of_DVDs1, No_of_tapes1, Total_sale, Total_Amount, DiscountCD, DiscountDVD, Discounttapes, TotalDiscount, CashReceived, Balance, Total;
    cout<<"\n\n\t\t\t*********RENTING********"<<endl;
    cout<<"\t\t\tNo of CDs: ";
    cin>>No_of_CDs;
    cout<<"\t\t\tNo of DVDs: ";
    cin>>No_of_DVDs;
    cout<<"\t\t\tNo of tapes: ";
    cin>>No_of_tapes;
    Total_Rent=(No_of_CDs*10000)+(No_of_DVDs*7000)+(No_of_tapes*3500);
    cout<<"\t\t\tTotal Rent:"<<Total_Rent;


    cout<<"\n\n*********SELLING********"<<endl;
    cout<<"\t\t\tNo of CDs: ";
    cin>>No_of_CDs1;
    cout<<"\t\t\tNo of DVDs: ";
    cin>>No_of_DVDs1;
    cout<<"\t\t\tNo of tapes: ";
    cin>>No_of_tapes1;
    Total_sale=(No_of_CDs1*15000)+(No_of_DVDs1*20000)+(No_of_tapes1*8000);
    cout<<"\t\t\tTotal Sale:"<<Total_sale<<endl;

    Total=(Total_Rent+Total_sale);
    cout<<"\t\t\tTotal: "<<Total<<endl;

    if (No_of_CDs1>15){
    	DiscountCD=0.05*(No_of_CDs1*15000);
	}
	else{
		if(No_of_CDs1>10){
			DiscountCD=0.08*(No_of_CDs1*15000);
		}
		else{
    	DiscountCD=0;
		}
	}




if (No_of_DVDs1>15){
    	DiscountDVD=0.05*(No_of_DVDs1*20000);
	}
	else{
		if(No_of_DVDs1>10){
			DiscountDVD=0.08*(No_of_DVDs1*20000);
		}
		 else{
    	DiscountDVD=0;
		}
	}

if (No_of_tapes1>15){
    	Discounttapes=0.05*(No_of_tapes1*8000);
	}
	else{
		if(No_of_tapes1>10){
			Discounttapes=0.08*(No_of_tapes1*8000);
		}
		else{
    	Discounttapes=0;
		}
	}



   TotalDiscount=(DiscountCD+DiscountDVD+Discounttapes);
   cout<<"\n\t\t\tTotal Discount: "<<TotalDiscount<<endl;
    int Days, Penaltyfee;
    cout<<"\t\t\tEnter no. of days for rent: ";
    cin>>Days;
if(Days>10){
    Penaltyfee=(No_of_CDs*(Days-10)*2000)+(No_of_DVDs*(Days-10)*2000)+(No_of_tapes*2000*(Days-10));
    cout<<"\t\t\tPenalty Fee: "<<Penaltyfee<<endl;
	}
	else{
	   	Penaltyfee=0;
	}




    Total_Amount=(Total_Rent+Total_sale+Penaltyfee)-TotalDiscount;
    cout<<"\t\t\tTotal Amount To Be Paid:"<<Total_Amount<<endl;
    cout<<"\t\t\tCash Received: ";
    cin>>CashReceived;
    Balance= CashReceived-Total_Amount;
    cout<<"\t\t\tBalance: "<<Balance<<endl;
    cout<<"\t\t\tThank you for buying from PITTEX VIDEO LIBRARY"<<endl;

	    return 0;
}

