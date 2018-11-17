#include<iostream>
using namespace std;
/*6.2.  Modify the prototype for changeWeightDate below to make it the
appropriate single line inline member function changeWeightDate.  The
single line needed should set the data member weightDate equal to the
parameter today.*/

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
      inline void changeWeightDate (int today);
	//{weightDate=today;}
      char* reptName ();
      int reptWeight ();
      void reptWeight (scale which);
      int reptWeightDate ();
      int daysSinceLastWeighed (int today);
   };

	inline void ZooAnimal::changeWeightDate (int today)
	{weightDate=today;}
    
	
int main()
{
return 0;
}
