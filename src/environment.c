#include "environment.h"

void initateEnvironment( struct environment currentEnv ) {
	currentEnv.m_altitude = 90000.0;
	currentEnv.m_time = 0.0;
	currentEnv.m_gravity = 9.81;
	currentEnv.m_rho = 1.45;
	currentEnv.m_dynamicPressure = 1005.0;
	currentEnv.m_mach = 0.5;
	currentEnv.m_speedOfSound = 300/0.5;
}
