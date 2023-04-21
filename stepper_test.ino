const int StepX = 2;
const int DirX = 5;
const int StepY = 3;
const int DirY = 6;
const int StepZ = 4;
const int DirZ = 7;


void setup() {
  pinMode(StepX,OUTPUT);
  pinMode(DirX,OUTPUT);
  pinMode(StepY,OUTPUT);
  pinMode(DirY,OUTPUT);
  pinMode(StepZ,OUTPUT);
  pinMode( DirZ,OUTPUT);

}

void loop() {
 digitalWrite(DirX, LOW); // set direction, HIGH for clockwise, LOW for anticlockwise
 digitalWrite(DirY, LOW);
 digitalWrite(DirZ, LOW);
 
 for(int x = 0; x<200 ; x++) { // loop for 200 steps
  digitalWrite(StepX,HIGH);
  delayMicroseconds(3500);
  digitalWrite(StepX,LOW); 
  delayMicroseconds(3500);
 }
delay(1000); // delay for 1 second

for(int x = 0; x<200; x++) { // loop for 200 steps
  digitalWrite(StepY,HIGH);
  delayMicroseconds(3500);
  digitalWrite(StepY,LOW); 
  delayMicroseconds(3500);
 }
delay(1000); // delay for 1 second

for(int x = 0; x<200; x++) { // loop for 200 steps
  digitalWrite(StepZ,HIGH);
  delayMicroseconds(3500);
  digitalWrite(StepZ,LOW); 
  delayMicroseconds(3500);
 }
delay(1000); // delay for 1 second

}
