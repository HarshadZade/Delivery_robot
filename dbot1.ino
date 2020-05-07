int in1 = 12;
int in2 = 13;
int in3 = 8;
int in4 = 7;
//int enable1 = 11;
//int enable2 = 9;
int rc_1 = 3;
int rc_2 = 10;

void setup() {
  pinMode(rc_1, INPUT);
  pinMode(rc_2, INPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
//  pinMode(enable1, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
//  pinMode(enable2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  int pwm1 = 0;
  int pwm2 = 0;
  int motion = pulseIn(rc_2, HIGH, 25000);
  int dir = pulseIn(rc_1, HIGH, 25000);
  digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);

//  if(motion == 0){
//      digitalWrite(in1, LOW);
//      digitalWrite(in2, LOW);
//      analogWrite(enable1, 0);
//      digitalWrite(in3, LOW);
//      digitalWrite(in4, LOW);
//      analogWrite(enable2, 0);
//      Serial.print("motion1");
//      Serial.println(motion);
//  }
//
//  else if(motion > 1530){
//      pwm2 = map(motion, 1530, 2000, 0, 255);
//      digitalWrite(in1, LOW);
//      digitalWrite(in2, LOW);
//      digitalWrite(enable1, HIGH);
//      digitalWrite(in3, HIGH);
//      digitalWrite(in4, LOW);
//      digitalWrite(enable2, HIGH);
//      Serial.print("motion2");
//      Serial.println(motion);
//  }
//
//  else if(motion < 1460){
//      pwm2 = map(motion, 1460, 1000, 0, 255);
//      digitalWrite(in1, HIGH);
//      digitalWrite(in2, LOW);
//      digitalWrite(enable1, HIGH);
//      digitalWrite(in3, LOW);
//      digitalWrite(in4, LOW);
//      digitalWrite(enable2, HIGH );
//      Serial.print("motion3");
//      Serial.println(motion);
//  }

//  else{
//      digitalWrite(in1, LOW);
//      digitalWrite(in2, LOW);
//      analogWrite(enable1, 0);
//      digitalWrite(in3, LOW);
//      digitalWrite(in4, LOW);
//      analogWrite(enable2, 0);
//      Serial.print("motion4");
//      Serial.println(motion);
//  }

//  if(motion == 0){
//      digitalWrite(in1, LOW);
//      digitalWrite(in2, LOW);
////      analogWrite(enable1, 0);
//      digitalWrite(in3, LOW);
//      digitalWrite(in4, LOW);
////      digitalWrite(enable2, 0);
////      Serial.println("dir0");
////      Serial.println(dir);
//  }
//  else if(motion > 1530){ //right stick
////      pwm1 = map(motion, 1530, 2000, 0, 255); //map our speed to 0-255 range
//      digitalWrite(in1, LOW);
//      digitalWrite(in2, HIGH);
////      digitalWrite(enable1, HIGH);
//      digitalWrite(in3, LOW);
//      digitalWrite(in4, HIGH);
////      digitalWrite(enable2, HIGH);
////      Serial.println("dir1");
////      Serial.println(dir);
//  }
//  else if(motion < 1460){
//      pwm1 = map(motion, 1460, 1000, 0, 255); //map our speed to 0-255 range
//      digitalWrite(in3, HIGH);
//      digitalWrite(in4, LOW);
////      digitalWrite(enable2, HIGH);
//      digitalWrite(in1, HIGH);
//      digitalWrite(in2, LOW);
////      digitalWrite(enable1, HIGH);
////      Serial.println("dir2");
////      Serial.println(dir);
//  }else{
//      digitalWrite(in1, LOW);
//      digitalWrite(in2, LOW);
////      analogWrite(enable1, 0);
//      digitalWrite(in3, LOW);
//      digitalWrite(in4, LOW);
////      digitalWrite(enable2, 0);
////      Serial.println("dir3");
////      Serial.println(dir);
//  }
//
//  delay(50);
//  
//  if(dir == 0){
//      digitalWrite(in1, LOW);
//      digitalWrite(in2, LOW);
////      digitalWrite(enable1, 0);
//      digitalWrite(in3, LOW);
//      digitalWrite(in4, LOW);
////      digitalWrite(enable2, 0);
////      Serial.println("dir0");
////      Serial.println(dir);
//  }
//  else if(dir > 1530){ //right stick
//      pwm1 = map(dir, 1530, 2000, 0, 255); //map our speed to 0-255 range
//      digitalWrite(in1, LOW);
//      digitalWrite(in2, HIGH);
////      digitalWrite(enable1, HIGH);
//      digitalWrite(in3, LOW);
//      digitalWrite(in4, LOW);
////      digitalWrite(enable2, 0);
////      Serial.println("dir1");
////      Serial.println(dir);
//  }
//  else if(dir < 1460){
//      pwm1 = map(dir, 1460, 1000, 0, 255); //map our speed to 0-255 range
//      digitalWrite(in3, LOW);
//      digitalWrite(in4, HIGH);
////      digitalWrite(enable2, HIGH);
//      digitalWrite(in1, LOW);
//      digitalWrite(in2, LOW);
////      digitalWrite(enable1, 0);
////      Serial.println("dir2");
////      Serial.println(dir);
//  }else{
//      digitalWrite(in1, LOW);
//      digitalWrite(in2, LOW);
////      analogWrite(enable1, 0);
//      digitalWrite(in3, LOW);
//      digitalWrite(in4, LOW);
////      digitalWrite(enable2, 0);
////      Serial.println("dir3");
////      Serial.println(dir);
//  }

  
  
  delay(10);
}
