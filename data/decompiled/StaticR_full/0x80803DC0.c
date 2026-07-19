/* Function at 0x80803DC0, size=212 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r20 */
/* Calls: 4 function(s) */

int FUN_80803DC0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r20 */
    /* lis r7, 0 */ // 0x80803DC8
    *(0x44 + r1) = r0; // stw @ 0x80803DCC
    /* stmw r20, 0x10(r1) */ // 0x80803DD0
    r29 = r7 + 0; // 0x80803DD4
    r26 = r5;
    r24 = r3;
    r25 = r4;
    r20 = r6;
    r5 = r29 + 0x17; // 0x80803DE8
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r3, 0 */ // 0x80803DF0
    /* lis r5, 0 */ // 0x80803DF4
    /* li r0, 0 */ // 0x80803DF8
    *(0xb4 + r24) = r0; // stw @ 0x80803DFC
    r3 = r3 + 0; // 0x80803E00
    r5 = r5 + 0; // 0x80803E04
    *(0 + r24) = r3; // stw @ 0x80803E08
    /* lis r3, 0 */ // 0x80803E0C
    r4 = r20;
    *(0xb0 + r24) = r5; // stw @ 0x80803E14
    *(0xb8 + r24) = r0; // stw @ 0x80803E18
    *(0xbc + r24) = r20; // stw @ 0x80803E1C
    *(0xc0 + r24) = r26; // stw @ 0x80803E20
    r3 = *(0 + r3); // lwz @ 0x80803E24
    FUN_8061D97C(); // bl 0x8061D97C
    *(0xcc + r24) = r3; // stw @ 0x80803E2C
    /* lis r30, 0 */ // 0x80803E30
    r3 = r24 + 0xb0; // 0x80803E34
    /* li r5, 0 */ // 0x80803E38
    r12 = *(0xb0 + r24); // lwz @ 0x80803E3C
    r4 = *(0 + r30); // lwz @ 0x80803E40
    r12 = *(0xc + r12); // lwz @ 0x80803E44
    /* mtctr r12 */ // 0x80803E48
    /* bctrl  */ // 0x80803E4C
    /* lis r23, 0 */ // 0x80803E50
    /* li r27, 0 */ // 0x80803E54
    r23 = r23 + 0; // 0x80803E58
    /* li r28, 0 */ // 0x80803E5C
    /* lis r31, 0 */ // 0x80803E60
    /* b 0x80803f58 */ // 0x80803E64
    /* li r3, 0x124 */ // 0x80803E68
    FUN_805E3430(r3); // bl 0x805E3430
    r21 = r3;
    if (==) goto 0x0x80803ec0;
    r3 = *(0 + r31); // lwz @ 0x80803E7C
    /* li r4, 3 */ // 0x80803E80
    r3 = *(8 + r3); // lwz @ 0x80803E84
    FUN_805E364C(r4); // bl 0x805E364C
    r20 = *(0xcc + r24); // lwz @ 0x80803E8C
    r22 = r3;
}