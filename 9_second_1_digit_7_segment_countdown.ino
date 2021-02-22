const int LED1 = 1; 
const int LED2 = 2; 
const int LED3 = 3;
const int LED4 = 4;
const int LED5 = 5;
const int LED6 = 6;
const int LED7 = 7;
const int LED10 = 10;
const int LED11 = 11;
void setup() {
  // put your setup code here, to run once:
pinMode (LED1 , OUTPUT);
pinMode (LED2 , OUTPUT);
pinMode (LED3 , OUTPUT);
pinMode (LED4 , OUTPUT);
pinMode (LED5 , OUTPUT);
pinMode (LED6 , OUTPUT);
pinMode (LED7 , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // digitalWrite (LED, HIGH);
  // digitalWrite (LED, LOW);
//red led
digitalWrite (LED10, HIGH);
//9
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
digitalWrite (LED3, HIGH);
digitalWrite (LED6, HIGH);
digitalWrite (LED7, HIGH);
delay (1000);
//9 off
digitalWrite (LED1, LOW);
digitalWrite (LED2, LOW);
digitalWrite (LED3, LOW);
digitalWrite (LED6, LOW);
digitalWrite (LED7, LOW);

// 8
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
digitalWrite (LED3, HIGH);
digitalWrite (LED4, HIGH);
digitalWrite (LED5, HIGH);
digitalWrite (LED6, HIGH);
digitalWrite (LED7, HIGH);
delay (1000);
//8 off
digitalWrite (LED1, LOW);
digitalWrite (LED2, LOW);
digitalWrite (LED3, LOW);
digitalWrite (LED4, LOW);
digitalWrite (LED5, LOW);
digitalWrite (LED6, LOW);
digitalWrite (LED7, LOW);

//7
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
digitalWrite (LED3, HIGH);
delay (1000);
//7 off
digitalWrite (LED1, LOW);
digitalWrite (LED2, LOW);
digitalWrite (LED3, LOW);

//6 
digitalWrite (LED5, HIGH);
digitalWrite (LED7, HIGH);
digitalWrite (LED6, HIGH);
digitalWrite (LED4, HIGH);
digitalWrite (LED3, HIGH);
delay(1000);
//6 off
digitalWrite (LED6, LOW);
digitalWrite (LED7, LOW);
digitalWrite (LED5, LOW);
digitalWrite (LED4, LOW);
digitalWrite (LED3, LOW);

// 5
digitalWrite (LED1, HIGH);
digitalWrite (LED3, HIGH);
digitalWrite (LED4, HIGH);
digitalWrite (LED6, HIGH);
digitalWrite (LED7, HIGH);
delay(1000);
// 5 off
digitalWrite (LED1, LOW);
digitalWrite (LED3, LOW);
digitalWrite (LED4, LOW);
digitalWrite (LED6, LOW);
digitalWrite (LED7, LOW);

//4
digitalWrite (LED2, HIGH);
digitalWrite (LED3, HIGH);
digitalWrite (LED6, HIGH);
digitalWrite (LED7, HIGH);
delay(1000);
//4 off
digitalWrite (LED2, LOW);
digitalWrite (LED3, LOW);
digitalWrite (LED6, LOW);
digitalWrite (LED7, LOW);

// 3
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
digitalWrite (LED3, HIGH);
digitalWrite (LED4, HIGH);
digitalWrite (LED7, HIGH);
delay(1000);
//3 off
digitalWrite (LED1, LOW);
digitalWrite (LED2, LOW);
digitalWrite (LED3, LOW);
digitalWrite (LED4, LOW);
digitalWrite (LED7, LOW);

//2
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
digitalWrite (LED4, HIGH);
digitalWrite (LED5, HIGH);
digitalWrite (LED7, HIGH);
delay(1000);
//2 off
digitalWrite (LED1, LOW);
digitalWrite (LED2, LOW);
digitalWrite (LED4, LOW);
digitalWrite (LED5, LOW);
digitalWrite (LED7, LOW);

//1 
digitalWrite (LED2, HIGH);
digitalWrite (LED3, HIGH);
delay(1000);
//1 off
digitalWrite (LED2, LOW);
digitalWrite (LED3, LOW);

//0
digitalWrite (LED1, HIGH);
digitalWrite (LED2, HIGH);
digitalWrite (LED3, HIGH);
digitalWrite (LED4, HIGH);
digitalWrite (LED5, HIGH);
digitalWrite (LED6, HIGH);
digitalWrite (LED10, LOW);
digitalWrite (LED11, HIGH);
delay(1000000);
}
