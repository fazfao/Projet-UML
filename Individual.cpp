using namespace std;
#include <iostream>
#include <time.h>

#include "Individual.h"


double Individual::mesure()
{
	srand((unsigned)time(NULL));
	numberMeasures++;
	return ((rand()%500)/4);
}


Individual::Individual ( const Individual & unIndividual )
{
#ifdef MAP
   cout << "Appel au constructeur de copie de <Individual>" << endl;
#endif
} 


Individual::Individual()
{
#ifdef MAP
    cout << "Appel au constructeur de <Individual>" << endl;
#endif
	numberMeasures=0;
	numberValidatedMeasures=0;
} 

Individual::~Individual ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Individual>" << endl;
#endif
} 
