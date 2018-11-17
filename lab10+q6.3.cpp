#include<iostream>
using namespace std;
/*6.3.  Write the ZooAnimal member function isMotherOf.  It needs only a
single statement that makes the mother data member of the ZooAnimal
object parameter a pointer to the ZooAnimal object for which this
function is called.*/
   enum scale {ounces, kilograms};
   class ZooAnimal  
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
      ZooAnimal *mother;
    public:
      void Create (char*, int, int, int); // create function
      void Destroy (); // destroy function 
      void isMotherOf (ZooAnimal&);
      void changeWeight (int pounds);
      void changeWeightDate (int today);
      char* reptName ();
      int reptWeight ();
      void reptWeight (scale which);
      inline int reptWeightDate () {return weightDate;};
      int daysSinceLastWeighed (int today);
	void setMother(ZooAnimal *zoo){
		mother = zoo;
	}
	ZooAnimal * getMother(){
		return mother;
	}
   };

void ZooAnimal::isMotherOf (ZooAnimal &z)
{  
	z.setMother(this);
}

int main()
{	ZooAnimal z1;
	ZooAnimal z2;
	z1.isMotherOf(z2);
	cout << z2.getMother() -> reptName();
	//cout<<main();
        return 0;
}








