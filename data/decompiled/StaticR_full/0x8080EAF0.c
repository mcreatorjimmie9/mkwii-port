/* Function at 0x8080EAF0, size=308 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */

int FUN_8080EAF0(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* li r4, 0 */ // 0x8080EAF8
    *(0x34 + r1) = r0; // stw @ 0x8080EAFC
    /* stmw r25, 0x14(r1) */ // 0x8080EB00
    r31 = r3;
    r29 = *(0xc0 + r3); // lwz @ 0x8080EB08
    if (<) goto 0x0x8080eb24;
    r0 = *(0xb8 + r3); // lwz @ 0x8080EB14
    if (>=) goto 0x0x8080eb24;
    /* li r4, 1 */ // 0x8080EB20
    if (!=) goto 0x0x8080eb3c;
    r12 = *(0xb4 + r3); // lwzu @ 0x8080EB2C
    r12 = *(0x18 + r12); // lwz @ 0x8080EB30
    /* mtctr r12 */ // 0x8080EB34
    /* bctrl  */ // 0x8080EB38
    r3 = *(0xbc + r31); // lwz @ 0x8080EB3C
    /* slwi r0, r29, 2 */ // 0x8080EB40
    /* li r26, 0 */ // 0x8080EB44
    /* li r25, 0 */ // 0x8080EB48
    /* lwzx r28, r3, r0 */ // 0x8080EB4C
    /* li r29, 3 */ // 0x8080EB50
    /* li r30, 1 */ // 0x8080EB54
    /* b 0x8080ebd8 */ // 0x8080EB58
    /* li r3, 0 */ // 0x8080EB60
    if (<) goto 0x0x8080eb78;
    r0 = *(0xe0 + r28); // lwz @ 0x8080EB68
    if (>=) goto 0x0x8080eb78;
    /* li r3, 1 */ // 0x8080EB74
    if (!=) goto 0x0x8080eb94;
    r12 = *(0xdc + r28); // lwz @ 0x8080EB80
    r3 = r28 + 0xdc; // 0x8080EB84
    r12 = *(0x18 + r12); // lwz @ 0x8080EB88
    /* mtctr r12 */ // 0x8080EB8C
    /* bctrl  */ // 0x8080EB90
    r3 = *(0xe4 + r28); // lwz @ 0x8080EB94
    /* lwzx r27, r3, r25 */ // 0x8080EB98
    *(0xb0 + r27) = r29; // stw @ 0x8080EB9C
    r3 = r27;
    r12 = *(0 + r27); // lwz @ 0x8080EBA4
    r12 = *(0x90 + r12); // lwz @ 0x8080EBA8
    /* mtctr r12 */ // 0x8080EBAC
    /* bctrl  */ // 0x8080EBB0
    r12 = *(0 + r27); // lwz @ 0x8080EBB4
    r3 = r27;
    /* li r4, 0 */ // 0x8080EBBC
    r12 = *(0x68 + r12); // lwz @ 0x8080EBC0
    /* mtctr r12 */ // 0x8080EBC4
    /* bctrl  */ // 0x8080EBC8
    *(0x121 + r27) = r30; // stb @ 0x8080EBCC
    r25 = r25 + 4; // 0x8080EBD0
    r26 = r26 + 1; // 0x8080EBD4
    r0 = *(0xb4 + r28); // lwz @ 0x8080EBD8
    if (<) goto 0x0x8080eb5c;
    /* li r0, 3 */ // 0x8080EBE4
    *(0xb8 + r28) = r0; // stw @ 0x8080EBE8
    /* lis r3, 0 */ // 0x8080EBEC
    r4 = *(0xc0 + r31); // lwz @ 0x8080EBF0
    r4 = r4 + 1; // 0x8080EBF4
    *(0xc0 + r31) = r4; // stw @ 0x8080EBF8
    r0 = *(0 + r3); // lwz @ 0x8080EBFC
    if (!=) goto 0x0x8080ec10;
    /* li r0, 0 */ // 0x8080EC08
    *(0xc0 + r31) = r0; // stw @ 0x8080EC0C
    r0 = *(0x34 + r1); // lwz @ 0x8080EC14
    return;
}