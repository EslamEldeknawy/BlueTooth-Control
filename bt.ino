// author Eslam eldeknawy 21/2/2017


byte val;
byte rd;
void setup() {



#define L1 2 //to initialize relay 1 to the digital pin 2
#define L2 3
#define L3 4
#define L4 5


  pinMode(L1, OUTPUT); 
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);

    digitalWrite(L1, LOW); //start with all relays low
    digitalWrite(L2, LOW);
    digitalWrite(L3, LOW);
    digitalWrite(L4, LOW);




    }

void loop() {
  if (Serial.available()) // just communicate if serial is reciving data
  {
    val = Serial.read() ; // assign val to serial read
    Serial.println( int(val)); // everytime you send something to arduino it will answer you with val value




    switch (val)
    {
      case 49 : // 49=1 on qwerty keyboard
        digitalWrite(L1, HIGH);
        Serial.println("realy1 High");
        break;
      case 50:
        digitalWrite(L1, LOW);
        Serial.println("realy1 Low");
        break;
      case 51 :
        digitalWrite(L2, HIGH);
        Serial.println("realy2 High");
        break;
      case 52:
        digitalWrite(L2, LOW);
        Serial.println("realy2 Low");
        break;
      case 53 :
        digitalWrite(L3, HIGH);
        Serial.println("realy3 High");
        break;
      case 54:
        digitalWrite(L3, LOW);
        Serial.println("realy3 Low");
        break;
      case 55 :
        digitalWrite(L4, HIGH);
        Serial.println("realy4 High");
        break;
      case 56:
        digitalWrite(L4, LOW);
        Serial.println("realy4 Low");
        break;
    }

  }

}
