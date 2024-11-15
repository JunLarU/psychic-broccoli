#ifndef _REQUIRED_REGISTRIES//Guardia de inclusión en caso de que pragma once no funcione
#define _REQUIRED_REGISTRIES//Guardia de inclusión
    #ifndef PIN_SIZE
    #define PIN_SIZE 40
    #endif 

    /*-_-_-I/O DE DATOS-_-_-*/

    // Puerto A
    /*----BYTES----*/
    #BYTE PORTA   = 0xF80     // Entrada de puerto A
    #BYTE LATA    = 0xF89     // Salida de puerto A
    #BYTE TRISA   = 0xF92     // Configuración de puerto A 
    /*----BITS----*/
    //PORTA
    #BIT PORTA0   = 0xF80.0   // BYTE: PORTA   |  Entrada de puerto A pin 0
    #BIT PORTA1   = 0xF80.1   // BYTE: PORTA   |  Entrada de puerto A pin 1
    #BIT PORTA2   = 0xF80.2   // BYTE: PORTA   |  Entrada de puerto A pin 2
    #BIT PORTA3   = 0xF80.3   // BYTE: PORTA   |  Entrada de puerto A pin 3
    #BIT PORTA4   = 0xF80.4   // BYTE: PORTA   |  Entrada de puerto A pin 4
    #BIT PORTA5   = 0xF80.5   // BYTE: PORTA   |  Entrada de puerto A pin 5
    #BIT PORTA6   = 0xF80.6   // BYTE: PORTA   |  Entrada de puerto A pin 6
    #BIT PORTA7   = 0xF80.7   // BYTE: PORTA   |  Entrada de puerto A pin 7
    //LATA
    #BIT LATA0    = 0xF89.0   // BYTE: LATA    |  Salida de puerto A pin 0
    #BIT LATA1    = 0xF89.1   // BYTE: LATA    |  Salida de puerto A pin 1
    #BIT LATA2    = 0xF89.2   // BYTE: LATA    |  Salida de puerto A pin 2
    #BIT LATA3    = 0xF89.3   // BYTE: LATA    |  Salida de puerto A pin 3
    #BIT LATA4    = 0xF89.4   // BYTE: LATA    |  Salida de puerto A pin 4
    #BIT LATA5    = 0xF89.5   // BYTE: LATA    |  Salida de puerto A pin 5
    #BIT LATA6    = 0xF89.6   // BYTE: LATA    |  Salida de puerto A pin 6
    #BIT LATA7    = 0xF89.7   // BYTE: LATA    |  Salida de puerto A pin 7
    //TRISA
    #BIT TRISA0   = 0xF92.0   // BYTE: TRISA   |  Configuración de puerto A pin 0
    #BIT TRISA1   = 0xF92.1   // BYTE: TRISA   |  Configuración de puerto A pin 1
    #BIT TRISA2   = 0xF92.2   // BYTE: TRISA   |  Configuración de puerto A pin 2
    #BIT TRISA3   = 0xF92.3   // BYTE: TRISA   |  Configuración de puerto A pin 3
    #BIT TRISA4   = 0xF92.4   // BYTE: TRISA   |  Configuración de puerto A pin 4
    #BIT TRISA5   = 0xF92.5   // BYTE: TRISA   |  Configuración de puerto A pin 5
    #BIT TRISA6   = 0xF92.6   // BYTE: TRISA   |  Configuración de puerto A pin 6
    #BIT TRISA7   = 0xF92.7   // BYTE: TRISA   |  Configuración de puerto A pin 7

    // Puerto B
    /*----BYTES----*/
    #BYTE PORTB   = 0xF81     // Entrada de puerto B
    #BYTE LATB    = 0xF8A     // Salida de puerto B
    #BYTE TRISB   = 0xF93     // Configuración de puerto B 
    /*----BITS----*/
    //PORTB
    #BIT PORTB0   = 0xF81.0   // BYTE: PORTB   |  Entrada de puerto B pin 0
    #BIT PORTB1   = 0xF81.1   // BYTE: PORTB   |  Entrada de puerto B pin 1
    #BIT PORTB2   = 0xF81.2   // BYTE: PORTB   |  Entrada de puerto B pin 2
    #BIT PORTB3   = 0xF81.3   // BYTE: PORTB   |  Entrada de puerto B pin 3
    #BIT PORTB4   = 0xF81.4   // BYTE: PORTB   |  Entrada de puerto B pin 4
    #BIT PORTB5   = 0xF81.5   // BYTE: PORTB   |  Entrada de puerto B pin 5
    #BIT PORTB6   = 0xF81.6   // BYTE: PORTB   |  Entrada de puerto B pin 6
    #BIT PORTB7   = 0xF81.7   // BYTE: PORTB   |  Entrada de puerto B pin 7
    //LATB
    #BIT LATB0    = 0xF8A.0   // BYTE: LATB    |  Salida de puerto B pin 0
    #BIT LATB1    = 0xF8A.1   // BYTE: LATB    |  Salida de puerto B pin 1
    #BIT LATB2    = 0xF8A.2   // BYTE: LATB    |  Salida de puerto B pin 2
    #BIT LATB3    = 0xF8A.3   // BYTE: LATB    |  Salida de puerto B pin 3
    #BIT LATB4    = 0xF8A.4   // BYTE: LATB    |  Salida de puerto B pin 4
    #BIT LATB5    = 0xF8A.5   // BYTE: LATB    |  Salida de puerto B pin 5
    #BIT LATB6    = 0xF8A.6   // BYTE: LATB    |  Salida de puerto B pin 6
    #BIT LATB7    = 0xF8A.7   // BYTE: LATB    |  Salida de puerto B pin 7
    //TRISB
    #BIT TRISB0   = 0xF93.0   // BYTE: TRISB   |  Configuración de puerto B pin 0
    #BIT TRISB1   = 0xF93.1   // BYTE: TRISB   |  Configuración de puerto B pin 1
    #BIT TRISB2   = 0xF93.2   // BYTE: TRISB   |  Configuración de puerto B pin 2
    #BIT TRISB3   = 0xF93.3   // BYTE: TRISB   |  Configuración de puerto B pin 3
    #BIT TRISB4   = 0xF93.4   // BYTE: TRISB   |  Configuración de puerto B pin 4
    #BIT TRISB5   = 0xF93.5   // BYTE: TRISB   |  Configuración de puerto B pin 5
    #BIT TRISB6   = 0xF93.6   // BYTE: TRISB   |  Configuración de puerto B pin 6
    #BIT TRISB7   = 0xF93.7   // BYTE: TRISB   |  Configuración de puerto B pin 7

    // Puerto C
    #BYTE PORTC   = 0xF82     // Entrada de puerto C
    #BYTE LATC    = 0xF8B     // Salida de puerto C
    #BYTE TRISC   = 0xF94     // Configuración de puerto C
    /*----BITS----*/
    //PORTC
    #BIT PORTC0   = 0xF82.0   // BYTE: PORTC   |  Entrada de puerto C pin 0
    #BIT PORTC1   = 0xF82.1   // BYTE: PORTC   |  Entrada de puerto C pin 1
    #BIT PORTC2   = 0xF82.2   // BYTE: PORTC   |  Entrada de puerto C pin 2
    #BIT PORTC3   = 0xF82.3   // BYTE: PORTC   |  Entrada de puerto C pin 3
    #BIT PORTC4   = 0xF82.4   // BYTE: PORTC   |  Entrada de puerto C pin 4
    #BIT PORTC5   = 0xF82.5   // BYTE: PORTC   |  Entrada de puerto C pin 5
    #BIT PORTC6   = 0xF82.6   // BYTE: PORTC   |  Entrada de puerto C pin 6
    #BIT PORTC7   = 0xF82.7   // BYTE: PORTC   |  Entrada de puerto C pin 7
    //LATC
    #BIT LATC0    = 0xF8B.0   // BYTE: LATC    |  Salida de puerto C pin 0
    #BIT LATC1    = 0xF8B.1   // BYTE: LATC    |  Salida de puerto C pin 1
    #BIT LATC2    = 0xF8B.2   // BYTE: LATC    |  Salida de puerto C pin 2
    #BIT LATC3    = 0xF8B.3   // BYTE: LATC    |  Salida de puerto C pin 3
    #BIT LATC4    = 0xF8B.4   // BYTE: LATC    |  Salida de puerto C pin 4
    #BIT LATC5    = 0xF8B.5   // BYTE: LATC    |  Salida de puerto C pin 5
    #BIT LATC6    = 0xF8B.6   // BYTE: LATC    |  Salida de puerto C pin 6
    #BIT LATC7    = 0xF8B.7   // BYTE: LATC    |  Salida de puerto C pin 7
    //TRISC
    #BIT TRISC0   = 0xF94.0   // BYTE: TRISC   |  Configuración de puerto C pin 0
    #BIT TRISC1   = 0xF94.1   // BYTE: TRISC   |  Configuración de puerto C pin 1
    #BIT TRISC2   = 0xF94.2   // BYTE: TRISC   |  Configuración de puerto C pin 2
    #BIT TRISC3   = 0xF94.3   // BYTE: TRISC   |  Configuración de puerto C pin 3
    #BIT TRISC4   = 0xF94.4   // BYTE: TRISC   |  Configuración de puerto C pin 4
    #BIT TRISC5   = 0xF94.5   // BYTE: TRISC   |  Configuración de puerto C pin 5
    #BIT TRISC6   = 0xF94.6   // BYTE: TRISC   |  Configuración de puerto C pin 6
    #BIT TRISC7   = 0xF94.7   // BYTE: TRISC   |  Configuración de puerto C pin 7
    
    #ifdef PIN_SIZE
        #if PIN_SIZE > 28

            // Puerto D
            #BYTE PORTD   = 0xF83     // Entrada de puerto D
            #BYTE LATD    = 0xF8C     // Salida de puerto D
            #BYTE TRISD   = 0xF95     // Configuración de puerto D
            /*----BITS----*/
            //PORTD
            #BIT PORTD0   = 0xF83.0   // BYTE: PORTD   |  Entrada de puerto D pin 0
            #BIT PORTD1   = 0xF83.1   // BYTE: PORTD   |  Entrada de puerto D pin 1
            #BIT PORTD2   = 0xF83.2   // BYTE: PORTD   |  Entrada de puerto D pin 2
            #BIT PORTD3   = 0xF83.3   // BYTE: PORTD   |  Entrada de puerto D pin 3
            #BIT PORTD4   = 0xF83.4   // BYTE: PORTD   |  Entrada de puerto D pin 4
            #BIT PORTD5   = 0xF83.5   // BYTE: PORTD   |  Entrada de puerto D pin 5
            #BIT PORTD6   = 0xF83.6   // BYTE: PORTD   |  Entrada de puerto D pin 6
            #BIT PORTD7   = 0xF83.7   // BYTE: PORTD   |  Entrada de puerto D pin 7
            //LATD
            #BIT LATD0    = 0xF8C.0   // BYTE: LATD    |  Salida de puerto D pin 0
            #BIT LATD1    = 0xF8C.1   // BYTE: LATD    |  Salida de puerto D pin 1
            #BIT LATD2    = 0xF8C.2   // BYTE: LATD    |  Salida de puerto D pin 2
            #BIT LATD3    = 0xF8C.3   // BYTE: LATD    |  Salida de puerto D pin 3
            #BIT LATD4    = 0xF8C.4   // BYTE: LATD    |  Salida de puerto D pin 4
            #BIT LATD5    = 0xF8C.5   // BYTE: LATD    |  Salida de puerto D pin 5
            #BIT LATD6    = 0xF8C.6   // BYTE: LATD    |  Salida de puerto D pin 6
            #BIT LATD7    = 0xF8C.7   // BYTE: LATD    |  Salida de puerto D pin 7
            //TRISD
            #BIT TRISD0   = 0xF95.0   // BYTE: TRISD   |  Configuración de puerto D pin 0
            #BIT TRISD1   = 0xF95.1   // BYTE: TRISD   |  Configuración de puerto D pin 1
            #BIT TRISD2   = 0xF95.2   // BYTE: TRISD   |  Configuración de puerto D pin 2
            #BIT TRISD3   = 0xF95.3   // BYTE: TRISD   |  Configuración de puerto D pin 3
            #BIT TRISD4   = 0xF95.4   // BYTE: TRISD   |  Configuración de puerto D pin 4
            #BIT TRISD5   = 0xF95.5   // BYTE: TRISD   |  Configuración de puerto D pin 5
            #BIT TRISD6   = 0xF95.6   // BYTE: TRISD   |  Configuración de puerto D pin 6
            #BIT TRISD7   = 0xF95.7   // BYTE: TRISD   |  Configuración de puerto D pin 7

            // Puerto E
            #BYTE PORTE   = 0xF84     // Entrada de puerto E
            #BYTE LATE    = 0xF8D    // Salida de puerto E
            #BYTE TRISE   = 0xF96     // Configuración de puerto E
            /*----BITS----*/
            //PORTE
            #BIT PORTE0   = 0xF84.0   // BYTE: PORTE   |  Configuración de puerto E pin 0
            #BIT PORTE1   = 0xF84.1   // BYTE: PORTE   |  Configuración de puerto E pin 1
            #BIT PORTE2   = 0xF84.2   // BYTE: PORTE   |  Configuración de puerto E pin 2
            #BIT PORTE3   = 0xF84.3   // BYTE: PORTE   |  Configuración de puerto E pin 3
            #BIT PORTE7   = 0xF84.7   // BYTE: PORTE   |  Configuración de puerto E pin 7
            //LATE
            #BIT LATE0    = 0xF8D.0   // BYTE: LATE    |  Salida de puerto E pin 0
            #BIT LATE1    = 0xF8D.1   // BYTE: LATE    |  Salida de puerto E pin 1
            #BIT LATE2    = 0xF8D.2   // BYTE: LATE    |  Salida de puerto E pin 2
            #BIT LATE3    = 0xF8D.3   // BYTE: LATE    |  Salida de puerto E pin 3
            //TRISE
            #BIT TRISE0   = 0xF96.0   // BYTE: TRISE   |  Configuración de puerto E pin 0
            #BIT TRISE1   = 0xF96.1   // BYTE: TRISE   |  Configuración de puerto E pin 1
            #BIT TRISE2   = 0xF96.2   // BYTE: TRISE   |  Configuración de puerto E pin 2
        #endif
    #endif

    /*-_-_-_-_-_-_-_-_-_-_-_-_-_-*/

    /*-_-_-ADC-_-_-*/
    /*----BYTES----*/
    #BYTE ADCON0  = 0xFC2      // ConfiguraciÃ³n ADC
    #BYTE ADCON1  = 0xFC1      // ConfiguraciÃ³n ADC
    #BYTE ADCON2  = 0xFC0      // ConfiguraciÃ³n ADC
    #BYTE ADRESH  = 0xFC4     // Dato alto ADC
    #BYTE ADRESL  = 0xFC3     // Dato bajo ADC
    /*----BITS----*/
    #BIT ADON     = 0xFC2.0   // BYTE: ADCON0  |  Habilitar ADC
    #BIT ADONE    = 0xFF2.4   // BYTE: ADCON0  |  Bandera de conversión
    #BIT ADIF     = 0xF9E.6   // BYTE: PIR1    |  Bandera de interrupción ADC
    #BIT ADIE     = 0xF9D.6   // BYTE: PIE1    |  Habilitar interrupción ADC
    #BIT ADIP     = 0xF9F.6   // BYTE: IPR1    |  Prioridad interrupción ADC
    #BIT VCFG1    = 0xFC1.5   // BYTE: ADCON1  |  Configuración de referencia (Vref-)
    #BIT VCFG0    = 0xFC1.4   // BYTE: ADCON1  |  Configuración de referencia (Vref+)
    #BIT ADFM     = 0xFC0.7   // BYTE: ADCON2  |  Justificación de datos

    /*-_-_-_-_-_-_-_-_-_-_-_-_-_-*/

    /*-_-_-TIMERS-_-_-*/
    //Timer 0
    /*----BYTES----*/
    #BYTE T0CON   = 0xFD5     // Configuración Timer0
    #BYTE TMR0L   = 0xFD6     // Dato bajo Timer0
    #BYTE TMR0H   = 0xFD7     // Dato alto Timer0
    /*----BITS----*/
    #BIT TMR0ON   = 0xFD5.7   // BYTE: T0CON   |  Habilitar Timer0
    #BIT TMR0IE   = 0xFF2.5   // BYTE: INTCON  |  Habilitar interrupción Timer0
    #BIT TMR0IF   = 0xFF2.2   // BYTE: INTCON  |  Bandera interrupción Timer0
    #BIT TMR0IP   = 0xFF1.2   // BYTE: INTCON2 |  Prioridad interrupción Timer0

    //Timer 1
    /*----BYTES----*/
    #BYTE T1CON   = 0xFCD     // Configuración Timer1
    #BYTE TMR1L   = 0xFCE     // Dato bajo Timer1
    #BYTE TMR1H   = 0xFCF     // Dato alto Timer1
    /*----BITS----*/
    #BIT TMR1ON   = 0xFCD.0   // BYTE: T1CON   |  Habilitar Timer1
    #BIT TMR1IE   = 0xF9D.0   // BYTE: PIE1    |  Habilitar interrupción Timer1
    #BIT TMR1IF   = 0xF9E.0   // BYTE: PIR1    |  Bandera interrupción Timer1
    #BIT TMR1IP   = 0xF9F.0   // BYTE: IPR1    |  Prioridad interrupción Timer1

    //Timer 2
    /*----BYTES----*/
    #BYTE T2CON   = 0xFCA     // Configuración Timer2
    #BYTE TMR2    = 0xFCC     // Dato Timer2
    #BYTE PR2     = 0xFCB     // Periodo Timer 2
    /*----BITS----*/ 
    #BIT TMR2ON   = 0xFCA.2   // BYTE: T2CON   |  Habilitar Timer2
    #BIT TMR2IE   = 0xF9D.1   // BYTE: PIE1    |  Habilitar interrupción Timer2
    #BIT TMR2IF   = 0xF9E.1   // BYTE: PIR1    |  Bandera interrupción Timer2
    #BIT TMR2IP   = 0xF9F.1   // BYTE: IPR1    |  Prioridad interrupción Timer2

    //Timer 3
    /*----BYTES----*/
    #BYTE T3CON   = 0xFB1     // Configuración Timer3
    #BYTE TMR3L   = 0xFB2     // Dato bajo Timer3
    #BYTE TMR3H   = 0xFB3     // Dato alto Timer3
    /*----BITS----*/
    #BIT TMR3ON   = 0xFB1.0   // BYTE: T3CON   |  Habilitar Timer3
    #BIT TMR3IE   = 0xFA0.1   // BYTE: PIE2    |  Habilitar interrupción Timer3
    #BIT TMR3IF   = 0xFA1.1   // BYTE: PIR2    |  Bandera interrupción Timer3
    #BIT TMR3IP   = 0xFA2.1   // BYTE: IPR2    |  Prioridad interrupción Timer3
    
    /*-_-_-_-_-_-_-_-_-_-_-_-_-_-*/

    /*-_-_-INTERRUPTS-_-_-*/
    /*----BYTES----*/
    #BYTE INTCON  = 0xFF2     // Configuración INTCON
    #BYTE INTCON2 = 0xFF1     // Configuración INTCON2
    #BYTE INTCON3 = 0xFF0     // Configuración INTCON3
    /*----BITS----*/
    //Generales interrupciones
    #BIT IPEN     = 0xFD0.7   // BYTE: RCON    |  Prioridad de interrupciones
    #BIT PEIE     = 0xFF2.6   // BYTE: INTCON  |  Habilitar interrupciones perifÃƒÂ©ricas
    #BIT GIE      = 0xFF2.7   // BYTE: INTCON  |  Habilitar interrupciones globales

    //Interrupción 0
    #BIT INT0IE   = 0xFF2.4   // BYTE: INTCON  |  Interrupción 0 - Enable
    #BIT INT0IF   = 0xFF2.1   // BYTE: INTCON  |  Interrupción 0 - Flag
    #BIT INTEDG0  = 0xFF1.6   // BYTE: INTCON3 |  Interrupción 0 - Edge Select

    //Interrupción 1
    #BIT INT1IE   = 0xFF0.3   // BYTE: INTCON3 |  Interrupción 1 - Enable
    #BIT INT1IP   = 0xFF0.6   // BYTE: INTCON3 |  Interrupción 1 - Priority
    #BIT INT1IF   = 0xFF0.0   // BYTE: INTCON3 |  Interrupción 1 - Flag
    #BIT INTEDG1  = 0xFF1.5   // BYTE: INTCON2 |  Interrupción 1 - Edge Select

    //Interrupción 2
    #BIT INT2IE   = 0xFF0.4   // BYTE: INTCON3 |  Interrupción 2 - Enable
    #BIT INT2IP   = 0xFF0.7   // BYTE: INTCON3 |  Interrupción 2 - Priority
    #BIT INT2IF   = 0xFF0.1   // BYTE: INTCON3 |  Interrupción 2 - Flag
    #BIT INTEDG2  = 0xFF1.4   // BYTE: INTCON2 |  Interrupción 2 - Edge Select
    
    /*-_-_-_-_-_-_-_-_-_-_-_-_-_-*/

    /*-_-_-CAPTURE-COMPARE-PWM-_-_-*/
    //CCP1
    /*----BYTES----*/
    #BYTE CCP1CON = 0xFBD     // Configuración CCP1
    #BYTE CCPR1L  = 0xFBE     // Dato bajo CCP1
    #BYTE CCPR1H  = 0xFBF     // Dato alto CCP1
    /*----BITS----*/
    #BIT CCP1IF   = 0xF9E.2   // BYTE: PIR1    |  Bandera interrupción CCP1
    #BIT CCP1IE   = 0xF9D.2   // BYTE: PIE1    |  Habilitar interrupción CCP1
    #BIT CCP1IP   = 0xF9F.2   // BYTE: IPR1    |  Prioridad interrupción CCP1

    //CCP2
    /*----BYTES----*/
    #BYTE CCP2CON = 0xFBA     // Configuración CCP2
    #BYTE CCPR2L  = 0xFBB     // Dato bajo CCP2
    #BYTE CCPR2H  = 0xFBC     // Dato alto CCP2
    /*----BITS----*/
    #BIT CCP2IF   = 0xFA1.0   // BYTE: PIR2    |  Bandera interrupción CCP2
    #BIT CCP2IE   = 0xFA0.0   // BYTE: PIE2    |  Habilitar interrupción CCP2
    #BIT CCP2IP   = 0xFA2.0   // BYTE: IPR2    |  Prioridad interrupción CCP2
    
    /*-_-_-_-_-_-_-_-_-_-_-_-_-_-*/

    /*-_-_-EUSART-_-_-*/
    /*----BYTES----*/
    #BYTE TXSTA   = 0xFAC     // Configuración TXSTA   | Relacionado con: BAUD RATE GENERATOR, ASYNCHRONOUS TRANSMISSION AND RECEPTION, SYNCHRONOUS MASTER AND SLAVE TRANSMISSION AND RECEPTION 
    #BYTE RCSTA   = 0xFAB     // Configuración RCSTA   | Relacionado con: BAUD RATE GENERATOR, ASYNCHRONOUS TRANSMISSION AND RECEPTION, SYNCHRONOUS MASTER AND SLAVE TRANSMISSION AND RECEPTION
    #BYTE BAUDCON = 0xFB8     // Configuración BAUDCON | Relacionado con: BAUD RATE GENERATOR, ASYNCHRONOUS TRANSMISSION AND RECEPTION, SYNCHRONOUS MASTER AND SLAVE TRANSMISSION AND RECEPTION
    #BYTE SPBRGH  = 0xFB0     // Dato alto SPBRG       | Relacionado con: BAUD RATE GENERATOR, ASYNCHRONOUS TRANSMISSION AND RECEPTION, SYNCHRONOUS MASTER AND SLAVE TRANSMISSION AND RECEPTION
    #BYTE SPBRG   = 0xFAF     // Dato SPBRG            | Relacionado con: BAUD RATE GENERATOR, ASYNCHRONOUS TRANSMISSION AND RECEPTION, SYNCHRONOUS MASTER AND SLAVE TRANSMISSION AND RECEPTION
    #BYTE TXREG   = 0xFAD     // Dato TXREG            | Relacionado con: ASYNCHRONOUS TRANSMISSION, SYNCHRONOUS MASTER AND SLAVE TRANSMISSION
    #BYTE RCREG   = 0xFAE     // Dato RCREG            | Relacionado con: ASYNCHRONOUS RECEPTION, SYNCHRONOUS MASTER AND SLAVE RECEPTION 
    /*----BITS----*/
    #BIT SYNC     = 0xFAC.4   // BYTE: TXSTA   |  Modo de transmisión/recepción
    #BIT BRGH     = 0xFAC.2   // BYTE: BAUDCON |  High Baud Rate Select bit
    #BIT SPEN     = 0xFAB.7   // BYTE: RCSTA   |  Activar puerto serial
    #BIT BRG16    = 0xFB8.3   // BYTE: BAUDCON |  16-bit Baud Rate Register Enable bit
    #BIT ABDEN    = 0xFB8.1   // BYTE: BAUDCON |  Auto-Baud Rate Detect Enable bit
    #BIT ADDEN    = 0xFAB.3   // BYTE: RCSTA   |  Habilitar detección de dirección
    #BIT TXIE     = 0xF9D.4   // BYTE: PIE1    |  Habilitar interrupción de transmisión
    #BIT TXIF     = 0xF9E.4   // BYTE: PIR1    |  Bandera de interrupción de transmisión
    #BIT TXIP     = 0xF9F.4   // BYTE: IPR1    |  Prioridad de interrupción de transmisión
    #BIT TX9      = 0xFAC.6   // BYTE: TXSTA   |  9-bit Transmit Enable bit
    #BIT TXEN     = 0xFAC.5   // BYTE: TXSTA   |  Transmit Enable bit
    #BIT SENDB    = 0xFAC.3   // BYTE: TXSTA   |  Send Break Character bit
    #BIT TRMT     = 0xFAC.1   // BYTE: TXSTA   |  Transmit Shift Register Status bit
    #BIT TX9D     = 0xFAC.0   // BYTE: TXSTA   |  9th bit of transmit data
    #BIT TXCKP    = 0xFB8.4   // BYTE: BAUDCON |  Transmit/Receive Polarity Select bit
    #BIT RCIE     = 0xF9D.5   // BYTE: PIE1    |  Habilitar interrupción de recepción
    #BIT RCIF     = 0xF9E.5   // BYTE: PIR1    |  Bandera de interrupción de recepción
    #BIT RCIP     = 0xF9F.5   // BYTE: IPR1    |  Prioridad de interrupción de recepción
    #BIT RX9      = 0xFAB.6   // BYTE: RCSTA   |  9-bit Receive Enable bit
    #BIT RX9D     = 0xFAB.0   // BYTE: RCSTA   |  9th bit of receive data
    #BIT RXDTP    = 0xFB8.5   // BYTE: BAUDCON |  Receive Data Polarity Select bit
    #BIT SREN     = 0xFAB.5   // BYTE: RCSTA   |  Single Receive Enable bit
    #BIT CREN     = 0xFAB.4   // BYTE: RCSTA   |  Habilitar recepción
    #BIT FERR     = 0xFAB.2   // BYTE: RCSTA   |  Framing Error bit
    #BIT OERR     = 0xFAB.1   // BYTE: RCSTA   |  Overrun Error bit
    #BIT ABDOVF   = 0xFB8.7   // BYTE: BAUDCON |  Auto-Baud Rate Detect Overflow bit
    #BIT RCIDL    = 0xFB8.6   // BYTE: BAUDCON |  Receive Idle State bit
    #BIT WUE      = 0xFB8.1   // BYTE: BAUDCON |  Wake-up Enable bit
    #BIT CSRC     = 0xFAC.7   // BYTE: TXSTA   |  Clock Source Select bit
    /*-_-_-_-_-_-_-_-_-_-_-_-_-_-*/
    
    /*-_-_-MSSP-_-_-*/
    /*----BYTES----*/
    #BYTE SSPSTAT = 0xFC7     // Configuración SSPSTAT
    #BYTE SSPCON1 = 0xFC6     // Configuración SSPCON1
    #BYTE SSPCON2 = 0xFC5     // Configuración SSPCON2
    #BYTE SSPBUF  = 0xFC9     // Buffer de datos SSP
    #BYTE SSPADD  = 0xFC8     // Dirección SSP


    /*----BITS----*/
    #BIT SSPIF    = 0xF9E.3   // BYTE: PIR1    |  Bandera de interrupción MSSP
    #BIT SSPIE    = 0xF9D.3   // BYTE: PIE1    |  Habilitar interrupción MSSP
    #BIT SSPIP    = 0xF9F.3   // BYTE: IPR1    |  Prioridad interrupción MSSP
    #BIT GCEN     = 0xFC5.7   // BYTE: SSPCON2 |  General Call Enable bit
    #BIT ACKSTAT  = 0xFC5.6   // BYTE: SSPCON2 |  Acknowledge Status bit
    #BIT ACKDT    = 0xFC5.5   // BYTE: SSPCON2 |  Acknowledge Data bi
    #BIT ACKEN    = 0xFC5.4   // BYTE: SSPCON2 |  Acknowledge Sequence Enable bit
    #BIT RCEN     = 0xFC5.3   // BYTE: SSPCON2 |  Receive Enable bit
    #BIT PEN      = 0xFC5.2   // BYTE: SSPCON2 |  Stop bit Interrupt Enable bit
    #BIT RSEN     = 0xFC5.1   // BYTE: SSPCON2 |  Repeated Start Condition bit
    #BIT SEN      = 0xFC5.0   // BYTE: SSPCON2 |  Start Condition Enable bit
    #BIT WCOL     = 0xFC6.7   // BYTE: SSPCON1 |  Colisión de escritura
    #BIT SSPOV    = 0xFC6.6   // BYTE: SSPCON1 |  Overflow de recepción
    #BIT CKP      = 0xFC6.4   // BYTE: SSPCON1 |  Clock Polarity Select
    #BIT CKE      = 0xFC7.6   // BYTE: SSPSTAT |  SMBus Select
    #BIT DA       = 0xFC7.5   // BYTE: SSPSTAT |  Last byte was a data or address
    #BIT P        = 0xFC7.4   // BYTE: SSPSTAT |  Stop bit
    #BIT S        = 0xFC7.3   // BYTE: SSPSTAT |  Start bit
    #BIT RW       = 0xFC7.2   // BYTE: SSPSTAT |  Read/Write bit
    #BIT UA       = 0xFC7.1   // BYTE: SSPSTAT |  Update Address bit
    #BIT BF       = 0xFC7.0   // BYTE: SSPSTAT |  Buffer Full bit

#endif