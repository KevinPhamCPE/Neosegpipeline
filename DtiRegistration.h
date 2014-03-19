#ifndef DEF_DtiRegistration
#define DEF_DtiRegistration


// General Librairies
#include <stdlib.h>
#include <iostream>
#include <fstream>

// Qt Librairies
#include <QString>
#include <QDir>

// My Specific Librairies
#include "Script.h"
#include "Neo.h"
#include "ExecutablePaths.h"


class DtiRegistration : public Script
{
   public:

   // Constructor
   DtiRegistration(QString module); 

   // Implementing Scripts 
   void initializeScript();
   void upsample(QString image); 
   void generateDTI();
   void skullStripb0();
   void skullStripDTI();
   void generateFA();
   void generateAD();
   void calculateTransformations();
   void applyTransformations(QString image);
   void implementRun(); 

   // Output //
   void update();
   Neo getOutput();

   private:
         
   QString m_registering_suffix;

   // Output 
   Neo      m_registeredNeo;
}; 

#endif