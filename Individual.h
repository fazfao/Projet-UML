#if ! defined ( INDIVIDUAL_H )
#define INDIVIDUAL_H


class Individual 
{

public:

    Individual ( const Individual & unIndividual );
    Individual();
    virtual ~Individual();
    Measures mesure(); //générer un double aléatoire XD puis incrementation

protected:
	int afficherPoint();

	int numberMeasures;
	int numberValidatedMeasures;
};

#endif // INDIVIDUAL_H
