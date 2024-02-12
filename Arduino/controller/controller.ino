//pushbuttons
#define leftPin 2
#define rightPin 3
#define upPin 4
#define downPin 5

//joystick 
#define sensPin 6
#define xPin A0 //switched x and y pins because of preffered orientation
#define yPin A1

int left = 0;  
int right =0;
int x=0;
int y=0;
int up=0;
int down=0;
int sens=0;

void setup() 
{
  pinMode(leftPin, INPUT_PULLUP);
  pinMode(rightPin, INPUT_PULLUP);
  pinMode(sensPin, INPUT_PULLUP);
  pinMode(upPin, INPUT_PULLUP);
  pinMode(downPin, INPUT_PULLUP);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  
  Serial.begin(9600);
}

void loop() {

  left = digitalRead(leftPin);
  right = digitalRead(rightPin);
  sens= digitalRead(sensPin);
  up= digitalRead(upPin);
  down= digitalRead(downPin);
  x= analogRead(xPin)-505 ;
  y= analogRead(yPin)-532;

  if (left == LOW) //leftclick 
  {
    Serial.print("left\n");
    delay(100);
  }
  else if(right == LOW)
  {
    Serial.print("right\n");
    delay(100);
  }
  else if(sens == LOW)
  {
    Serial.print("sens\n");
    delay(100);
  }
  else if(up == LOW)
  {
    Serial.print("up\n");
    delay(100);
  }
  else if(down == LOW)
  {
    Serial.print("down\n");
    delay(100);
  }
  else if(abs(x)>100 || abs(y)>100 )
  {
    Serial.print(x);
    Serial.print(" ");
    Serial.print(y);
    Serial.print("\n");
    delay(50);
  }
  else
  {
    //Serial.print("\n");
  }
}
