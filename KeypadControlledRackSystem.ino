#include <Keypad.h>

const byte ROWS = 4; //four rows
const byte COLS = 3; //three columns

char keys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
byte rowPins[ROWS] = {9, 8, 7, 6}; //connec mt to the row pinouts of the keypad
byte colPins[COLS] = {5, 4, 3}; //connect to the column pinouts of the keypad

//Create an object of keypad
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );
#define RelayPin 2
#define GLed 10
#define RLed 11
#define Buzzer 12

int count;  

void setup(){
  Serial.begin(9600);
  int count=0;
  digitalWrite(RelayPin, HIGH);
  pinMode(RelayPin, OUTPUT);
  pinMode(GLed, OUTPUT);
  pinMode(RLed, OUTPUT);
  pinMode(Buzzer, OUTPUT);
}

void loop(){
  char key = keypad.getKey();// Read the key
     
  // Print if key pressed
  if(key){
     Serial.println(key);
    int keyCopy=key-48;
    digitalWrite(RelayPin, LOW);
    digitalWrite(GLed, LOW);
    digitalWrite(RLed, HIGH);
    digitalWrite(Buzzer, LOW);

    if(count<keyCopy)
    {
    for(int i=count;i<keyCopy;i++)
    {
      count++;
    //int a=keyCopy-count;
    delay(2800);
    if(keyCopy==count){
    digitalWrite(RelayPin, HIGH);
    digitalWrite(GLed, HIGH);
    digitalWrite(RLed, LOW);
    digitalWrite(Buzzer, HIGH);  // Turn on the buzzer
    delay(500);  // Wait for 1 second
    digitalWrite(Buzzer, LOW);  // Turn off the buzzer after 1 second
    }
    if(count==8)
    {
      count=0;
    }
    }
    }


    if(count>keyCopy)
    {
      int b=(8-count)+keyCopy;
      for(int i=0;i<b;i++)
    {
      count++;
    //int a=keyCopy-count;
    delay(2800);
    if(keyCopy==count){
    digitalWrite(RelayPin, HIGH);
    digitalWrite(GLed, HIGH);
    digitalWrite(RLed, LOW);
    digitalWrite(Buzzer, HIGH);  // Turn on the buzzer
    delay(500);  // Wait for 1 second
    digitalWrite(Buzzer, LOW);  // Turn off the buzzer after 1 second
    }
    if(count==8)
    {
      count=0;
    }
    }
    }

    
    if(keyCopy==keyCopy){
      digitalWrite(RelayPin, HIGH);
      digitalWrite(GLed, HIGH);
      digitalWrite(RLed, LOW);
      digitalWrite(Buzzer, HIGH);  // Turn on the buzzer
      delay(500);  // Wait for 1 second
      digitalWrite(Buzzer, LOW);  // Turn off the buzzer after 1 second
    }
    }
          }