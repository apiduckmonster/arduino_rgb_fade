//Definiere Pins als Wörter
#define ROT 6
#define BLAU 8
#define GRUEN 5

int blueValue;
int redValue;
int greenValue;


void setup() {
  // put your setup code here, to run once:
  pinMode(ROT, OUTPUT);
  pinMode(BLAU, OUTPUT);
  pinMode(GRUEN, OUTPUT);
  
}

void loop() {
  
  // Blau, Rot und Grün ohne Fade im Abstand von 1000ms
  /*digitalWrite(BLAU, HIGH);
  delay(1000);
  digitalWrite(BLAU, LOW);
  digitalWrite(ROT, HIGH);
  delay(1000);
   digitalWrite(ROT, LOW);
  digitalWrite(GRUEN, HIGH);
  delay(1000);
  digitalWrite(GRUEN, LOW);*/

  //Mit Fade
  blueValue = 255;
  redValue = 0;
  greenValue = 0;
  

  for (int i = 0; i < 255;  i += 1){
    blueValue -= 1;
    redValue += 1;

    analogWrite(BLAU, blueValue);
    analogWrite(ROT, redValue);
    analogWrite(GRUEN, greenValue);
    delay(10);
  }

  for (int i = 0; i < 255;  i += 1){
    redValue -= 1;
    greenValue += 1;

    analogWrite(BLAU, blueValue);
    analogWrite(ROT, redValue);
    analogWrite(GRUEN, greenValue);
    delay(10);
  }

  for (int i = 0; i < 255;  i += 1){
    greenValue -= 1;
    blueValue += 1;

    analogWrite(BLAU, blueValue);
    analogWrite(ROT, redValue);
    analogWrite(GRUEN, greenValue);
    delay(10);
  }
}

