//QUESTION 5
#include<iostream>
#include<cstring>
using namespace std;

  class ZooAnimal  
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      void creater(char *ch,int a,int b,int c);  //creator function	
      void Destroy (); // destroy function
      char* reptName ();
      int daysSinceLastWeighed (int today);
   };
//creater defination
void ZooAnimal::creater(char ch[],int a,int b,int c)
{	name=ch;
	cageNumber=a;
	weightDate=b;
	weight=c;   
}
  // -------- member function to return the number of days
   // -------- since the animal was last weighed
int ZooAnimal::daysSinceLastWeighed (int today)
   {
    int startday, thisday;
    //thisday = today/100*30 + today - today/100*100;
	thisday = today/100*30 + today - today/100*100;
    //startday = weightDate/100*30 + weightDate - weightDate/100*100;
	startday = weightDate/100*30 + weightDate - weightDate/100*100;
    if (thisday < startday) 
     	{   thisday += 360;
    		return (thisday-startday);
	}
    if (today < weightDate) 
	 {       today += 360;
      		return (today-weightDate);
	 }
   }
//.....................................
 void ZooAnimal::Destroy ()
   {    
    delete name;
   }

   // -------- member function to return the animal's name
   char* ZooAnimal::reptName ()
   {
    return name;
   }



///////////////////////////////////////////////////////////////////////////////////////////
int main()
{	ZooAnimal bozo;
	char bozoname[50]="Bozo";
        bozo.creater (bozoname, 408, 1027, 400);

      //cout << "This animal's name is " << bozo.name << endl;//this statement needs modificn
	//char *Aname;
	//Aname=bozo.reptName();
	//cout<<Aname<<endl;
	cout<<bozo.reptName()<<endl;
    //  bozo.Destroy ();
 


	return 0;
}
