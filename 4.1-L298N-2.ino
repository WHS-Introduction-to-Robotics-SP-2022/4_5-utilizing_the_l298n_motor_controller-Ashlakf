// Motor A connections
int enA = 3;
int in1 = 5;
int in2 = 6;
int i;

void setup() {
// Set all the motor control pins to outputs
	pinMode(enA, OUTPUT);
	pinMode(in1, OUTPUT);
	pinMode(in2, OUTPUT);
	  
	// Turn on motors
	digitalWrite(in1, LOW);
	digitalWrite(in2, HIGH);
	// Accelerate from zero to maximum speed
	for (int i = 0; i < 256; i++) {
		analogWrite(enA, i);
		delay(20);
	
	// Decelerate from maximum speed to zero
	for (int i = 255; i >= 0; i--) {
		analogWrite(enA, i);
		delay(20);
	}
}

void loop() {

}
}
