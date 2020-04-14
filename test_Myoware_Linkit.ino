#define EMG1_PIN A0
int emgValue = 0;


void setup() {
  
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode (LED_BUILTIN, OUTPUT);
  pinMode (EMG1_PIN, OUTPUT);
  }

void loop() {
  // put your main code here, to run repeatedly:
  emgValue = analogRead(EMG1_PIN); 
  Serial.println(emgValue);
//  delay(100);
//  digitalWrite(LED_BUILTIN, HIGH);
//  delay(1000);
//  digitalWrite(LED_BUILTIN, LOW);
//  delay(1000);
}
