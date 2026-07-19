/* Function at 0x8080EC24, size=248 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r23 */

int FUN_8080EC24(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r23 */
    /* stmw r23, 0xc(r1) */ // 0x8080EC30
    r29 = r3;
    r30 = r4;
    /* li r31, 0 */ // 0x8080EC3C
    /* li r24, 0 */ // 0x8080EC40
    /* lis r27, 0 */ // 0x8080EC44
    /* lis r28, 0 */ // 0x8080EC48
    /* b 0x8080ecfc */ // 0x8080EC4C
    /* li r3, 0 */ // 0x8080EC54
    if (<) goto 0x0x8080ec6c;
    r0 = *(0xb8 + r29); // lwz @ 0x8080EC5C
    if (>=) goto 0x0x8080ec6c;
    /* li r3, 1 */ // 0x8080EC68
    if (!=) goto 0x0x8080ec88;
    r12 = *(0xb4 + r29); // lwz @ 0x8080EC74
    r3 = r29 + 0xb4; // 0x8080EC78
    r12 = *(0x18 + r12); // lwz @ 0x8080EC7C
    /* mtctr r12 */ // 0x8080EC80
    /* bctrl  */ // 0x8080EC84
    r3 = *(0xbc + r29); // lwz @ 0x8080EC88
    /* li r25, 0 */ // 0x8080EC8C
    /* li r23, 0 */ // 0x8080EC90
    /* lwzx r26, r3, r24 */ // 0x8080EC94
    /* b 0x8080ece8 */ // 0x8080EC98
    /* li r3, 0 */ // 0x8080ECA0
    if (<) goto 0x0x8080ecb8;
    r0 = *(0xe0 + r26); // lwz @ 0x8080ECA8
    if (>=) goto 0x0x8080ecb8;
    /* li r3, 1 */ // 0x8080ECB4
    if (!=) goto 0x0x8080ecd4;
    r12 = *(0xdc + r26); // lwz @ 0x8080ECC0
    r3 = r26 + 0xdc; // 0x8080ECC4
    r12 = *(0x18 + r12); // lwz @ 0x8080ECC8
    /* mtctr r12 */ // 0x8080ECCC
    /* bctrl  */ // 0x8080ECD0
    r3 = *(0xe4 + r26); // lwz @ 0x8080ECD4
    r25 = r25 + 1; // 0x8080ECD8
    /* lwzx r3, r3, r23 */ // 0x8080ECDC
    r23 = r23 + 4; // 0x8080ECE0
    *(0x11c + r3) = r30; // stw @ 0x8080ECE4
    r0 = *(0 + r27); // lwz @ 0x8080ECE8
    if (<) goto 0x0x8080ec9c;
    r24 = r24 + 4; // 0x8080ECF4
    r31 = r31 + 1; // 0x8080ECF8
    r0 = *(0 + r28); // lwz @ 0x8080ECFC
    if (<) goto 0x0x8080ec50;
    r0 = *(0x34 + r1); // lwz @ 0x8080ED0C
    return;
}