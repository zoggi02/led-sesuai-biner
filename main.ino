int led[] = {2,3,4,5,6,7,8,9};   // array
void setup()
{
for (int i = 0; i < 8; i++) {
    pinMode(led[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop() 
{ 
  input(44,50);
} 

void input(int a,int b) {     //fungsi masukkan nilai awal dan akhir
  for (int i=a; i<=b; i++) {
    biner(i);
    Serial.println(i);
    delay(5000);
  }
}
void biner(int n) {           //fungsi biner
  for (int i=0; i<8; i++) {
    if (n%2)
      digitalWrite(led[i], HIGH);
    else
      digitalWrite(led[i], LOW);
    n/=2;
  } 
}

