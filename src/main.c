#include "main.h"

#include <stdio.h>

#include "math.h"
#include "environment.h"
#include "vehicle.h"

int main( void ) {
	struct vehicle satallite1;	
	struct environment currentEnvironment1;

	initateEnvironment( currentEnvironment1 );

	printf( "Program finished without issue.\n" );
	return 0;
}
