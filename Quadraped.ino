#include <Servo.h>

class ServoManager
{
  Servo forwardleft_thigh;
  Servo forwardlright_thigh;
  Servo backleft_thigh;
  Servo backright_thigh;

  Servo forwardleft_knee;
  Servo forwardright_knee;
  Servo backleft_knee;
  Servo backlright_knee;

  public:
  ServoManager(int forwardleft_thigh_pin, //constructor
              int forwardright_thigh_pin,
              int backleft_thigh_pin,
              int backright_thigh_pin,
              int forwardleft_knee_pin,
              int forwardright_knee_pin,
              int backleft_knee_pin,
              int backright_knee_pin)
  {
    forwardleft_thigh.attach(forwardleft_thigh_pin);
    forwardright_thigh.attach(forwardright_thigh_pin);
    backleft_thigh_pin.attach(backleft_thigh_pin);
    backright_thigh.attach(backright_thigh_pin);

    forwardleft_knee.attach(forwardleft_knee_pin);
    forwardright_knee.attach(forwardright_knee_pin);
    backleft_knee.attach(backleft_knee_pin);
    backright_knee.attach(backright_knee_pin);
  }
  void ChangeServoRotations(ServoState State)
  {
    forwardleft.write(State.FLT); //Finish this; Use Write() on all the servos to the corressponding integer in the ServoState class
  }
 
}

class ServoState //A ServoState is a class containing the rotations of every servo at a given moment. IE A default stable position
{
 
  public:
  int FLT;
  int FRT;
  int BLT;
  int BRT;
  int FLK;
  int FRK;
  int BLK;
  int BRK;
  
  ServoState(int flt, int frt, int blt, int brt, int flk, int frk, int blk, int brk)
  {
    FLT = flt;
    FRT = frt;
    BLT = blt;
    BRT = brt;
    FLK = flk;
    FRK = frk;
    BLK = blk;
    BRK = brk;
  }
}
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
