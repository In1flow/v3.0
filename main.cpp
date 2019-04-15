#include <cstdlib>  //for using srand,rand to create random numbers
#include <iostream>
#include<ctime>     // For time()
#include<stdlib.h> //for clearing screen and pause(wait for key press to perform next task)
#include<windows.h> //for colour
#include<cmath>


using namespace std;

class idpassword //asif
{
private:
    string name;
    int age;
    string address;
    int cardNumber[10],i1;
    string balance;

    string username;
    string password;
    string confirmationPassword;

    string loginUsername;
    string loginPassword;
public:
    void createanaccount()
    {
        cout<<"\t\t\t\t -------------------"<<endl;
        cout<<"\t\t\t\t  Create an account "<<endl;
        cout<<"\t\t\t\t -------------------"<<endl;
        cout<<endl;

        getline(cin,name);
        cout<<"Please enter your full name:: "<<endl;
        getline(cin,name);
        cout<<"Age::"<<endl;
        cin>>age;
        if(age>=18)
        {
            cout<<""<<endl;
        }
        else
        {
            cout<<"You are not old enough to use this system"<<endl;
            for(;;)
            {
                cout<<"If your input was a mistake,please reinsert the correct input"<<endl;
                cout<<"Else quit the program"<<endl;
                cout<<"Age::"<<endl;
                cin>>age;
                if(age>=18)
                {
                    break;
                }
                else
                {
                    cout<<"You are not old enough to use this system"<<endl;
                }
            }
        }



      //  cout<<endl;


        cout<<"Address::"<<endl;   //problem !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
        cin>>address;
        cout<<endl;

        cout<<"Enter first 4 credit card numbers::"<<endl;
        cin>>cardNumber[0];
        for(i1=1;i1<4;i1++)
        {
            cout<<"Enter the next 4 digits"<<endl;
            cin>>cardNumber[i1];
        }
        cout<<endl;

        cout<<"Choose a username::"<<endl;
        cin>> username;
        cout<<"Enter your password::"<<endl;
        cin>> password;
        cout<<"Re-enter your password::"<<endl;
        cin>> confirmationPassword;

        if(password==confirmationPassword)
        {
            cout<<"Congratulations your account has been created"<<endl;
        }
        else
        {
            for(;;)
            {
                cout<<"Password did not match"<<endl;
                cout<<endl;
                cout<<"Enter your password again::"<<endl;
                cin>> password;
                cout<<"Re-enter your password again::"<<endl;
                cin>>confirmationPassword;
                if(password==confirmationPassword)
                {
                    cout<<"Congratulations your account has been created"<<endl;
                    break;
                }
                else
                {

                }
            }
        }

        cout<<endl;

    }
    void login()
    {
        cout<<"\t\t\t\t\t\t -------------------"<<endl;
        cout<<"\t\t\t\t\t\t        Login"<<endl;
        cout<<"\t\t\t\t\t\t -------------------"<<endl;
        cout<<endl;

        getline(cin,loginUsername);
        cout<<"Username:"<<endl;
        getline(cin,loginUsername);
        cout<<"Password:"<<endl;
        getline(cin,loginPassword);
        if(username==loginUsername&&password==loginPassword)
        {
            cout<<"Access granted--/"<<endl;
        }
        else
        {
            cout<<"--ID or Password is incorrect--"<<endl;
            for(;;)
            {
                cout<<"\t\t\t\t\t\t -------------------"<<endl;
                cout<<"\t\t\t\t\t\t        Login"<<endl;
                cout<<"\t\t\t\t\t\t -------------------"<<endl;
                cout<<endl;

                cout<<"Username:"<<endl;
                getline(cin,loginUsername);
                cout<<"Password:"<<endl;
                getline(cin,loginPassword);
                if(username==loginUsername&&password==loginPassword)
                {
                    cout<<"Access granted--/"<<endl;
                    break;
                }
                else
                {
                    cout<<"--ID or Password is incorrect--"<<endl;
                }
            }
        }
    }
    void account()
    {
        cout<<"\t\t\t\t\t\t -------------------"<<endl;
        cout<<"\t\t\t\t\t\t        Account"<<endl;
        cout<<"\t\t\t\t\t\t -------------------"<<endl;
        cout<<endl;

        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Credit card number: "<<cardNumber<<endl;
    }
};


class market //sid
{
protected :
    double appleV,amazonV,alphabetV,microsoftV,facebookV;
    double appSno,amaSno,alpSno,micSno,facSno;

public :

    //market(){}
//    myaccount ttttt;
    void shareV()
    {

        cout<<"Value of shares in USD(Real time)"<<endl<<endl;
        srand(time(0));                             // seeding RNG here
        appleV = rand()% (1000 + 1 - 200) + 200;   //rand() % (max_number + 1 - minimum_number) + minimum_number ......Random number with a sequence is being generated here
        //    cout << "Seed = " << time(0) << endl;     time is being shown here
        cout<<"Value of apple = "<<appleV<<endl;
        appSno = rand()% (10000 + 1 - 0) + 0;
        cout<<"Number of available items = "<<appSno<<endl<<endl;


        amazonV = rand()% (1000 + 1 - 200) + 200;   //Next number in the sequence is being shown here
        //    cout << "Seed = " << time(0) << endl;
        cout<<"Value of amazon = "<<amazonV<<endl;
        amaSno = rand()% (10000 + 1 - 0) + 0;
        cout<<"Number of available items = "<<amaSno<<endl<<endl;

        alphabetV = rand()% (1000 + 1 - 200) + 200;
        //    cout << "Seed = " << time(0) << endl;
        cout<<"Value of alphabet = "<<alphabetV<<endl;
        alpSno = rand()% (10000 + 1 - 0) + 0;
        cout<<"Number of available items = "<<alpSno<<endl<<endl;



        microsoftV = rand()% (1000 + 1 - 200) + 200;
        //    cout << "Seed = " << time(0) << endl;
        cout<<"Value of microsoft = "<<microsoftV<<endl;
        micSno = rand()% (10000 + 1 - 0) + 0;
        cout<<"Number of available items = "<<micSno<<endl<<endl;

        facebookV = rand()% (1000 + 1 - 200) + 200;
        //    cout << "Seed = " << time(0) << endl;
        cout<<"Value of facebook = "<<facebookV<<endl;
        facSno = rand()% (10000 + 1 - 0) + 0;
        cout<<"Number of available items = "<<facSno<<endl<<endl;
    }
};

class myaccount : public market
{
    /*protected:
        double balance;
        double Mapp=5,Mama=12,Malp=0,Mmic=0,Mfac=1;
        double aaa=MM.appleV; */
public :

    double balance;
    double Mapp=5,Mama=12,Malp=0,Mmic=0,Mfac=1;
    double aaa=appleV;


    void Astat()
    {
        balance = 20000;
        cout<<"Balance(in USD) = "<<balance<<endl<<endl;
        cout<<"Purchased shares"<<endl;
        cout<<"Apple = "<<Mapp<<endl;
        appleV = rand()% (1000 + 1 - 200) + 200;
        cout<<"Total value of Apple shares = "<<Mapp*appleV<<endl;

    }
};


class features
{
private:
public :
    void calculator123()
    {
        double calone,caltwo,caluu,interest,principal1,rate,time123,rate_divi_NOTICPY,NOTICPY,NOTICPY_times_Time,powered1;
        double taka,usd,eur,gbp,aud,jpy;
        int PLO,PIo;
        cout<<"1 Addition"<<endl;
        cout<<"2 Multiplication"<<endl;
        cout<<"3 Division"<<endl;
        cout<<"4 Subtraction"<<endl;
        cout<<"5 Interest rate"<<endl;
        cout<<"6 Exchange rates"<<endl;
        cin>>PLO;
        switch(PLO)
        {
        case 1:
            cout<<"Enter first number"<<endl;
            cin>>calone;
            cout<<"Enter second number"<<endl;
            cin>>caltwo;
            caluu=calone+caltwo;
            cout<<"Answer = "<<caluu;
            break;

        case 2:
            cout<<"Enter first number"<<endl;
            cin>>calone;
            cout<<"Enter second number"<<endl;
            cin>>caltwo;
            caluu=calone*caltwo;
            cout<<"Answer = "<<caluu;
            break;

        case 3:
            cout<<"Enter first number"<<endl;
            cin>>calone;
            cout<<"Enter second number"<<endl;
            cin>>caltwo;
            caluu=calone/caltwo;
            cout<<"Answer = "<<caluu;
            break;

        case 4:
            cout<<"Enter first number"<<endl;
            cin>>calone;
            cout<<"Enter second number"<<endl;
            cin>>caltwo;
            caluu=calone-caltwo;
            cout<<"Answer = "<<caluu;
            break;

        case 5:
            cout<<"Simple : 1 or Compound : 2 ?"<<endl;
            cin>>PIo;
            switch(PIo)
            {
            case 1:
            {
                cout<<"Principal amount ?"<<endl;
                cin>>principal1;
                cout<<"Rate(%) "<<endl;
                cin>>rate;
                cout<<"Time(years)"<<endl;
                cin>>time123;
                interest=principal1*(rate/100)*time123;
                cout<<"Interest = "<<interest<<endl<<"Total = "<<principal1+interest<<endl;
            }
            break;
            case 2 :
            {
                cout<<"Principal amount ?"<<endl;
                cin>>principal1;
                cout<<"Rate(%) "<<endl;
                cin>>rate;
                cout<<"Time(years)"<<endl;
                cin>>time123;
                cout<<"Number of times interest is compounded per year"<<endl;
                cin>>NOTICPY;
                cout<<""<<endl;
                cout<<""<<endl;
                cout<<""<<endl;
                rate_divi_NOTICPY=1+((rate/100)/NOTICPY);
                NOTICPY_times_Time = NOTICPY*time123;
                powered1=pow(rate_divi_NOTICPY,NOTICPY_times_Time);
                interest=principal1*powered1;
                cout<<"Interest = "<<interest-principal1<<endl<<"Total = "<<interest<<endl;
//Total compounded interest = [P (1 + r/n)^(nt) ]- P

            }
            break;
            }
        case 6 :
            srand(time(0));
            double taka,usd,eur,gbp,aud,cad;
            usd = rand()% (100 + 1 - 91) + 91;
            cout<<"BDT to currency"<<endl;
            cout<<"United States Dollar "<<usd<<endl;

            eur = rand()% (110 + 1 - 95) + 95;
            cout<<"Euro "<<eur<<endl;

            gbp = rand()% (120 + 1 - 109) + 109;
            cout<<"Pound sterling "<<gbp<<endl;

            aud = rand()% (60 + 1 - 50) + 50;
            cout<<"Australian dollar "<<aud<<endl;

            cad = rand()% (69 + 1 - 59) + 59;
            cout<<"Canadian dollar "<<cad<<endl;

            break;
        }
    }
};

int main()
{
    system("Color 0A"); //creates colour
//    interface1 II;         //use later
//    II.progini();

    idpassword id;
    int qwe;

    features features1;

    market M;
    // M.shareV();
    myaccount ACC;
//    admin AAAdmin;  //use later
    int input,A;

    /*  cout<<"Wish to create account ?"<<endl;
      cout<<"0 yes"<<endl;
      cout<<"1 bypass this feature"<<endl;
      cin>>qwe;
      switch(qwe)
      {
      case 0 :
          id.createanaccount();
          goto yoyo;
          system ("CLS");
          break;
      case 1 :*/
yoyo:
    system ("CLS");
    cout<<"\t\t\t"<< "Welcome to the stock exchange market" <<endl<< endl;
    cout<<" \t\t\t "<<"Please choose one of the options"<<endl;
    cout<<" \t\t\t "<<"0 login"<<endl;
    cout<<" \t\t\t "<<"1 create account"<<endl;
    cout<<" \t\t\t "<<"2 Check market status"<<endl;
    cout<<" \t\t\t "<<"3 Check your share status"<<endl;
    cout<<" \t\t\t "<<"4 Buy shares"<<endl;
    cout<<" \t\t\t "<<"5 Sell shares"<<endl;
    cout<<" \t\t\t "<<"6 Calculator"<<endl;
    cout<<" \t\t\t "<<"7 Exit"<<endl;

    cin>>input;

    switch(input)
    {
    case 0:
        id.login();
        system("PAUSE");
        system("CLS");
        goto yoyo;
        break;
    case 1:
        id.createanaccount();
        system ("PAUSE");
        system ("CLS");
        goto yoyo;
        break;
    case 2:
        M.shareV();
        system ("PAUSE");
        system ("CLS");
        goto yoyo;
        break;
    case 3:
        ACC.Astat();
        system ("PAUSE");
        system ("CLS");
        goto yoyo;
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        features1.calculator123();
        break;
    case 7:
        return 0;
    case 12345:
//            AAAdmin.adminP();
    default :
        cout<<"Input error !!!"<<endl;
        system ("CLS");
        goto yoyo;

        break;
    }
    //break;


    return 0;
}


//}
