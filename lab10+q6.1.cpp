#include<iostream>
using namespace std;
/*6.1.  Write the ZooAnimal inline member function reptWeightDate.  It
should simply return the weightDate data member.*/

   enum scale {ounces, kilograms};

   class ZooAnimal  
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      void Create (char*, int, int, int); // create function
      void Destroy (); // destroy function 
      void changeWeight (int pounds);
      void changeWeightDate (int today);
      char* reptName ();
      int reptWeight ();
      void reptWeight (scale which);
      inline int reptWeightDate ();
      int daysSinceLastWeighed (int today);
   };
inline int ZooAnimal::reptWeightDate ()
{return weightDate;}


int main()
{
return 0;
}
