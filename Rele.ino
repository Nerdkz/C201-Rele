#define rele 3 
#define segundo 1000
void setup() {
  pinMode( rele, OUTPUT );

  digitalWrite( rele, LOW);
}

void loop() {
  digitalWrite( rele, HIGH);
  delay(segundo);
  digitalWrite( rele, LOW);
  delay(segundo);
}
