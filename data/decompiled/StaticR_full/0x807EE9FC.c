/* Function at 0x807EE9FC, size=152 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 2 function(s) */

int FUN_807EE9FC(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* lis r5, 0 */ // 0x807EEA04
    *(0x34 + r1) = r0; // stw @ 0x807EEA08
    r5 = r5 + 0; // 0x807EEA0C
    /* stmw r25, 0x14(r1) */ // 0x807EEA10
    r26 = r3;
    r27 = r4;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r3, 0 */ // 0x807EEA20
    /* lis r5, 0 */ // 0x807EEA24
    /* li r0, 0 */ // 0x807EEA28
    /* lis r4, 0 */ // 0x807EEA2C
    r3 = r3 + 0; // 0x807EEA30
    r5 = r5 + 0; // 0x807EEA34
    r4 = r4 + 0; // 0x807EEA38
    *(0 + r26) = r3; // stw @ 0x807EEA3C
    r3 = r26;
    *(0xb0 + r26) = r5; // stw @ 0x807EEA44
    *(0xb4 + r26) = r0; // stw @ 0x807EEA48
    *(0xb8 + r26) = r0; // stw @ 0x807EEA4C
    *(0xbc + r26) = r4; // stw @ 0x807EEA50
    *(0xc0 + r26) = r0; // stw @ 0x807EEA54
    *(0xc4 + r26) = r0; // stw @ 0x807EEA58
    r12 = *(0 + r26); // lwz @ 0x807EEA5C
    r12 = *(0xc + r12); // lwz @ 0x807EEA60
    /* mtctr r12 */ // 0x807EEA64
    /* bctrl  */ // 0x807EEA68
    r3 = *(0xa0 + r26); // lwz @ 0x807EEA6C
    /* li r0, 5 */ // 0x807EEA70
    r3 = *(0 + r3); // lwz @ 0x807EEA74
    r3 = *(0x36 + r3); // lha @ 0x807EEA78
    if (==) goto 0x0x807eea88;
    r0 = r3;
    *(0xcc + r26) = r0; // stw @ 0x807EEA88
    /* li r3, 0xfc */ // 0x807EEA8C
    FUN_805E3430(r3); // bl 0x805E3430
}