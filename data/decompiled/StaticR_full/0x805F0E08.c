/* Function at 0x805F0E08, size=212 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 3 function(s) */

int FUN_805F0E08(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* stmw r24, 0x10(r1) */ // 0x805F0E14
    r31 = r3;
    r29 = r4;
    /* li r27, 0 */ // 0x805F0E20
    /* li r30, 0 */ // 0x805F0E24
    r3 = *(0x28 + r29); // lwz @ 0x805F0E28
    /* li r25, 0 */ // 0x805F0E2C
    /* li r28, 0 */ // 0x805F0E30
    r26 = r3 + 0x2878; // 0x805F0E34
    r0 = *(2 + r26); // lhz @ 0x805F0E38
    if (>=) goto 0x0x805f0e60;
    if (<) goto 0x0x805f0e60;
    r0 = *(0xc + r26); // lwz @ 0x805F0E4C
    r0 = r0 + r28; // 0x805F0E50
    *(8 + r1) = r26; // stw @ 0x805F0E54
    *(0xc + r1) = r0; // stw @ 0x805F0E58
    /* b 0x805f0e68 */ // 0x805F0E5C
    *(8 + r1) = r26; // stw @ 0x805F0E60
    *(0xc + r1) = r30; // stw @ 0x805F0E64
    if (>=) goto 0x0x805f0eac;
    /* li r4, 0 */ // 0x805F0E74
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r5 = r25;
    /* li r4, 0 */ // 0x805F0E84
    FUN_805E3430(r4, r5, r3, r4); // bl 0x805E3430
    /* li r24, 1 */ // 0x805F0E8C
    /* extsb r4, r24 */ // 0x805F0E94
    /* li r5, -1 */ // 0x805F0E98
    FUN_805E3430(r3, r5); // bl 0x805E3430
    r24 = r24 + 1; // 0x805F0EA0
    if (<) goto 0x0x805f0e90;
    r25 = r25 + 1; // 0x805F0EAC
    r28 = r28 + 0xc; // 0x805F0EB0
    if (<) goto 0x0x805f0e38;
    r27 = r27 + 1; // 0x805F0EBC
    r29 = r29 + 4; // 0x805F0EC0
    if (<) goto 0x0x805f0e28;
    /* li r24, 0 */ // 0x805F0ECC
    r3 = *(0x20 + r31); // lwz @ 0x805F0ED0
    /* clrlwi r0, r24, 0x10 */ // 0x805F0ED4
}