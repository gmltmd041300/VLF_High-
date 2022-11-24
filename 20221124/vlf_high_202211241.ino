// C++ code
//

#define F_Sonar 8
#define R_Sonar 10
#define L_Sonar 11

// 차량 사이즈 

float robot_width = 200; //robot의 폭
float mazor_width = 500;
float mazor_widht_tolerance = 40;


int flag_mazor_1 = 0; // 1이면 1번 구간에 내가 위치 해 있음.

measure_width = L_distance + robot_width + R_distance

if(measure_width >= (mazor_width- mazor_width_tolerance))&&(measure_width <= (mazor_width + mazor_width_tolerance))
  (
  if((F_distacne>mazor_width)&&((F_distacne<mazor_width+400))
     (
       flag_mazor_1 = 1;
       )
     )
  else
  (
    flag_mazor_1= 0;
    )
  
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(F_Sonar, OUTPUT);
  pinMode(R_Sonar, OUTPUT);
  pinMode(L_Sonar, OUTPUT);

   float F_Soanr_sensor()
{
  float duration = 0.0;
  float distance = 0.0;
  pinMode(F_Sonar, OUTPUT);
  digitalWrite(F_Sonar, LOW);
  digitalWrite(F_Sonar, HIGH);
  delay(10);
  digitalWrite(F_Soanr, LOW);
  pinMode(F_Sonar, INPUT);
  duration = pulseIn(F_Soanr, HIGH);
  distance = (duration*340.0)/2.0/10000.0;
  return distacne 
}

float R_Soanr_sensor()
{
  float duration = 0.0;
  float distance = 0.0;
  pinMode(R_Sonar, OUTPUT);
  digitalWrite(R_Sonar, LOW);
  digitalWrite(R_Sonar, HIGH);
  delay(10);
  digitalWrite(R_Soanr, LOW);
  pinMode(R_Sonar, INPUT);
  duration = pulseIn(R_Soanr, HIGH);
  distance = (duration*340.0)/2.0/10000.0;
  return distacne 
}

float L_Soanr_sensor()
{
  float duration = 0.0;
  float distance = 0.0;
  pinMode(L_Sonar, OUTPUT);
  digitalWrite(L_Sonar, LOW);
  digitalWrite(L_Sonar, HIGH);
  delay(10);
  digitalWrite(L_Soanr, LOW);
  pinMode(L_Sonar, INPUT);
  duration = pulseIn(L_Soanr, HIGH);
  distance = (duration*340.0)/2.0/10000.0;
  return distacne 
} 
}

void loop()
{
  float L_distacne, F_distacne, R_distance;
  L_distacne = L_Soanr_sensor();
  R_distance = R_Sonar_sensor();
  F_distacne = F_Soanr_sensor();
  
  Serial.print("  L:"); Serial.print(L_distacne); 
  Serial.print("  F:"); Serial.print(F_distacne); 
  Serial.print("  R:"); Serial.print(R_distance);

