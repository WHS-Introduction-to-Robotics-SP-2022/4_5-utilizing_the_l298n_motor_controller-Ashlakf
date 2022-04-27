int enA = 3;
int in1 = 5;
int in2 = 6;

void setup() {
	pinMode(enA, OUTPUT);
	pinMode(in1, OUTPUT);
	pinMode(in2, OUTPUT);
	
	analogWrite(enA, 255);
	digitalWrite(in1, LOW);
	digitalWrite(in2, HIGH);
	delay(5000);
	digitalWrite(in1, LOW);
	digitalWrite(in2, LOW);
}

void loop() {
	

}
