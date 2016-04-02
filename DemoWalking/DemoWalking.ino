#include <Servo.h>

Servo downLeg; //9
Servo middleLeg; // 10
Servo shoulder; //11

int
MLSB, CLSB,
MLS, CLS,
MNSB, CNSB,
MNS, CNS,
MHSB, CHSB,
MHS, CHS,
MSSB, CSSB,
MSS, CSS,
slowSpeed,
normalSpeed,
fastSpeed,
forward, normal, back,
i;

void setup() {
  Serial.begin(9600);
  
  middleLeg.attach(9);
  downLeg.attach(10);
  shoulder.attach(11);

  slowSpeed = 400;
  normalSpeed = 300;
  fastSpeed = 200;

  MLSB = 104;
  CLSB = 86;
  MLS = 127;
  CLS = 67;
  MNSB = 68;
  CNSB = 60;
  MNS = 118;
  CNS = 55;
  MHSB = 24;
  CHSB = 11;
  MHS = 61;
  CHS = 36;
  MSSB = 92;
  CSSB = 37;
  MSS = 117;
  CSS = 9;

  forward = 150;
  normal = 90;
  back = 52;

  i=0;
}

void loop() {

while(i<=20)
{
  movement(MLSB,CLSB,MLS,CLS,slowSpeed);
  i++;
}
while(i<=40)
{
  movement(MLSB,CLSB,MLS,CLS,normalSpeed);
  i++;
}   
while(i<=60)
{
  movement(MLSB,CLSB,MLS,CLS,fastSpeed);
  i++;
}  
while(i<=80)
{
  movement(MNSB,CNSB,MNS,CNS,slowSpeed);
  i++;
}
while(i<=100)
{
  movement(MNSB,CNSB,MLS,CNS,normalSpeed);
  i++;
}   
while(i<=120)
{
  movement(MNSB,CNSB,MLS,CNS,fastSpeed);
  i++;
} 
while(i<=20)
{
  movement(MHSB,CHSB,MHS,CHS,slowSpeed);
  i++;
}
while(i<=40)
{
  movement(MHSB,CHSB,MHS,CHS,normalSpeed);
  i++;
}   
while(i<=60)
{
  movement(MHSB,CHSB,MHS,CHS,fastSpeed);
  i++;
}
  
}

void movement(int StandByM,int StandByC,int StepM,int StepC,int waittime)
{
  middleLeg.write(StandByM);
  downLeg.write(StandByC);
  delay(waittime);
  middleLeg.write(StepM);
  downLeg.write(StepC);
  delay(waittime);
  shoulder.write(forward);
  delay(waittime);
  middleLeg.write(StandByM);
  downLeg.write(StandByC);
  delay(waittime);
  shoulder.write(back);
}



