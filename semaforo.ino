const int red = 2;
const int yellow = 3;
const int green = 4;
const int delayTime = 3000;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void setLights(String message) {
  if(message == "stop") {
    digitalWrite(red, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
  }
  else if(message == "prepareToGo") {
    digitalWrite(red, HIGH);
    digitalWrite(yellow, HIGH);
    digitalWrite(green, LOW);
  }
  else if(message == "go") {
    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(green, HIGH);
  }
  else if(message == "prepareToStop") {
    digitalWrite(red, LOW);
    digitalWrite(yellow, HIGH);
    digitalWrite(green, LOW);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  setLights("stop");
  delay(delayTime*2);
  
  setLights("prepareToGo");
  delay(delayTime);
  
  setLights("go");
  delay(delayTime*2);
  
  setLights("prepareToStop");
  delay(delayTime);
}
