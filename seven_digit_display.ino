# include "Arduino.h"


//------------Configuration--------------//

# define on LOW      //  LOW or HIGH
# define off HIGH    //  LOW or HIGH

int a = 52;          //  Digit a for pin 1
int b = 50;          //  Digit b for pin 2
int c = 48;          //  Digit c for pin 3
int d = 46;          //  Digit d for pin 4
int e = 44;          //  Digit e for pin 5
int f = 42;          //  Digit f for pin 6
int g = 40;          //  Digit g for pin 7
int dp = 38;         //  Digit dp for pin 8

//--------------------------------------//
/*

g  f  ca/cc  a  b
|  |    |    |  |
 ---------------
|       a       |
|f             b|
|               |
|       g       |
 ---------------
|               |
|e             c|
|               |
|       d       |
 --------------- #
|  |    |    |  |
e  d  ca/cc  c  DP


*/

void setup() {                
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);
}

void loop() {
  one();
  two();
  three();
  four();
  five();
  six();
  seven();
  eight();
  nine();
  zero();  
  dot();  
}

void one () {
  digitalWrite (b, on);
  digitalWrite (c, on);
  delay(1000);
  digitalWrite (b, off);
  digitalWrite (c, off);
}

void two () {
  digitalWrite (a, on);
  digitalWrite (b, on);
  digitalWrite (g, on);
  digitalWrite (e, on);
  digitalWrite (d, on);
  delay(1000);
  digitalWrite (a, off);
  digitalWrite (b, off);
  digitalWrite (g, off);
  digitalWrite (e, off);
  digitalWrite (d, off);
}

void three () {
  digitalWrite (a, on);
  digitalWrite (b, on);
  digitalWrite (g, on);
  digitalWrite (c, on);
  digitalWrite (d, on);
  delay(1000);
  digitalWrite (a, off);
  digitalWrite (b, off);
  digitalWrite (g, off);
  digitalWrite (c, off);
  digitalWrite (d, off);
}

void four () {
  digitalWrite (f, on);
  digitalWrite (b, on);
  digitalWrite (g, on);
  digitalWrite (c, on);
  delay(1000);
  digitalWrite (f, off);
  digitalWrite (b, off);
  digitalWrite (g, off);
  digitalWrite (c, off);
}

void five () {
  digitalWrite (a, on);
  digitalWrite (f, on);
  digitalWrite (g, on);
  digitalWrite (c, on);
  digitalWrite (d, on);
  delay(1000);
  digitalWrite (a, off);
  digitalWrite (f, off);
  digitalWrite (g, off);
  digitalWrite (c, off);
  digitalWrite (d, off);
}

void six () {
  digitalWrite (a, on);
  digitalWrite (f, on);
  digitalWrite (g, on);
  digitalWrite (c, on);
  digitalWrite (d, on);
  digitalWrite (e, on);
  delay(1000);
  digitalWrite (a, off);
  digitalWrite (f, off);
  digitalWrite (g, off);
  digitalWrite (c, off);
  digitalWrite (d, off);
  digitalWrite (e, off);
}

void seven () {
  digitalWrite (a, on);
  digitalWrite (b, on);
  digitalWrite (c, on);
  delay(1000);
  digitalWrite (a, off);
  digitalWrite (b, off);
  digitalWrite (c, off);
}

void eight () {
  digitalWrite (a, on);
  digitalWrite (b, on);
  digitalWrite (c, on);
  digitalWrite (d, on);
  digitalWrite (e, on);
  digitalWrite (f, on);
  digitalWrite (g, on);
  delay(1000);
  digitalWrite (a, off);
  digitalWrite (b, off);
  digitalWrite (c, off);
  digitalWrite (d, off);
  digitalWrite (e, off);
  digitalWrite (f, off);
  digitalWrite (g, off);
}

void nine () {
  digitalWrite (a, on);
  digitalWrite (b, on);
  digitalWrite (c, on);
  digitalWrite (d, on);
  digitalWrite (f, on);
  digitalWrite (g, on);
  delay(1000);
  digitalWrite (a, off);
  digitalWrite (b, off);
  digitalWrite (c, off);
  digitalWrite (d, off);
  digitalWrite (f, off);
  digitalWrite (g, off);
}

void zero () {
  digitalWrite (a, on);
  digitalWrite (b, on);
  digitalWrite (c, on);
  digitalWrite (d, on);
  digitalWrite (e, on);
  digitalWrite (f, on);
  delay(1000);
  digitalWrite (a, off);
  digitalWrite (b, off);
  digitalWrite (c, off);
  digitalWrite (d, off);
  digitalWrite (e, off);
  digitalWrite (f, off);
}

void dot () {
  digitalWrite (dp, on);
  delay(1000);
  digitalWrite (dp, off);
}

