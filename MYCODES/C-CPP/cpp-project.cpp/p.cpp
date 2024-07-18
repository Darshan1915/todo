#include <iostream>
#include <fstream>
using namespace std;

class Courses 
{
    
    string sbname;
    int sbid;
    float sbprice;
    float sbDiscount;
    char choice;
    int token =0;
    public:
    void Buy(int I);
    void AddCourse();
    void EditCourse();
    void RemoveCourse();
    void CoursesList();
};

//********************************************************************************************************************************
//FUNCTION TO ADD NEW COURSE / SUBJECT INTO THE DATABASE
void Courses::AddCourse()
{
    m:
    fstream data;
    string name;
    int siid;
    float price;
    float Discount;
    int token =0;

    cout << "\t\t\t\t+--------------------------------------+\n";
    cout << "\t\t\t\t|\t                               |\n";
    cout << "\t\t\t\t|\tADD NEW SUBJECT                |\n";
    cout << "\t\t\t\t|\tSUBJECT CODE:     "; cin >>sbid;
    cout << "\t\t\t\t|\t                               |\n";
    cout << "\t\t\t\t|\tSUBJECT NAME:     ";cin >> sbname;
    cout << "\t\t\t\t|\t                               |\n";
    cout << "\t\t\t\t|\tFEES OF SUBJECT: ";cin>>sbprice;
    cout << "\t\t\t\t|\t                               |\n";
    cout << "\t\t\t\t|\tDISCOUNT ON SUB.: ";cin >> sbDiscount;
    cout << "\t\t\t\t|\t                               |\n";
    cout << "\t\t\t\t+--------------------------------------+\n";
    data.open("Cources.txt", ios::in);

    if (!data)
    {
        data.open("Cources.txt", ios::app | ios::out);
        data << " " << sbid << " " << sbname << " " << sbprice << " " << sbDiscount << " "<< "\n";
        data.close();
    }
    else
    {
        data >> siid >> name >> price >> Discount;

        while (!data.eof())
        {
            if (siid == sbid)
            {
                token++;
            }
            data >> siid >> name >> price >> Discount;
        }
        data.close();

    
        if (token == 1)
        {
            cout<<"\t\tDuplicate entry";
            goto m;
        }
        else
        {
            data.open("Cources.txt", ios::app | ios::out);
            data << " " << sbid << " " << sbname << " " << sbprice << " " << sbDiscount << " " << "\n";
            data.close();
        }
    }        
    cout << "\n\n\n\t\t\t\tRECORD INSERTED !!!\n\n";
    l:
    cout << "\t\t\t\t+--------------------------------------+\n";
    cout << "\t\t\t\t|\t                               |\n";
    cout << "\t\t\t\t|\t1)ADD NEW SUBJECT              |\n";
    cout << "\t\t\t\t|\t                               |\n";
    cout << "\t\t\t\t|\t2)GO BACK                      |\n";
    cout << "\t\t\t\t|\t                               |\n";
    cout << "\t\t\t\t+--------------------------------------+\n";
    int chh;
    cout << "\n\n\n\t\t\t\tENTER  CHOICE:  ";
    cin>>chh;
    Home h;
    switch(chh)
    {
        case 1:
            goto m;
            break;
        case 2:
            h.AdminMenu();
            break;
        default :
            cout << "\n\n\n\t\t\t\tsINVALID CHOICE !!!!";
            goto l;
            }


}

class Home : public Courses
{
    public:
    int choice;
    void MainMenu();
    void AdminMenu(); 
    void Menu();  
};
//ACCOUNTS CLASS TO HANDLE ALL LOGIN LOGOUT FUNCTIONALITIES 
class Account : public  Home 
{       
    public:
    string Sname,Semail,Spassword,SubName;
    int Sid,SubId;
    void login();
    void adminlogin();
    void CrAccount();
    // void About();


    //***************************************************
        //ACCOUNT CLASS CONSTRUCTOR
    //***************************************************
    Account()
    {
        MainMenu();
        switch(choice)
        {
            case 1:
                adminlogin();
                break;
            case 2:
                Menu();
                switch(choice)
                {
                    case 1:
                        CrAccount();
                        break;
                    case 2:
                        login();
                        break;
                    case 3: 
                        // About();
                        break;
                    default:
                        cout << "\n\n\n\t\t\t\tINVALID CHOICE !!!! "; 
                }
                break;
            case 3:
                exit(0);
                break;
            default:
                cout << "\n\n\n\t\t\t\tPLEASE SELECT FROM GIVEN OPTIONS !!!! ";   
        }
    } 
};

//********************************************************
//  FUNCTION TO CREATE STUDENT ACCOUNT
void Account :: CrAccount()
{
    m:
    fstream data;
    string name,email,pass;
    int id;
    char choice;
    int token =0;
    string n;

    cout << "\t\t\t\t+--------------------------------------+\n";
    cout << "\t\t\t\t|\t                               |\n";
    cout << "\t\t\t\t|\tCREATE NEW ACCOUNT                |\n";
    cout << "\t\t\t\t|\t                               |\n";
    cout << "\t\t\t\t|\tId :     ";cin >> Sid;
    cout << "\t\t\t\t|\t                               |\n";
    cout << "\t\t\t\t|\tFIRST NAME :     ";cin>>Sname;
    cout << "\t\t\t\t|\t                               |\n";
    cout << "\t\t\t\t|\tEmail :     ";cin>>Semail;
    cout << "\t\t\t\t|\t                               |\n";
    cout << "\t\t\t\t|\tPassword : ";cin>>Spassword;
    cout << "\t\t\t\t|\t                               |\n";
    cout << "\t\t\t\t+--------------------------------------+\n";

    data.open("Accounts.txt", ios::in);
    if (!data)
    {
        data.open("Accounts.txt", ios::app | ios::out);
        data << " "<< Sid <<" " << Sname << " " << Semail << " " << Spassword << " "<< "\n";
        data.close();
    }
    else
    {
        data >> id >> name >> email >> pass;

        while (!data.eof())
        {
            if (id == Sid)
            {
                token++;
            }
            data >> id >> name >> email >> pass;
        }
        data.close();

    
        if (token == 1)
        {
            cout << "\n\n\n\t\t\t\tSTUDENT EXIST WITH THE SAME ID  !!!! "
                 << "\n\n\n\t\t\t\tTRY AGAIN  !!!! \n";
                 goto m;
        }
        else
        {
            data.open("Accounts.txt", ios::app | ios::out);
             data << " "<< Sid <<" " << Sname << " " << Semail << " " << Spassword << " "<< "\n";
            data.close();
        }
    }        
    cout << "\n\n\n\t\t\t\tACCOUNT CREATED !!!\n\n";
    cout << "\n\t\t\t\tDO YOU WANT TO LOG IN IN SAME ACCOUNT (Y|N)!!!\t";
    n:
    cin>>choice;
    if(choice == 'Y'||choice == 'y')
    {
        login();
    }
    else if(choice == 'N'||choice == 'n')
    {
        cout << "\n\n\n\t\t\t\tTHANK YOU FOR USING STUDENT ERP !!!! ";
        exit(0);
    }
    else
    {
        cout << "\n\n\n\t\t\t\tPLEASE SELECT FROM GIVEN OPTIONS !!!! ";
        goto n;
    }

}

//********************************************************************************************************************************
//STUDENT LOGIN FUNCTION
void Account :: login()
{
    m:
    fstream data;
    string name,email,pass;
    int id;
    char choice;
    int token =0;
    string n;
    data.open("Accounts.txt",ios::in);
    data>>id>>name>>email>>pass;
    if(!data)
    {
        cout << "\n\n\n\t\t\t\tEMPTY FILE !!!\n\n";
    }else
    {
        cout << "\t\t\t\t+--------------------------------------+\n";
        cout << "\t\t\t\t|                                      |\n";
        cout << "\t\t\t\t|\tplease login                   |\n";
        cout << "\t\t\t\t|                                      |\n";
        cout << "\t\t\t\t|\tEnter Email: ";cin >> Semail;
        cout << "\t\t\t\t|                                      |\n";
        cout << "\t\t\t\t|\tEnter Password: ";cin >> Spassword;
        cout << "\t\t\t\t|                                      |\n";
        cout << "\t\t\t\t+--------------------------------------+\n";

        while(!data.eof())
        {
            if (email == Semail && pass == Spassword)
            {
                token++;
               cout << "\n\n\n\t\t\t\tLOGGED IN !!!\n\n";
            //    DashBoard(id);
               break;
               
            }
            else
            {
                data>>id>>name>>email>>pass;
            }
        }  
        if(token==0)
        {
            cout << "\n\n\n\t\t\t\tINCORRECT EMAIL OR PASSWORD !!\n\n";
            cout << "\n\n\n\t\t\t\tDO YOU WANT TO TRY AGAIN (Y|N)!!\t";
            cin>>choice;
            if(choice == 'Y'||choice == 'y')
            {
                goto m;
            }
        }
       
    }
}

//ADMINLOGIN
void Account::adminlogin()
{
    
    string email;
    string password;
    
        cout << "\t\t\t\t+--------------------------------------+\n";
        cout << "\t\t\t\t|                                      |\n";
        cout << "\t\t\t\t|\tplease login                   |\n";
        cout << "\t\t\t\t|                                      |\n";
        m:
        cout << "\t\t\t\t|\tEnter Email: ";cin >> email;
        cout << "\t\t\t\t|                                      |\n";
        cout << "\t\t\t\t|\tEnter Password: ";cin >> password;
        cout << "\t\t\t\t|                                      |\n";
        cout << "\t\t\t\t+--------------------------------------+\n";

        if (email == "123" && password == "123")
        {
           AdminMenu();
        }
        else
        {
            cout << "\n\n\n\t\t\t\t INCORRECT EMAIL OR PASSWORD !! TRY AGAIN \n\n";
            goto m;
        }       
}

void Home ::MainMenu()
{
    cout<<"\n\n\n";
    cout << "\t\t\t\t+-------------------------------------+\n";
    cout << "\t\t\t\t|                                     |\n";
    cout << "\t\t\t\t|\tSTUDENT ERP MENU              |\n";
    cout << "\t\t\t\t|_|\n";
    cout << "\t\t\t\t|                                     |\n";
    cout << "\t\t\t\t|\t1)ADMINISTRATOR               |\n";
    cout << "\t\t\t\t|                                     |\n";
    cout << "\t\t\t\t|\t2)STUDENT                     |\n";
    cout << "\t\t\t\t|                                     |\n";
    cout << "\t\t\t\t|\t3)EXIT                        |\n";
    cout << "\t\t\t\t|                                     |\n";
    cout << "\t\t\t\t+-------------------------------------+\n";

    cout << "\n\n\n\t\t\t\t PLEASE SELECT  !!!\t";
    cin >> choice;
}
//********************************************************************************************************************************
//STUDENT MENU
void Home :: Menu()
{
    
    cout << "\n\n\n";
    cout << "\t\t\t\t+-------------------------------------+\n";
    cout << "\t\t\t\t|                                     |\n";
    cout << "\t\t\t\t|\tSTUDENT SECTION               |\n";
    cout << "\t\t\t\t|_|\n";
    cout << "\t\t\t\t|                                     |\n";
    cout << "\t\t\t\t|\t1)CREATE ACCOUNT              |\n";
    cout << "\t\t\t\t|                                     |\n";
    cout << "\t\t\t\t|\t2)LOGIN                       |\n";
    cout << "\t\t\t\t|                                     |\n";
    cout << "\t\t\t\t|\t3)ABOUT US                    |\n";
    cout << "\t\t\t\t|                                     |\n";
    cout << "\t\t\t\t+-------------------------------------+\n";
    cout<< "\n\n\n\t\t\t\t PLEASE SELECT  !!!\t";
    cin>> choice;
} 
void Home::AdminMenu() 
{

    int ch;
    cout << "\t\t\t\t+--------------------------------------+\n";
    cout << "\t\t\t\t|                                      |\n";
    cout << "\t\t\t\t|\tADMINISTRATOR MENU             |\n";
    cout << "\t\t\t\t|                                      |\n";
    cout << "\t\t\t\t|\t1)ADD THE SUBJECT              |\n";
    cout << "\t\t\t\t|                                      |\n";
    cout << "\t\t\t\t|\t2)MODIFY THE SUBJECT           |\n";
    cout << "\t\t\t\t|                                      |\n";
    cout << "\t\t\t\t|\t3)DELETE THE SUBJECT           |\n";
    cout << "\t\t\t\t|                                      |\n";
    cout << "\t\t\t\t|\t4)VIEW SUBJECTS                |\n";
    cout << "\t\t\t\t|                                      |\n";
    cout << "\t\t\t\t|\t5)EXIT                         |\n";
    cout << "\t\t\t\t|                                      |\n";
    cout << "\t\t\t\t+--------------------------------------+\n";
    m:
    cout << "\n\n\n\t\t\t\tENTER  CHOICE:  ";
    cin >> ch;

    switch (ch)
    {
    case 1:
        AddCourse();
        break;
    case 2:
        
        break;
    case 3:
        
        break;
    case 4:
        
        break;
    case 5:
        exit(0);
    default:
        cout << "\n\n\n\t\t\t\tINVALID CHOICE !!!\n\n";
        goto m;
    }
   
}

int main()
{
   Account A;
}



