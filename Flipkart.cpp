#include<iostream>
#include<Fstream>
using namespace std;
class flipkart{
  
	long int a;
    string fname;
	string pass;
	string email;
	int e;
	string name;
	string name1,add,city;
	string company,company1,company2,company3;
	int otp,pin,pin1;
	int choice1;
	
		public:
		void getdata(void);
		void getdata1(void);
		void bill(void);
		void disp();
		void cart();
};
void flipkart::getdata()
{
	cout<<"                                                             Flipkart                                           ";
	cout<"\n";
	cout<<" \n                         ***********************************************************************             \n";
	cout<<"\n";
	cout<<"Your Shopping is ready to go ";
	cout<<"\n";
	cout<<"Before Shopping You Entered Account ";
	cout<<"\n";
	cout<<"You entered the account by Email or mobile number ";
	cout<<"\n";
	cout<<"\n";
	cout<<"Please Choose any one you login the account ";
	cout<<"\n";
	cout<<"1. E-mail ";
	cout<<"\n";
	cout<<"2. Mobile Number";
	cout<<"\n Enter the Choice : ";
	cin>>e;
	switch(e)
	{
		case 1:
			{
				cout<<"\n Enter the E-mail ";
				cin>>email;
				cout<<"\nEnter the password is numerically not alphabets are used out of (11 digit) : ";
				cin>>pass;
				cout<<"\n";				
				cout<<" E-Mail : "<<email;
				cout<<"\n";
				cout<<" Password : "<<pass;
				cout<<"\n";
				cout<<"Thanku For Sumbitting information you are ready to Shopping on Flipkart ";
				break;
			}
		case 2:
		{
			cout<<"\nEnter the Mobile number (is 10 digit) : ";
			cin>>a;
			cout<<"\n";
			cout<<"Enter the OTP (is 5 digit) : ";
			cin>>otp;
			cout<<"\n";
			cout<<"Thanku For Sumbitting information you are ready to Shopping on Flipkart ";
			break;
		}	
	
	}
}
void flipkart::getdata1()
{
	 
	  cout<<"\n\nPlease Select Any one category in stock are soo may items are avalaible";
	  cout<<"\n";
      cout<<"1.Mobile and laptop";
      cout<<"\n";
      cout<<"2.Gaming controller";
      cout<<"\n";
      cout<<"3.Clothes";
      cout<<"\n";
      cout<<"4.Food stuff";
      cout<<"\n";
      cout<<"5.Books and pen, pencil ";
      cout<<"\n";
      cout<<"\n\nEnter the Choice : ";
      cin>>choice1;
      switch(choice1)
      {
      	case  1:
      		{
      		cout<<"Please Search the mobile company & laptop comapny also ";
      		cout<<"\n";
      		cout<<"Like Xaomi,Oppo,Vivo etc & Hp , dell , asus , acer etc\n";
      		cout<<"\nEnter the Model number of Mobile & laptop also : ";
      		cin.ignore();
      		getline(cin,name);
      		cout<<"\n";
      		cout<<"Your Item is packed And Deliver To The Address : "<<name;
      		break;
			}
		case 2:
			{
				cout<<"Which Type of Mouse pad and gaming keyboard do you choose : \n";
			    cout<<"Enter the Name of company ";
			    cin.ignore();
			    getline(cin,company);
			    cout<<"\n";
			    cout<<"Your Item is packed And Deliver To The Address : "<<company;
			    break;
			}
		case 3:
		{
			cout<<"Which Type of clothes do you choose "<<std::endl;
			cout<<"\n";
			cout<<"Enter the name of Company : ";
			cin.ignore();
		    getline(cin,company1);
			cout<<"\n";
		    cout<<"Your Item is packed And Deliver To The Address : "<<company1;
			break;
		}
		case 4: 
		{
			cout<<"Which Type of Food do you like \n";
			cout<<"Please Select The company You choose : ";
			cin.ignore();
			getline(cin,company2);
			cout<<"\n";
			cout<<"Your Item is packed And Deliver To The Address : "<<company2;
			break;
		}
		case 5:
		{
			cout<<"Which Type of register you choose ";
			cout<<"\n";
			cout<<"Like size A4,A3,.....etc";
			cout<<"\n";
			cout<<"Enter the Size of The Company : ";
			cin.ignore();
			getline(cin,company3);
			cout<<"\n";
			cout<<"Your Item is packed And Deliver To The Address : "<<company3;
			break;
		}	
	  }
	  
}
void flipkart::cart()
{
	int j;
	long long int g;
	long long int b;
	cout<<"\n";
	cout<<"Please Enter the Choice How do You Payment the money : ";
	cout<<"\n";
	cout<<"1. Cash On Delivery ";
	cout<<"\n";
	cout<<"2. Debit Card ";
	cout<<"\n";
	cout<<"3. Credit Card ";
	cout<<"\n";
	cout<<"4. Netbanking ";
	cout<<"\n";
	cout<<"             ALL Card are applicable           ";
	cout<<"\n";
	cout<<"Visa , mastarcard , Ru-pay , etc all other card are applicable ";
	cout<<"\n";
	cout<<"________________________________________________________________";
	cout<<"\n";
	cout<<" Enter The Choice : ";
	cin>>j;
	switch(j)
	{
		case 1:
			{
				cout<<" Thanku For Cash On delivery : ";
				break;
			}
		case 2:
		{
			cout<<" Enter the card Number ( out of 10 digit ) : ";
			cin>>b;
			cout<<"\n";
			cout<<"Enter the Pin : ";
			cin>>pin1;
			cout<<" Thanku For Online payment ";
			cout<<"\n";
			cout<<"Your Card Number is "<<b;
	        break;		
	}
		case 3:
		{
			cout<<" Enter the card Number ( out of 10 digit ) : ";
			cin>>b;
			cout<<"\n";
			cout<<"Enter the Pin : ";
			cin>>pin1;
			cout<<" Thanku For Online payment ";
			cout<<"\n";
			cout<<"Your Card Number is "<<b;
			break;
		}	
		case 4:
		{
			cout<<" Enter the Account Number (out of 15 digit ) : ";
			cin>>g;
			cout<<"\n";
			cout<<"Enter the Pin : ";
			cin>>pin1;
			cout<<" Thanku For Online payment ";
			cout<<"\n";
			cout<<" Your Account number is "<<g;
			break;
		} 
	}
}
void flipkart::bill()
{
	cout<<"\n";
	cout<<"Enter Your Constumer name : ";
	cin>>fname;
    cout<<"\n\nPlease Enter the Information of Address ";
	cout<<"\n\n"; 	
	cout<<"Please Enter the pincode (Out of 6 digit) : ";
	cin>>pin;
	cout<<"\n";
	cout<<"Please enter the name of city : ";
	cin>>city;
	cout<<"\n";
	cout<<"Please Enter the Address of your Home ";
	cout<<"\n";
	cout<<"Enter the complete address Include(House No , Street Name , or locality Name ) : ";
	cin.ignore();
	getline(cin,add);
	cout<<"\n";
    cout<<"The Complete address is : "<<add;
}
void flipkart::disp()
{
	ofstream out;
	out.open("D:\\F-KART.xls");
	out<<"                     USER INPUT                             ";
	out<<"\n";
	out<<"Pin code ----> "<<pin<<"\n";
	out<<"Your Home Address ----> "<<add<<"\n";
	out<<"City -->"<<city<<"\n";
    out<<"Name of Constumer ----> "<<fname<<"\n";
	out<<"Name of a item ----> "<<name<<"\n";
	out<<"Email id of constumer ---> "<<email<<"\n";
	out<<"Your password ----> "<<pass<<"\n";
	out<<"Your Mobile Number is ---> "<<a<<"\n";
	out<<"-------------------------------------------------------------------------------------------------------------------------------------";
	out<<"\n";
	out.close();
	cout<<"\n";
    cout<<"----------------------------------------------------------------------------------------------------------------------";
    cout<<"\n";
    cout<<"Name of constumer ----> "<<fname;
    cout<<"\n";
    cout<<"Your Model Number name  "<<name;
    cout<<"\n";
    cout<<"Your Email ID "<<email;
    cout<<"\n";
    cout<<"Your Password "<<pass;
    cout<<"\n";
    cout<<"Your Contact number "<<a;
    cout<<"\n";
    cout<<"Pin Code --> "<<pin;
	cout<<"\n";
	cout<<"City -- "<<city;
	cout<<"\n";
	cout<<"Home Town Address is -- "<<add;
	cout<<"\n\n";
	cout<<"                            I HOPE YOU NICE DAY AND PLEASE AGAIN SHOPPING ON FLIPKART                              ";
	cout<<"\n\n";
	cout<"-----------------------------------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n";
	
	ifstream inf("F-KART\n");
	inf>>fname;
	inf>>name;
	inf>>pass;
	inf>>email;
	inf>>city;
	inf>>add;
	inf>>pin;
	inf>>a;
	inf.close();
}
int main()
{
	flipkart obj;
	obj.getdata();
	obj.getdata1();
	obj.cart();
	obj.bill();
	obj.disp();
	return 0;
}
