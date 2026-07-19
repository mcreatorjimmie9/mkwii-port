/* Function at 0x805A4D0C, size=356 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 1 function(s) */

int FUN_805A4D0C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    /* stmw r22, 8(r1) */ // 0x805A4D18
    r24 = r3;
    r25 = r5;
    r0 = *(4 + r3); // lbz @ 0x805A4D24
    /* extsb r0, r0 */ // 0x805A4D28
    if (!=) goto 0x0x805a4e5c;
    /* extsb r5, r4 */ // 0x805A4D34
    *(4 + r3) = r4; // stb @ 0x805A4D38
    r29 = r5 + 1; // 0x805A4D3C
    /* li r26, 0 */ // 0x805A4D40
    /* extsb r3, r29 */ // 0x805A4D44
    r28 = r3 + 1; // 0x805A4D48
    /* extsb r3, r28 */ // 0x805A4D4C
    r27 = r3 + 1; // 0x805A4D50
    r3 = *(0 + r24); // lwz @ 0x805A4D54
    /* clrlwi r0, r26, 0x10 */ // 0x805A4D58
    r3 = r3 + r0; // 0x805A4D5C
    r4 = *(8 + r3); // lbz @ 0x805A4D60
    if (==) goto 0x0x805a4e50;
    r0 = *(4 + r25); // lhz @ 0x805A4D6C
    if (>=) goto 0x0x805a4d88;
    r3 = *(0 + r25); // lwz @ 0x805A4D78
    r0 = r4 rlwinm 2; // rlwinm
    /* lwzx r31, r3, r0 */ // 0x805A4D80
    /* b 0x805a4d8c */ // 0x805A4D84
    /* li r31, 0 */ // 0x805A4D88
    r0 = *(4 + r31); // lbz @ 0x805A4D8C
    /* extsb r0, r0 */ // 0x805A4D90
    if (!=) goto 0x0x805a4e50;
    *(4 + r31) = r29; // stb @ 0x805A4D9C
    /* li r30, 0 */ // 0x805A4DA0
    r3 = *(0 + r31); // lwz @ 0x805A4DA4
    /* clrlwi r0, r30, 0x10 */ // 0x805A4DA8
    r3 = r3 + r0; // 0x805A4DAC
    r4 = *(8 + r3); // lbz @ 0x805A4DB0
    if (==) goto 0x0x805a4e44;
    r0 = *(4 + r25); // lhz @ 0x805A4DBC
    if (>=) goto 0x0x805a4dd8;
    r3 = *(0 + r25); // lwz @ 0x805A4DC8
    r0 = r4 rlwinm 2; // rlwinm
    /* lwzx r23, r3, r0 */ // 0x805A4DD0
    /* b 0x805a4ddc */ // 0x805A4DD4
    /* li r23, 0 */ // 0x805A4DD8
    r0 = *(4 + r23); // lbz @ 0x805A4DDC
    /* extsb r0, r0 */ // 0x805A4DE0
    if (!=) goto 0x0x805a4e44;
    *(4 + r23) = r28; // stb @ 0x805A4DEC
    /* li r22, 0 */ // 0x805A4DF0
    r3 = *(0 + r23); // lwz @ 0x805A4DF4
    /* clrlwi r0, r22, 0x10 */ // 0x805A4DF8
    r3 = r3 + r0; // 0x805A4DFC
    r4 = *(8 + r3); // lbz @ 0x805A4E00
    if (==) goto 0x0x805a4e38;
    r0 = *(4 + r25); // lhz @ 0x805A4E0C
    if (>=) goto 0x0x805a4e28;
    r3 = *(0 + r25); // lwz @ 0x805A4E18
    r0 = r4 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805A4E20
    /* b 0x805a4e2c */ // 0x805A4E24
    /* li r3, 0 */ // 0x805A4E28
    r5 = r25;
    /* extsb r4, r27 */ // 0x805A4E30
    FUN_805A4D0C(r3, r5); // bl 0x805A4D0C
    r22 = r22 + 1; // 0x805A4E38
    if (<) goto 0x0x805a4df4;
    r30 = r30 + 1; // 0x805A4E44
    if (<) goto 0x0x805a4da4;
    r26 = r26 + 1; // 0x805A4E50
    if (<) goto 0x0x805a4d54;
    r0 = *(0x34 + r1); // lwz @ 0x805A4E60
    return;
}