//2번과 3번 핀은 모터 제어에 관한 핀
int L_1 = 3;
int L_2 = 2;
int R_1 = 7;
int R_2 = 4;

//5번 핀은 모터의 힘을 설정해주는 핀 
int L_en = 5; 
int R_en = 6; 

void setup(){
  pinMode(L_1, OUTPUT);
  pinMode(L_2, OUTPUT); //3, 4번 제어핀들은 핀모드를 출력으로 설정   
  pinMode(R_1, OUTPUT);
  pinMode(R_2, OUTPUT);  
  analogWrite(L_en, 150);
  analogWrite(R_en, 150);
}                   

void front(int t){
 //Go: 핀 3, 핀 4 에 신호를 다르게 하면 전진
  digitalWrite(L_1, HIGH);
  digitalWrite(L_2, LOW);
  digitalWrite(R_1, HIGH);
  digitalWrite(R_2, LOW);
  delay(t); //5sec
}
void back (int t){
//Back : 핀 3, 핀 4에 신호를 다르게 하면 후진 /
  digitalWrite(L_1, LOW);
  digitalWrite(L_2, HIGH);
  digitalWrite(R_1, LOW);
  digitalWrite(R_2, HIGH);
  delay(t); //5sec
}
void right (int t, int c, int p){
//Brake (Stop) 핀 3, 4에 똑같이 HIGH를 주거나 LOW을 주면 멈춘다.
  digitalWrite(L_1, HIGH);
  digitalWrite(L_2, LOW);
  digitalWrite(R_2, HIGH);
  digitalWrite(R_1, LOW);
  analogWrite(L_en, c);
  analogWrite(R_en, p);
  delay(t); //5sec
}

void left (int t, int c, int p){
  digitalWrite(L_2, HIGH);
  digitalWrite(L_1, LOW);
  digitalWrite(R_1, HIGH);
  digitalWrite(R_2, LOW);
  analogWrite(L_en, c);
  analogWrite(R_en, p);
  delay(t); //
  }

void Stop (int t){
  digitalWrite(L_1, LOW);
  digitalWrite(L_2, LOW);
  digitalWrite(R_1, LOW);
  digitalWrite(R_2, LOW);
  delay(t); //5sec
 
}
void loop(){
  front(1500);
  right(650, 150, 80);
  front(1500);
  back(1000);
  left(650, 150, 80);
  front(1500);
  Stop(5000); 
}
