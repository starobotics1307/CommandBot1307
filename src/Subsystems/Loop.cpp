#include "Loop.h"
#include "../RobotMap.h"
#include "fstream"
using namespace std;
Loop::Loop() :
		Subsystem("Loop")
{

magleft = 0.0;
magright = 0.0;
magforce = 0.0;
origin = 0.0;
mag = 0.0;
axis = 0.0;
xleft = 0.0;
yleft = 0.0;
xright = 0.0;
yright = 0.0;

}

void Loop::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}
void Loop::WriteToFile()
{
FILE *filemag;
filemag = fopen("MemoryMag.txt", "w");
if(filemag != NULL){

	fprintf(filemag, "%f", mag);
FILE *fileaxis;
fileaxis = fopen("MemoryAxis.txt", "w");
if(fileaxis != NULL){
	fprintf(fileaxis, "%f", axis);
}

}

}

// Put methods for controlling this subsystem
// here. Call these from Commands.
