#include "RayTracingSM.h"
#include "RayTracingSMProvider.h"

#include "MathTools.h"
/*----------------------------------------------------------------------*\
 |*			Declaration 					*|
 \*---------------------------------------------------------------------*/

/*--------------------------------------*\
 |*		Imported	 	*|
 \*-------------------------------------*/

/*--------------------------------------*\
 |*		Public			*|
 \*-------------------------------------*/

/*--------------------------------------*\
 |*		Private			*|
 \*-------------------------------------*/

/*----------------------------------------------------------------------*\
 |*			Implementation 					*|
 \*---------------------------------------------------------------------*/

/*--------------------------------------*\
 |*		Public			*|
 \*-------------------------------------*/

/*-----------------*\
 |*	static	   *|
 \*----------------*/

Image* RayTracingSMProvider::createGL(void)
    {
    Animable_I*  ptrMOO=RayTracingSMProvider::createMOO();

    return new Image(ptrMOO);
    }

Animable_I* RayTracingSMProvider::createMOO(void)
    {
    int dw=300;
    int dh=300;

    return new RayTracingSM(dw, dh);
    }

/*--------------------------------------*\
 |*		Private			*|
 \*-------------------------------------*/

/*----------------------------------------------------------------------*\
 |*			End	 					*|
 \*---------------------------------------------------------------------*/