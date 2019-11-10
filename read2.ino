int led = 13;

void setup() {
 Serial.begin(19200);
  pinMode(A1,INPUT);
 pinMode(led,OUTPUT);// put your setup code here, to run once:

}

void loop() {

int value;
 value = analogRead(A1);
 Serial.println(value);

char c;

c = Serial.read();

if(c == '1'){
  Serial.println("Turning the LED on");
digitalWrite(led,HIGH);

}
if(c == "2"){
  Serial.println("Turning the LED off");
  digitalWrite(led,LOW);
}

}
