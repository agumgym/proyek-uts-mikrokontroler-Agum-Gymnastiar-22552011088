int led_pin = 10;  // Pin LED
int lux;           // Variabel untuk membaca nilai cahaya
int i;             // Nilai yang dimapping untuk PWM

void setup() {
  pinMode(led_pin, OUTPUT); // Set LED sebagai output
}

void loop() {
  lux = analogRead(A0);           // Baca nilai dari sensor LDR
  i = map(lux, 0, 1023, 0, 255);  // Konversi nilai analog ke PWM
  analogWrite(led_pin, i);        // Atur kecerahan LED
}
