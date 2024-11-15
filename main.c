#include <18F4550.h>
#fuses INTRC, PLL1, CPUDIV1, NOWDT, NOPROTECT, NOLVP, NOMCLR
// #device PASS_STRINGS = IN_RAM
#use delay(clock = 8M)
#use I2C(MASTER, I2C1, FAST, stream = SSD1306_STREAM)
#include "libraries/MOD_MPU6050.h"
#include "libraries/MOD_SSD1306OLED.h"
#include <math.h>


#define XOriginal 63
#define YOriginal 31
#define ReferenciaX 38
#define ReferenciaY 31

float Gx, Gy,
    Angulo; // Variables para almacenar los datos del acelerometro y giroscopio
int PosXAltura;

void DrawInterface();
void ClearEjeVertical();
void ClearCentro();

void main() {

  SSD1306_Begin(SSD1306_SWITCHCAPVCC, SSD1306_I2C_ADDRESS);

  SSD1306_ClearDisplay();
  SSD1306_Display();

  DrawInterface();

  MPU6050_init(); // Inicialización del acelerómetro y giroscopio

  while (TRUE) {

    SSD1306_Display();

    Gx = (MPU6050_get_Ax() * 90.0);
    Gy = (MPU6050_get_Ay() *
          90.0); //    Obtención de los datos del giroscopio, dice A pq está
                 //    invertido, en teoría deberían ser estos los datos del
                 //    acelerómetro, pero no

    if (Gx > 90.0)
      Gx = 90.0;
    if (Gx < -80.0)
      Gx = -80.0;

    if (Gy > 0) {
      Angulo = 180.0 + Gy;
      if (Angulo > 268.0)
        Angulo = 270.0;
    }
    if (Gy < 0) {
      Angulo = 180.0 + Gy;
      if (Angulo < 91.0)
        Angulo = 90.0;
    }

    signed int16 AnguloEntero = ((int16)Angulo / 10) * 10;
    float Rad = (float)(AnguloEntero * pi / 180.0);
    float PosX = 24 * sin(Rad);
    float PosY = 24 * cos(Rad);
    int PosYEntero = (int)(-PosX);
    int PosXEntero = (int)PosY;
    // printf("X: %i, Y: %i\n", PosXEntero,PosYEntero);

    ClearCentro(); // Hay que realizar una función que limpie la parte de la
                   // pantalla en que se actualice esta parte, el cículo central
                   // nada más
    SSD1306_DrawLine(Xoriginal + PosXEntero, YOriginal + PosYEntero, XOriginal,
                     YOriginal, 1);
    SSD1306_DrawLine(Xoriginal + PosXEntero, YOriginal + PosYEntero, XOriginal,
                     YOriginal + 1, 1);
    SSD1306_DrawLine(Xoriginal + PosXEntero, YOriginal + PosYEntero, XOriginal,
                     YOriginal + 2, 1);

    SSD1306_DrawLine(Xoriginal - PosXEntero, YOriginal - PosYEntero,
                     XOriginal + 1, YOriginal, 1);
    SSD1306_DrawLine(Xoriginal - PosXEntero, YOriginal - PosYEntero,
                     XOriginal + 1, YOriginal + 1, 1);
    SSD1306_DrawLine(Xoriginal - PosXEntero, YOriginal - PosYEntero,
                     XOriginal + 1, YOriginal + 2, 1);

    if (Gx > 0) {
      PosXAltura = 31 - (int)((Gx * 31.0) / 90.0);
    } else if (Gx < 0) {
      PosXAltura = 32 + (int)((Gx * 31.0) / -80.0);
    }

    ClearEjeVertical();

    SSD1306_DrawLine(121, PosXAltura, 127, PosXAltura, 1);
    SSD1306_DrawLine(123, PosXAltura + 1, 125, PosXAltura + 1, 1);

    SSD1306_DrawLine(0, PosXAltura, 6, PosXAltura, 1);
    SSD1306_DrawLine(2, PosXAltura + 1, 4, PosXAltura + 1, 1);
  }
}

void DrawInterface() {

  SSD1306_ClearDisplay();
  SSD1306_Display();
  SSD1306_DrawCircle(63, 31, 31);
  SSD1306_DrawCircle(63, 31, 32);
  SSD1306_DrawCircle(63, 31, 33);
  SSD1306_DrawCircle(63, 31, 50);
  SSD1306_DrawCircle(63, 31, 51);
  SSD1306_DrawCircle(63, 31, 54);
  SSD1306_FillRect(0, 0, 127, 16, 0);
  SSD1306_DrawLine(34, 46, 27, 49, 1);
  SSD1306_DrawLine(34, 47, 27, 50, 1);
  SSD1306_DrawLine(100, 49, 93, 46, 1);
  SSD1306_DrawLine(100, 50, 93, 47, 1);
  SSD1306_DrawLine(30, 31, 23, 31, 1);
  SSD1306_DrawLine(30, 32, 23, 32, 1);
  SSD1306_DrawLine(97, 31, 103, 31, 1);
  SSD1306_DrawLine(97, 32, 103, 32, 1);
  SSD1306_DrawChar(30, 54, 'L', 1);
  SSD1306_DrawChar(93, 54, 'R', 1);
  // SSD1306_DrawChar(0, 54, 'x',1);
}

void ClearEjeVertical() {

  for (int i = 0; i < 64; i++) {
    SSD1306_DrawLine(121, i, 127, i, 0);
    SSD1306_DrawLine(0, i, 6, i, 0);
  }
}

void ClearCentro() {
  //                         Xi              Yi               Xf Yf
  SSD1306_DrawLine(ReferenciaX + 20, ReferenciaY - 24, ReferenciaX + 29,
                   ReferenciaY - 24, 0); // 1
  SSD1306_DrawLine(ReferenciaX + 16, ReferenciaY - 23, ReferenciaX + 33,
                   ReferenciaY - 23, 0); // 2
  SSD1306_DrawLine(ReferenciaX + 14, ReferenciaY - 22, ReferenciaX + 35,
                   ReferenciaY - 22, 0); // 3
  SSD1306_DrawLine(ReferenciaX + 12, ReferenciaY - 21, ReferenciaX + 37,
                   ReferenciaY - 21, 0); // 4
  SSD1306_DrawLine(ReferenciaX + 11, ReferenciaY - 20, ReferenciaX + 38,
                   ReferenciaY - 20, 0); // 5
  SSD1306_DrawLine(ReferenciaX + 9, ReferenciaY - 19, ReferenciaX + 40,
                   ReferenciaY - 19, 0); // 6
  SSD1306_DrawLine(ReferenciaX + 8, ReferenciaY - 18, ReferenciaX + 41,
                   ReferenciaY - 18, 0); // 7
  SSD1306_DrawLine(ReferenciaX + 7, ReferenciaY - 17, ReferenciaX + 42,
                   ReferenciaY - 17, 0); // 8
  SSD1306_DrawLine(ReferenciaX + 6, ReferenciaY - 16, ReferenciaX + 43,
                   ReferenciaY - 16, 0); // 9
  SSD1306_DrawLine(ReferenciaX + 5, ReferenciaY - 15, ReferenciaX + 44,
                   ReferenciaY - 15, 0); // 10
  SSD1306_DrawLine(ReferenciaX + 5, ReferenciaY - 14, ReferenciaX + 44,
                   ReferenciaY - 14, 0); // 11
  SSD1306_DrawLine(ReferenciaX + 4, ReferenciaY - 13, ReferenciaX + 45,
                   ReferenciaY - 13, 0); // 12
  SSD1306_DrawLine(ReferenciaX + 3, ReferenciaY - 12, ReferenciaX + 46,
                   ReferenciaY - 12, 0); // 13
  SSD1306_DrawLine(ReferenciaX + 3, ReferenciaY - 11, ReferenciaX + 46,
                   ReferenciaY - 11, 0); // 14
  SSD1306_DrawLine(ReferenciaX + 2, ReferenciaY - 10, ReferenciaX + 47,
                   ReferenciaY - 10, 0); // 15
  SSD1306_DrawLine(ReferenciaX + 2, ReferenciaY - 9, ReferenciaX + 47,
                   ReferenciaY - 9, 0); // 16
  SSD1306_DrawLine(ReferenciaX + 1, ReferenciaY - 8, ReferenciaX + 48,
                   ReferenciaY - 8, 0); // 17
  SSD1306_DrawLine(ReferenciaX + 1, ReferenciaY - 7, ReferenciaX + 48,
                   ReferenciaY - 7, 0); // 18
  SSD1306_DrawLine(ReferenciaX + 1, ReferenciaY - 6, ReferenciaX + 48,
                   ReferenciaY - 6, 0); // 19
  SSD1306_DrawLine(ReferenciaX + 1, ReferenciaY - 5, ReferenciaX + 48,
                   ReferenciaY - 5, 0); // 20
  SSD1306_DrawLine(ReferenciaX, ReferenciaY - 4, ReferenciaX + 49,
                   ReferenciaY - 4, 0); // 21
  SSD1306_DrawLine(ReferenciaX, ReferenciaY - 3, ReferenciaX + 49,
                   ReferenciaY - 3, 0); // 22
  SSD1306_DrawLine(ReferenciaX, ReferenciaY - 2, ReferenciaX + 49,
                   ReferenciaY - 2, 0); // 23
  SSD1306_DrawLine(ReferenciaX, ReferenciaY - 1, ReferenciaX + 49,
                   ReferenciaY - 1, 0); // 24
  SSD1306_DrawLine(ReferenciaX, ReferenciaY, ReferenciaX + 49, ReferenciaY,
                   0); // 25

  SSD1306_DrawLine(ReferenciaX, ReferenciaY + 1, ReferenciaX + 49,
                   ReferenciaY + 1, 0); // 25
  SSD1306_DrawLine(ReferenciaX, ReferenciaY + 2, ReferenciaX + 49,
                   ReferenciaY + 2, 0); // 24
  SSD1306_DrawLine(ReferenciaX, ReferenciaY + 3, ReferenciaX + 49,
                   ReferenciaY + 3, 0); // 23
  SSD1306_DrawLine(ReferenciaX, ReferenciaY + 4, ReferenciaX + 49,
                   ReferenciaY + 4, 0); // 22
  SSD1306_DrawLine(ReferenciaX, ReferenciaY + 5, ReferenciaX + 49,
                   ReferenciaY + 5, 0); // 21
  SSD1306_DrawLine(ReferenciaX + 1, ReferenciaY + 6, ReferenciaX + 48,
                   ReferenciaY + 6, 0); // 20
  SSD1306_DrawLine(ReferenciaX + 1, ReferenciaY + 7, ReferenciaX + 48,
                   ReferenciaY + 7, 0); // 19
  SSD1306_DrawLine(ReferenciaX + 1, ReferenciaY + 8, ReferenciaX + 48,
                   ReferenciaY + 8, 0); // 18
  SSD1306_DrawLine(ReferenciaX + 1, ReferenciaY + 9, ReferenciaX + 48,
                   ReferenciaY + 9, 0); // 17
  SSD1306_DrawLine(ReferenciaX + 2, ReferenciaY + 10, ReferenciaX + 47,
                   ReferenciaY + 10, 0); // 16
  SSD1306_DrawLine(ReferenciaX + 2, ReferenciaY + 11, ReferenciaX + 47,
                   ReferenciaY + 11, 0); // 15
  SSD1306_DrawLine(ReferenciaX + 3, ReferenciaY + 12, ReferenciaX + 46,
                   ReferenciaY + 12, 0); // 14
  SSD1306_DrawLine(ReferenciaX + 3, ReferenciaY + 13, ReferenciaX + 46,
                   ReferenciaY + 13, 0); // 13
  SSD1306_DrawLine(ReferenciaX + 4, ReferenciaY + 14, ReferenciaX + 45,
                   ReferenciaY + 14, 0); // 12
  SSD1306_DrawLine(ReferenciaX + 5, ReferenciaY + 15, ReferenciaX + 44,
                   ReferenciaY + 15, 0); // 11
  SSD1306_DrawLine(ReferenciaX + 5, ReferenciaY + 16, ReferenciaX + 44,
                   ReferenciaY + 16, 0); // 10
  SSD1306_DrawLine(ReferenciaX + 6, ReferenciaY + 17, ReferenciaX + 43,
                   ReferenciaY + 17, 0); // 9
  SSD1306_DrawLine(ReferenciaX + 7, ReferenciaY + 18, ReferenciaX + 42,
                   ReferenciaY + 18, 0); // 8
  SSD1306_DrawLine(ReferenciaX + 8, ReferenciaY + 19, ReferenciaX + 41,
                   ReferenciaY + 19, 0); // 7
  SSD1306_DrawLine(ReferenciaX + 9, ReferenciaY + 20, ReferenciaX + 40,
                   ReferenciaY + 20, 0); // 6
  SSD1306_DrawLine(ReferenciaX + 11, ReferenciaY + 21, ReferenciaX + 38,
                   ReferenciaY + 21, 0); // 5
  SSD1306_DrawLine(ReferenciaX + 12, ReferenciaY + 22, ReferenciaX + 37,
                   ReferenciaY + 22, 0); // 4
  SSD1306_DrawLine(ReferenciaX + 14, ReferenciaY + 23, ReferenciaX + 35,
                   ReferenciaY + 23, 0); // 3
  SSD1306_DrawLine(ReferenciaX + 16, ReferenciaY + 24, ReferenciaX + 33,
                   ReferenciaY + 24, 0); // 2
  SSD1306_DrawLine(ReferenciaX + 20, ReferenciaY + 25, ReferenciaX + 29,
                   ReferenciaY + 25, 0); // 1
}