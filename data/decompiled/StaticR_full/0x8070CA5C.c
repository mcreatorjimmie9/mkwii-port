/* Function at 0x8070CA5C, size=304 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 4 function(s) */

int FUN_8070CA5C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x8070CA68
    r31 = r3;
    /* li r30, 0 */ // 0x8070CA70
    /* li r29, 0 */ // 0x8070CA74
    /* b 0x8070ca94 */ // 0x8070CA78
    r3 = *(0x9d8 + r31); // lwz @ 0x8070CA7C
    r4 = r30;
    /* lwzx r3, r3, r29 */ // 0x8070CA84
    FUN_8070DA2C(r4); // bl 0x8070DA2C
    r29 = r29 + 4; // 0x8070CA8C
    r30 = r30 + 1; // 0x8070CA90
    r0 = *(4 + r31); // lwz @ 0x8070CA94
    if (<) goto 0x0x8070ca7c;
    /* li r28, 0 */ // 0x8070CAA0
    /* li r29, 0 */ // 0x8070CAA4
    /* lis r30, 0 */ // 0x8070CAA8
    /* b 0x8070cae0 */ // 0x8070CAAC
    r3 = *(0 + r30); // lwz @ 0x8070CAB0
    /* clrlwi r4, r28, 0x18 */ // 0x8070CAB4
    FUN_805C1470(); // bl 0x805C1470
    /* extsb r0, r3 */ // 0x8070CABC
    if (!=) goto 0x0x8070cad8;
    r3 = *(0x68 + r31); // lwz @ 0x8070CAC8
    /* li r4, 1 */ // 0x8070CACC
    /* lwzx r3, r3, r29 */ // 0x8070CAD0
    FUN_80723970(r4); // bl 0x80723970
    r29 = r29 + 4; // 0x8070CAD8
    r28 = r28 + 1; // 0x8070CADC
    r0 = *(0 + r31); // lwz @ 0x8070CAE0
    if (<) goto 0x0x8070cab0;
    r0 = *(0x9ec + r31); // lhz @ 0x8070CAEC
    if (!=) goto 0x0x8070cb78;
    /* li r28, 0 */ // 0x8070CAF8
    /* li r30, 0 */ // 0x8070CAFC
    /* b 0x8070cb6c */ // 0x8070CB00
    /* li r27, 0 */ // 0x8070CB04
    /* li r29, 0 */ // 0x8070CB08
    /* b 0x8070cb58 */ // 0x8070CB0C
    r4 = *(0x9d8 + r31); // lwz @ 0x8070CB10
    /* extsb r3, r27 */ // 0x8070CB14
    r0 = *(0x3c + r31); // lwz @ 0x8070CB18
    /* lwzx r5, r30, r4 */ // 0x8070CB1C
    r4 = *(0 + r5); // lwz @ 0x8070CB20
    r5 = *(0xc + r5); // lwz @ 0x8070CB24
    /* lbzx r3, r4, r3 */ // 0x8070CB28
    /* lwzx r4, r5, r29 */ // 0x8070CB2C
    if (>) goto 0x0x8070cb50;
    if (>) goto 0x0x8070cb50;
    r3 = *(0x68 + r31); // lwz @ 0x8070CB40
    /* li r4, 0 */ // 0x8070CB44
    /* lwzx r3, r3, r29 */ // 0x8070CB48
    FUN_80723970(r4); // bl 0x80723970
    r29 = r29 + 4; // 0x8070CB50
    r27 = r27 + 1; // 0x8070CB54
    r0 = *(0 + r31); // lwz @ 0x8070CB58
    if (<) goto 0x0x8070cb10;
    r30 = r30 + 4; // 0x8070CB64
    r28 = r28 + 1; // 0x8070CB68
    r0 = *(4 + r31); // lwz @ 0x8070CB6C
    if (<) goto 0x0x8070cb04;
    r0 = *(0x24 + r1); // lwz @ 0x8070CB7C
    return;
}