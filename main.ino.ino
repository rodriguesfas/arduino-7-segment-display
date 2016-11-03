
int i, j,segment[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x27,0x7f,0x67};
void setup() {
  // put your setup code here, to run once:
  for(i=0;i<14;i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for(i = 0; i< 10;i++){
    for(j= 0;j<10;j++){
      acende(i,j);
      delay(1000);      
    }  
  }
  
}

void acende(int y, int x){
  digitalWrite(0, ((segment[x]&0x01))?HIGH:LOW);
 digitalWrite(1, ((segment[x]&0x02))?HIGH:LOW);
 digitalWrite(2, ((segment[x]&0x04))?HIGH:LOW);
 digitalWrite(3, ((segment[x]&0x08))?HIGH:LOW);
 digitalWrite(4, ((segment[x]&0x10))?HIGH:LOW);
 digitalWrite(5, ((segment[x]&0x20))?HIGH:LOW);
 digitalWrite(6, ((segment[x]&0x40))?HIGH:LOW);
 digitalWrite(7, ((segment[y]&0x01))?HIGH:LOW);
 digitalWrite(8, ((segment[y]&0x02))?HIGH:LOW);
 digitalWrite(9, ((segment[y]&0x04))?HIGH:LOW);
 digitalWrite(10, ((segment[y]&0x08))?HIGH:LOW);
 digitalWrite(11, ((segment[y]&0x10))?HIGH:LOW);
 digitalWrite(12, ((segment[y]&0x20))?HIGH:LOW);
 digitalWrite(13, ((segment[y]&0x40))?HIGH:LOW);
}
