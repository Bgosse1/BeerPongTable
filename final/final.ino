int DigCir1 = 1;
int DigCir2 = 2;
int DigCir3 = 3;
int DigCir4 = 4;
int DigCir5 = 5;
int DigCir6 = 6;
int DigCir7 = 7;
int DigCir8 = 8;
int DigCir9 = 9;
int DigCir10 = 10;
int DigCir11 = 11;
int DigCir12 = 12;
int DigCir13 = 13;
int DigCir14 = 14;
int DigCir15 = 15;
int DigCir16 = 16;
int DigCir17 = 17;
int DigCir18 = 18;
int DigCir19 = 19;
int DigCir20 = 20;
int DigCir21 = 21;
int DigCir22 = 22;
int DigCir23 = 23;
int DigCir24 = 24;
int DigCir25 = 25;
int DigCir26 = 26;
int DigCir27 = 27;
int DigCir28 = 28;
int DigCir29 = 29;
int DigCir30 = 30;
int DigCir31 = 31;
int DigCir32 = 32;
int DigCir33 = 33;
int DigCir34 = 34;
int DigCir35 = 35;
int DigCir36 = 36;
int DigCir37 = 37;
int DigCir38 = 38;
int DigCir39 = 39;
int DigCir40 = 40;
int DigCir41 = 41;
int DigCir42 = 42;
int DigCir43 = 43;
int DigCir44 = 44;
int DigCir45 = 45;
int DigCir46 = 46;
int AngCir1 = A1;
int AngCir2 = A2;
int AngCir3 = A3;
int AngCir4 = A4;
int AngCir5 = A5;
int AngCir6 = A6;
int AngCir7 = A7;
int AngCir8 = A8;
int AngCir9 = A9;
int AngCir10 = A10;
int AngCir11 = A11;
int TENcupL = 0;
int SIXcupL = 0;
int DiamondL = 0;
int THREEcupL = 0;
int Relay = 0;
int CivilL = 0;
int BaseballL = 0;
int TENcupR = 0;
int SIXcupR = 0;
int DiamondR = 0;
int THREEcupR = 0;
int CivilR = 0;
int BaseballR = 0;
int LEDswitch = A0;




void setup()
{
  Serial.begin(9600);
  pinMode(DigCir1, OUTPUT);
  pinMode(DigCir2, OUTPUT);
  pinMode(DigCir3, OUTPUT);
  pinMode(DigCir4, OUTPUT);
  pinMode(DigCir5, OUTPUT);
  pinMode(DigCir6, OUTPUT);
  pinMode(DigCir7, OUTPUT);
  pinMode(DigCir8, OUTPUT);
  pinMode(DigCir9, OUTPUT);
  pinMode(DigCir10, OUTPUT);
  pinMode(DigCir11, OUTPUT);
  pinMode(DigCir12, OUTPUT);
  pinMode(DigCir13, OUTPUT);
  pinMode(DigCir14, OUTPUT);
  pinMode(DigCir15, OUTPUT);
  pinMode(DigCir16, OUTPUT);
  pinMode(DigCir17, OUTPUT);
  pinMode(DigCir18, OUTPUT);
  pinMode(DigCir19, OUTPUT);
  pinMode(DigCir20, OUTPUT);
  pinMode(DigCir21, OUTPUT);
  pinMode(DigCir22, OUTPUT);
  pinMode(DigCir23, OUTPUT);
  pinMode(DigCir24, OUTPUT);
  pinMode(DigCir25, OUTPUT);
  pinMode(DigCir26, OUTPUT);
  pinMode(DigCir27, OUTPUT);
  pinMode(DigCir28, OUTPUT);
  pinMode(DigCir29, OUTPUT);
  pinMode(DigCir30, OUTPUT);
  pinMode(DigCir31, OUTPUT);
  pinMode(DigCir32, OUTPUT);
  pinMode(DigCir33, OUTPUT);
  pinMode(DigCir34, OUTPUT);
  pinMode(DigCir35, OUTPUT);
  pinMode(DigCir36, OUTPUT);
  pinMode(DigCir37, OUTPUT);
  pinMode(DigCir38, OUTPUT);
  pinMode(DigCir39, OUTPUT);
  pinMode(DigCir40, OUTPUT);
  pinMode(DigCir41, OUTPUT);
  pinMode(DigCir42, OUTPUT);
  pinMode(DigCir43, OUTPUT);
  pinMode(DigCir44, OUTPUT);
  pinMode(DigCir45, OUTPUT);
  pinMode(DigCir46, OUTPUT);
  pinMode(AngCir1, INPUT);
  pinMode(AngCir2, INPUT);
  pinMode(AngCir3, INPUT);
  pinMode(AngCir4, INPUT);
  pinMode(AngCir5, INPUT);
  pinMode(AngCir6, INPUT);
  pinMode(AngCir7, INPUT);
  pinMode(AngCir8, INPUT);
  pinMode(AngCir9, INPUT);
  pinMode(AngCir10, INPUT);
  pinMode(AngCir11, INPUT);
  pinMode(LEDswitch, INPUT);
  
}
void loop()
{
  gameSEL();
}

void gameSEL()
{
  int digVAL1= analogRead(AngCir1);
  int digVAL2= analogRead(AngCir2);
  int digVAL3= analogRead(AngCir3);
  int digVAL4= analogRead(AngCir4);
  int digVAL5= analogRead(AngCir5);
  int digVAL6= analogRead(AngCir6);
  int digVAL7= analogRead(AngCir7);
  int digVAL8= analogRead(AngCir8);
  int digVAL9= analogRead(AngCir9);
  int digVAL10= analogRead(AngCir10);
  int digVAL11= analogRead(AngCir11);
  
  if(digVAL1 < 80 && digVAL2 <80)
  {
    TENcupR = 1;
  }
  else if(digVAL7 < 80 && digVAL8 < 80)
  {
    TENcupL = 1;
  }
  else if(digVAL3 < 80 && digVAL4 < 80)
  {
    SIXcupR = 1;
  }
  else if(digVAL9 < 80 && digVAL10 <80)
  {
    SIXcupL = 1;
  }
  else if(digVAL5 < 80 && digVAL6 <80)
  {
    Relay = 1;
  }
  else if(digVAL5 < 80 && digVAL2 <80)
  {
    CivilR = 1;
  }
  else if(digVAL11 < 80 && digVAL8 <80)
  {
    CivilL = 1;
  }
  else if(digVAL3 < 80)
  {
    DiamondR = 1;
  }
  else if(digVAL9 < 80)
  {
    DiamondL = 1;
  }
  else if(digVAL2 < 80)
  {
    THREEcupR = 1;
  }
  else if(digVAL8 < 80)
  {
    THREEcupL = 1;
  }
  else
  {
    TENcupR = 0;
    TENcupL = 0;
    SIXcupR = 0;
    SIXcupL = 0;
    Relay = 0;
    CivilR = 0;
    CivilL = 0;
    DiamondR = 0;
    DiamondL = 0;
    THREEcupR = 0;
    THREEcupL = 0;
  }
}

void LEDcontrol()
{
  if(TENcupR = 1)
  {
    digitalWrite(DigCir5, HIGH);
    digitalWrite(DigCir10, HIGH);
    digitalWrite(DigCir11, HIGH);
    digitalWrite(DigCir12, HIGH);
    digitalWrite(DigCir13, HIGH);
    digitalWrite(DigCir17, HIGH);
    digitalWrite(DigCir19, HIGH);
    digitalWrite(DigCir21, HIGH);
    digitalWrite(DigCir22, HIGH);
    digitalWrite(DigCir14, HIGH);
    digitalWrite(DigCir15, HIGH);
    digitalWrite(DigCir16, HIGH);    
  }
  else if(TENcupL = 1)
  {
    digitalWrite(DigCir28, HIGH);
    digitalWrite(DigCir33, HIGH);
    digitalWrite(DigCir34, HIGH);
    digitalWrite(DigCir35, HIGH);
    digitalWrite(DigCir36, HIGH);
    digitalWrite(DigCir40, HIGH);
    digitalWrite(DigCir42, HIGH);
    digitalWrite(DigCir44, HIGH);
    digitalWrite(DigCir45, HIGH);
    digitalWrite(DigCir37, HIGH);
    digitalWrite(DigCir38, HIGH);
    digitalWrite(DigCir39, HIGH);
  }
  else if(SIXcupR = 1)
  {
    digitalWrite(DigCir6, HIGH);
    digitalWrite(DigCir7, HIGH);
    digitalWrite(DigCir11, HIGH);
    digitalWrite(DigCir12, HIGH);
    digitalWrite(DigCir13, HIGH);
    digitalWrite(DigCir27, HIGH);
    digitalWrite(DigCir19, HIGH);
    digitalWrite(DigCir21, HIGH);
    digitalWrite(DigCir22, HIGH);
    digitalWrite(DigCir14, HIGH);
    digitalWrite(DigCir15, HIGH);
    digitalWrite(DigCir16, HIGH);
  }
  else if(SIXcupL = 1)
  {
    digitalWrite(DigCir29, HIGH);
    digitalWrite(DigCir30, HIGH);
    digitalWrite(DigCir34, HIGH);
    digitalWrite(DigCir35, HIGH);
    digitalWrite(DigCir36, HIGH);
    digitalWrite(DigCir46, HIGH);
    digitalWrite(DigCir41, HIGH);
    digitalWrite(DigCir45, HIGH);
    digitalWrite(DigCir37, HIGH);
    digitalWrite(DigCir38, HIGH);
    digitalWrite(DigCir39, HIGH);
  }
  else if(Relay = 1)
  {
    digitalWrite(DigCir1, HIGH);
    digitalWrite(DigCir2, HIGH);
    digitalWrite(DigCir11, HIGH);
    digitalWrite(DigCir10, HIGH);
    digitalWrite(DigCir19, HIGH);
    digitalWrite(DigCir18, HIGH);
    digitalWrite(DigCir14, HIGH);
    digitalWrite(DigCir22, HIGH);
    digitalWrite(DigCir17, HIGH);
  }
  else if(CivilR = 1)
  {
    digitalWrite(DigCir1, HIGH);
    digitalWrite(DigCir3, HIGH);
    digitalWrite(DigCir8, HIGH);
    digitalWrite(DigCir12, HIGH);
    digitalWrite(DigCir13, HIGH);
    digitalWrite(DigCir17, HIGH);
    digitalWrite(DigCir14, HIGH);
    digitalWrite(DigCir15, HIGH);
    digitalWrite(DigCir16, HIGH);
    digitalWrite(DigCir20, HIGH);
  }
  else if(CivilR = 1)
  {
    digitalWrite(DigCir24, HIGH);
    digitalWrite(DigCir26, HIGH);
    digitalWrite(DigCir31, HIGH);
    digitalWrite(DigCir35, HIGH);
    digitalWrite(DigCir36, HIGH);
    digitalWrite(DigCir40, HIGH);
    digitalWrite(DigCir37, HIGH);
    digitalWrite(DigCir38, HIGH);
    digitalWrite(DigCir39, HIGH);
    digitalWrite(DigCir43, HIGH);
  }
  else if(DiamondR = 1)
  {
    digitalWrite(DigCir7, HIGH);
    digitalWrite(DigCir9, HIGH);
    digitalWrite(DigCir13, HIGH);
    digitalWrite(DigCir20, HIGH);
    digitalWrite(DigCir23, HIGH);
    digitalWrite(DigCir16, HIGH);
  
  }
  else if(DiamondL = 1)
  {
    digitalWrite(DigCir30, HIGH);
    digitalWrite(DigCir32, HIGH);
    digitalWrite(DigCir36, HIGH);
    digitalWrite(DigCir43, HIGH);
    digitalWrite(DigCir46, HIGH);
    digitalWrite(DigCir39, HIGH);
  }
  else if(THREEcupR = 1)
  {
    digitalWrite(DigCir8, HIGH);
    digitalWrite(DigCir12, HIGH);
    digitalWrite(DigCir13, HIGH);
    digitalWrite(DigCir14, HIGH);
    digitalWrite(DigCir20, HIGH);
    digitalWrite(DigCir15, HIGH);
    digitalWrite(DigCir16, HIGH);
  }
  else if(THREEcupL = 1)
  {
    digitalWrite(DigCir31, HIGH);
    digitalWrite(DigCir35, HIGH);
    digitalWrite(DigCir36, HIGH);
    digitalWrite(DigCir37, HIGH);
    digitalWrite(DigCir43, HIGH);
    digitalWrite(DigCir38, HIGH);
    digitalWrite(DigCir39, HIGH);
  }
  else
  {
    digitalWrite(DigCir1, LOW);
    digitalWrite(DigCir2, LOW);
    digitalWrite(DigCir3, LOW);
    digitalWrite(DigCir4, LOW);
    digitalWrite(DigCir5, LOW);
    digitalWrite(DigCir6, LOW);
    digitalWrite(DigCir7, LOW);
    digitalWrite(DigCir8, LOW);
    digitalWrite(DigCir9, LOW);
    digitalWrite(DigCir10, LOW);
    digitalWrite(DigCir11, LOW);
    digitalWrite(DigCir13, LOW);
    digitalWrite(DigCir14, LOW);
    digitalWrite(DigCir15, LOW);
    digitalWrite(DigCir16, LOW);
    digitalWrite(DigCir17, LOW);
    digitalWrite(DigCir18, LOW);
    digitalWrite(DigCir19, LOW);
    digitalWrite(DigCir20, LOW);
    digitalWrite(DigCir21, LOW);
    digitalWrite(DigCir22, LOW);
    digitalWrite(DigCir23, LOW);
    digitalWrite(DigCir24, LOW);
    digitalWrite(DigCir25, LOW);
    digitalWrite(DigCir26, LOW);
    digitalWrite(DigCir27, LOW);
    digitalWrite(DigCir28, LOW);
    digitalWrite(DigCir29, LOW);
    digitalWrite(DigCir30, LOW);
    digitalWrite(DigCir31, LOW);
    digitalWrite(DigCir32, LOW);
    digitalWrite(DigCir33, LOW);
    digitalWrite(DigCir34, LOW);
    digitalWrite(DigCir35, LOW);
    digitalWrite(DigCir36, LOW);
    digitalWrite(DigCir37, LOW);
    digitalWrite(DigCir38, LOW);
    digitalWrite(DigCir39, LOW);
    digitalWrite(DigCir40, LOW);
    digitalWrite(DigCir41, LOW);
    digitalWrite(DigCir42, LOW);
    digitalWrite(DigCir43, LOW);
    digitalWrite(DigCir44, LOW);
    digitalWrite(DigCir45, LOW);
    digitalWrite(DigCir46, LOW);
  }
}

