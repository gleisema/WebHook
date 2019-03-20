#define LIGHTSENSORPIN A0 //Ambient light sensor reading 

void setup() {
  pinMode(LIGHTSENSORPIN,  INPUT);  
}

void loop() {
  String reading = String(analogRead(LIGHTSENSORPIN)); //Read light level
  Particle.publish("reading", reading, PRIVATE);
  delay(30000);

}