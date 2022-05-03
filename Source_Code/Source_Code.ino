int Censor = 2;
int Green1 = 3;
int Yellow1 = 4;
int Red1 = 5;
int Green2 = 6;
int Yellow2 = 7;
int Red2 = 8;
int Green3 = 9;
int Yellow3 = 10;
int Red3 = 11;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  digitalWrite(Red1, HIGH);
  digitalWrite(Red2, HIGH);
  digitalWrite(Red3, HIGH);
  digitalWrite(Censor, HIGH);
}

void loop() 
{
   if (digitalRead(2) == LOW)
   {
    digitalWrite(Green1, HIGH);
    digitalWrite(Yellow1, LOW);
    digitalWrite(Red1, LOW);
    delay(3000);
   } 
   else
   {
    //North
    //Green
    digitalWrite(Yellow1, HIGH);
    delay(2000);
    digitalWrite(Green1, HIGH);
    digitalWrite(Red1, LOW);
    digitalWrite(Yellow1, LOW);
    delay(5000);
    //Yellow
    digitalWrite(Yellow1, HIGH);
    digitalWrite(Green1, LOW);
    delay(2000);
    //Red
    digitalWrite(Red1, HIGH);
    digitalWrite(Green1, LOW);
    digitalWrite(Yellow1, LOW);
    
    //East
    //Green
    digitalWrite(Yellow2, HIGH);
    delay(2000);
    digitalWrite(Green2, HIGH);
    digitalWrite(Red2, LOW);
    digitalWrite(Yellow2, LOW);
    delay(5000);
    //Yellow 
    digitalWrite(Yellow2, HIGH);
    digitalWrite(Green2, LOW);
    delay(2000);
    //Red
    digitalWrite(Red2, HIGH);
    digitalWrite(Green2, LOW);
    digitalWrite(Yellow2, LOW);    

    //South
    //Green
    digitalWrite(Yellow3, HIGH);
    delay(2000);
    digitalWrite(Green3, HIGH);
    digitalWrite(Red3, LOW);
    digitalWrite(Yellow3, LOW);
    delay(5000);
    //Yellow
    digitalWrite(Yellow3, HIGH);
    digitalWrite(Green3, LOW);
    delay(2000);
    //Red
    digitalWrite(Red3, HIGH);
    digitalWrite(Green3, LOW);
    digitalWrite(Yellow3, LOW);     
   }
}
     
