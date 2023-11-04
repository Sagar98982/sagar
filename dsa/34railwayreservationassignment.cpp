#include<iostream>
using namespace std;
#include<fstream>
#include<string.h>


class login
{
  public: char id[100];
  char password[100];



 void loginid()
  {
    
    cout<<"enter your  id : "<<endl;
    cin>>id;

    cout<<"enter your password : " <<endl;
    cin>>password;


}

void display()
{
    cout<<"id"<<id<<endl;
    cout<<"password"<<password<<endl;

}

};


class detail

{

 
  char trainname[100];
  char boardingtime[100];
  char dest[100];
  int class1,class1fare;
  int class2,class2fare;
  int day,month,year;

public:
 long trainno;
  void getdetail()
  {

    cout<<"enter the train no :";
    cin>>trainno;
    cout<<"enter the train name :";
    cin>>trainname;
    cout<<"enter the boarding time :";
    cin>>boardingtime;
    cout<<"enter the destination :";
    cin>>dest;
    cout<<"enter the no of seats class1 :";
    cin>>class1;
    cout<<"enter the fare of class1 :";
    cin>>class1fare;
    cout<<"enter the no of seats in class2 :";
    cin>>class2;
    cout<<"enter the fare of class2 :";
    cin>>class2fare;
    cout<<"enter the day :";
    cin>>day;
    cout<<"enter the month :";
    cin>>month;
    cout<<"enter the year :";
    cin>>year;

  }



  void tdisplay()
  {
    cout<<"Train no :"<<trainno<<endl;
    cout<<"Trainname :"<<trainname<<endl;
    cout<<"Boarding time :"<<boardingtime<<endl;
    cout<<"Destination :"<<dest<<endl;
    cout<<"Class1 Seats :"<<class1<<"fare : "<<class1fare<<endl;
    cout<<"Class2 Seats :"<<class2<<"fare :"<<class2fare<<endl;
    cout<<"Date :"<<day<<"/"<<month<<"/"<<year<<endl;




  }};

  class reservation
  {

    public:

    int passengerno;
    int trainno;
    char trainname[100];
    char boardingtime[100];
    char dest[100];
    char passengername[100];
    int age;
    char classes[100];
    int day,month,year;
    int bookid;
    int seat;
    char category;
    int amount;


   void getreservation()
   {

       cout<<"enter the passenger no :";
       cin>>passengerno;
       cout<<"enter the train no :";
       cin>>trainno;
       cout<<"enter the train name :";
       cin>>trainname;
       cout<<"enter the boarding time: ";
       cin>>boardingtime;
       cout<<"enter the destination :";
       cin>>dest;
       cout<<"enter the passenger :";
       cin>>passengername;
       cout<<"enter the age :";
       cin>>age;
       cout<<"enter the classes :";
       cin>>classes;
       cout<<"enter the day :";
       cin>>day;
       cout<<"enter the month :";
       cin>>month;
       cout<<"enter the year :";
       cin>>year;
       cout<<"enter the book Id :";
       cin>>bookid;
       cout<<"enter the seat :";
       cin>>seat;
       cout<<"enter the category :";
       cin>>category;
       cout<<"enter the amount :";
       cin>>amount;



   }


   void dispalyresrevation()
   {

    cout<<"Passenger no :"<<passengerno<<endl;
    cout<<"Train no :"<<trainno<<endl;
    cout<<"Train name :"<<trainname<<endl;
    cout<<"Boarding time :"<<boardingtime<<endl;
    cout<<"Destination :"<<dest<<endl;
    cout<<"Passenger name :"<<passengername<<endl;
    cout<<"Age :"<<age<<endl;
    cout<<"Class :"<<classes<<endl;
    cout<<"Date :"<<day<<"/"<<month<<"/"<<year<<endl;
    cout<<"Number of Seats :"<<seat<<endl;
    cout<<"Category :"<<category<<endl;
    cout<<"amount :"<<amount<<endl;

  

  }};

    void back()

    {

        cout<<"THANKS FOR VISITING";

    };



    void id()

    {

       string c;

       int d;


       cout<<"enter the user id = ";
       cin>>c;

       cout<<"enter the pwd1 = ";
       cin>>d;


    };








  int main()
  {
    int choice,choice1;

    long password;

    long pass = 12345678;

    login sagar;

    detail sagar1;

    reservation sagar2;
    fstream f1;

    
   
         

          cout<<"......................................"<<endl;
          cout<<"........choose your operation........."<<endl;
          cout<<"......................................"<<endl;
          cout<<"         1.Admin Mode                 "<<endl;
          cout<<"         2.User Mode                  "<<endl;
          cout<<"         3.Exit                       "<<endl;
          cout<<"......................................"<<endl;


          cout<<"enter your choice =";
          cin>>choice;


          switch(choice)
          {
            
           case 1: 


           cout<<"enter the password :";
           cin>>password;

           if(pass == password)

           {

          cout<<"......................................"<<endl;
          cout<<"........choose your operation........."<<endl;
          cout<<"......................................"<<endl;
          cout<<"         1.Add train detail            "<<endl;
          cout<<"         2.Display Train detail        "<<endl;
          cout<<"         3.Modify Train detail         "<<endl;
          cout<<"         4.Delete Train detail         "<<endl;
          cout<<"         5.passenger Train detail      "<<endl;
          cout<<"         6.user detail                 "<<endl;
          cout<<"......................................."<<endl;

          cout<<"enter your choice :";
          cin>>choice1;
        
          

          switch(choice1)
          {

            case1:

            sagar1.getdetail();
            
            f1.open("train.txt",ios::app);
            f1.write((char *)&sagar1,sizeof(sagar1));
            cout << "Train details" << endl;
            f1.close();

            break;

            case2:

            sagar1.tdisplay();
           
           f1.open("train.txt",ios::in);
           cout<<"record of train"<<endl;

           while(!(f1.read((char*)&sagar1,sizeof(sagar1)).eof()))
           {

            sagar1.tdisplay();
            


           }
          
           f1.close();
          
          
            break;
          

          case 3:

          

            int i;
            int train1no;

            cout<<"enter the tarin no"<<endl;
            cin>>i;

            f1.open("train.txt",ios::in|ios::out);
            
            while(!(f1.read((char*)&sagar1,sizeof(sagar1)).eof()))

            {

               sagar1.tdisplay();

               if(sagar1.trainno==i)


               {

                   cout<<"enter the new train1 no"<<endl;
                   cin>>train1no;
                   //f1.seek((char *),-sizeof(sagar1),SEEK_CUR)
                   f1.seekp(ios::cur);
                   f1.write((char *)&sagar1,sizeof(sagar1));

                   //flag=1;

                    //break;


                  

               }
               f1.close();
              
            }
            



           

















 

           
           default: cout<<"invalid choice"<<endl;
            
            
           }

           case 2:  cout<<"\n";

           int choice2;

           cout<<"............................"<<endl;
           cout<<"||  CHOOE YOUR OPERATION  ||"<<endl;
           cout<<"||  [1]   SIGN_UP         ||"<<endl;
           cout<<"||  [2]   LOG_IN          ||"<<endl;
           cout<<"||                        ||"<<endl;
           cout<<"||                        ||"<<endl;
           cout<<"............................"<<endl;

           cout<<"enter your choice = ";
           cin>>choice2;

           switch(choice2)
           {

              case 1: f1.open("id.txt",ios::app);

              sagar.loginid();

              f1.write((char*)&sagar,sizeof(sagar));

              cout<<"created id"<<endl;

              break;


              case 2: char pass1[100];

              char user_id3[20];

              f1.open("user_id.txt",ios::in);

              cout<<"enter the user id = "<<endl;

              cin>>user_id3;

              cout<<"pwd = ";

              cin>>pass1;


              f1.read((char*)&sagar,sizeof(sagar));

              int j= strcmp(sagar.id,user_id3);
              if(j==0&&(sagar.password==pass1))

              {

                    cout<<"login successfully now you can reserve ypur train"<<endl;

                     
                    cout<<"\n";

                    cout<<"......................................"<<endl;
                    cout<<"||        CHOOSE YOUR OPERATION       "<<endl;
                    cout<<"||    [1] RESERVATION                 "<<endl;
                    cout<<"||    [2] CANCEL (DELETE)             "<<endl;
                    cout<<"||    [3] EXIT                        "<<endl;
                    cout<<"||                                    "<<endl;
                    cout<<"......................................"<<endl;


                    int m;

                    cout<<"enter your choice = ";
                    cin>>m;


                    switch(m)

                    {


                       case 1: f1.open("id.txt",ios::in);

                               f1.read((char*)&sagar,sizeof(sagar));

                               f1.close();



                    }}



                    else

                    {

                       cout<<"wrong user id ";



                    }

                    f1.close();

                    }


                   case 3: back();


                   }}









                    
                














              }


                  



             

















  



  


  





