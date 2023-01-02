int water;
int led = 8 ;


void setup() {
  pinMode(led , OUTPUT); // met la broche numérique en sortie
  pinMode(A1, INPUT);
  Serial.begin(9600); // ouvre le port série
   digitalWrite(13, HIGH);
   delay(1000);
digitalWrite(13, LOW);
   delay(1000);
  
}

void loop() {
  water = analogRead(A1);
  Serial.println(water);
 
  if (water > 100) {
    digitalWrite(13, HIGH); } // allume la LED
  if (water < 100) { 
  digitalWrite(13, LOW); } // éteint la LED 
 
  delay(1000); // attend une seconde
}
