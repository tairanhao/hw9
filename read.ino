int ledPin  = 4;
int buttonPin = 13;
void setup() {
 pinMode(ledPin, OUTPUT);
 pinMode(buttonPin, INPUT_PULLUP );
// put your setup code here, to run once:

}

void loop() {
  if (digitalRead(buttonPin) == LOW){
    digitalWrite(ledPin, HIGH); } 
    else {
      digitalWrite(ledPin, LOW);// put your main code here, to run repeatedly:
  }

}
