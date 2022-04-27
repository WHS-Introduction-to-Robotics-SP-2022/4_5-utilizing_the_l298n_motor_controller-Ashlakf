//Run at half speed for three seconds
//Stop completely for two seconds
//Run the motor in reverse on full speed, for two seconds
//Stop the motor
int enA = 3;
int in1 = 5;
int in2 = 6;

void setup() {
  //Run at half speed for three seconds
	pinMode(enA, OUTPUT);
	pinMode(in1, OUTPUT);
	pinMode(in2, OUTPUT);
	
	analogWrite(enA, 123);
	digitalWrite(in1, LOW);
	digitalWrite(in2, HIGH);
	delay(3000);
	
	//Stop completely for two seconds
	digitalWrite(in1, LOW);
	digitalWrite(in2, LOW);
	delay(2000);
	
	//Run the motor in reverse on full speed, for two seconds
	analogWrite(enA, 255);
	digitalWrite(in1, HIGH);
	digitalWrite(in2, LOW);
	delay(2000);
	
	//Stop the motor
	digitalWrite(in1, LOW);
	digitalWrite(in2, LOW);
}

void loop() {
	

}
