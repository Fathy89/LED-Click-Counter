// C++ code
//
int y; 
int x= 0 ; 
void setup()
{
  for (int i = 3; i<6;i++)
pinMode(i,OUTPUT); 

  pinMode(2,INPUT); 
}

void loop()
{
  y=digitalRead(2);
  if(y==1){
    if(x==0){
      digitalWrite(3,1) ;
      
      x++;
    delay(250); }
    else if (x==1){
      digitalWrite(4,1);
      x++;
    delay(250); } 
    else if (x==2){
      digitalWrite(5,1);
      x++; delay(250);} 
    else if(x==3){
      digitalWrite(3,0); 
      digitalWrite(4,0);
      digitalWrite(5,0);
      x=0; 
    delay(250);
  
    }
          }


}
