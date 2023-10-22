
#define echoPin 2
#define trigPin 3
long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
  Serial.println("Ultrasonic Sensor HC-SR04 test");
  Serial.println("with arduino UNO R3");
}

void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  duration=pulseIn(echoPin,HIGH);
  distance=duration*0.034/2;
  Serial.print("distance: ");
  Serial.print(distance);
  Serial.println("mm: ");

}


