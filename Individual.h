#if ! defined ( INDIVIDUAL_H )
#define INDIVIDUAL_H


class Individual 
{

public:

    Individual ( const Individual & unIndividual );
    Individual();
    virtual ~Individual();

protected:
	int afficherPoint();

	int numberMeasures;
	int numberValidatedMeasures;
};

#endif // INDIVIDUAL_H
