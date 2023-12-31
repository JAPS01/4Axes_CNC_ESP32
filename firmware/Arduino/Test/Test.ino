#define SER 21    // pin 7 a SER del 74HC595
#define RCLK 22   // pin 8 a RCLK del 74HC595
#define SRCLK 17  // pin 9 a SRCLK del 74HC595

#define LED0 1    // valor equivalente en decimal al LED0
#define LED1 2    // valor equivalente en decimal al LED1
#define LED2 4    // valor equivalente en decimal al LED2
#define LED3 8    // valor equivalente en decimal al LED3
#define LED4 16   // valor equivalente en decimal al LED4
#define LED5 32   // valor equivalente en decimal al LED5
#define LED6 64   // valor equivalente en decimal al LED6
#define LED7 128  // valor equivalente en decimal al LED7


void setup() {
  pinMode(SER, OUTPUT);    // pin establecido como salida
  pinMode(RCLK, OUTPUT);   // pin establecido como salida
  pinMode(SRCLK, OUTPUT);  // pin establecido como salida
}

void loop() {
  digitalWrite(RCLK, LOW);                             // nivel bajo a registro de almacenamiento
  shiftOut(SER, SRCLK, MSBFIRST, B00000111);  // enciende LED0, LED1 y LED7
  digitalWrite(RCLK, HIGH);                            // nivel alto a registro de almacenamiento
  delay(500);                                          // demora de medio segundo
  digitalWrite(RCLK, LOW);                             // nivel bajo a registro de almacenamiento
  shiftOut(SER, SRCLK, MSBFIRST, B00000000);           // enciende LED0, LED1 y LED7
  digitalWrite(RCLK, HIGH);                            // nivel alto a registro de almacenamiento
  delay(500);                                          // demora de medio segundo

}
  