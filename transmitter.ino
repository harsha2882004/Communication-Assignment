int trans = 2;
int t = 300;

int data[] = {1, 0, 1, 1, 0, 0, 1};
             
void setup()
{
  pinMode(trans, OUTPUT);
}

void loop()
{
  for (int i = 0; i < sizeof(data) / sizeof(data[0]); i++){
    digitalWrite(trans, data[i]);
  	delay(t);
  }
}
