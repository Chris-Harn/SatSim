#ifndef __ENVIRONMENT__
#define __ENVIRONMENT__

struct environment {		/* UNITS - NAME */
	double m_altitude;	/* feet - Altitude */
	double m_time;		/* milliseconds - Current Time from Start of Sim */
	double m_gravity;	/* m/s^2 at a particular altitude */
	double m_rho;		/* kg/m^3 - Air Density */
	double m_dynamicPressure; /* Pa - Dynamic Pressure */
	double m_mach;		/* mach - Mach Number */
	double m_speedOfSound;  /* m/s - Speed of Sound */
};


void initateEnvironment( struct environment currentEnv );

#endif
