#if ! defined ( GOUVERNMENT_ALAGENCY_H )
#define GOUVERNMENTAL_AGENCY_H


class GouvernmentalAgency 
{

public:

    GouvernmentalAgency ( const GouvernmentalAgency & unGouvernmentalAgency );
    GouvernmentalAgency();
    virtual ~GouvernmentalAgency();
	SensorState GetSensorState(int sensorId);
	double MeanAirQuality(Date adate,int lat,int long,int radius,int attId);
	double MeanAirQuality(Date begin,Date end,int lat,int long,int radius,int attId);
	double MeanAirQuality(Date begin,Date end,int duration,int lat,int long,int radius,int attId);
	int ATMO(Date adate,int lat,int long,int radius);
	int ATMO(Date begin,Date end,int lat,int long,int radius,int attId);
	int ATMO(Date begin,Date end,int duration,int lat,int long,int radius,int attId);
	Sensor* SimilarSensor(double factor,Date begin,Date end);
	
protected:

};

#endif // GOUVERNMENTAL_AGENCY_H
