const int redPin = 2;
const int yellowPin = 5;
const int greenPin = 21;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  digitalWrite(greenPin, LOW);
  digitalWrite(redPin, HIGH);
  digitalWrite(yellowPin, HIGH);
  delay(5000); 

  digitalWrite(yellowPin, LOW);
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, HIGH);
  delay(2000); 

  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(yellowPin, HIGH);
  delay(5000); 

  digitalWrite(yellowPin, LOW);
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, HIGH);
  delay(2000);
}