/* Function at 0x805F0F2C, size=160 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 3 function(s) */

int FUN_805F0F2C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* stmw r24, 0x10(r1) */ // 0x805F0F38
    r30 = r4;
    /* li r28, 0 */ // 0x805F0F40
    /* li r31, 0 */ // 0x805F0F44
    r3 = *(0x28 + r30); // lwz @ 0x805F0F48
    /* li r26, 8 */ // 0x805F0F4C
    /* li r25, 0x10 */ // 0x805F0F50
    /* li r29, 0x60 */ // 0x805F0F54
    r27 = r3 + 0x2878; // 0x805F0F58
    /* b 0x805f0fd8 */ // 0x805F0F5C
    r0 = *(2 + r27); // lhz @ 0x805F0F60
    if (>=) goto 0x0x805f0f88;
    if (<) goto 0x0x805f0f88;
    r0 = *(0xc + r27); // lwz @ 0x805F0F74
    r0 = r0 + r29; // 0x805F0F78
    *(8 + r1) = r27; // stw @ 0x805F0F7C
    *(0xc + r1) = r0; // stw @ 0x805F0F80
    /* b 0x805f0f90 */ // 0x805F0F84
    *(8 + r1) = r27; // stw @ 0x805F0F88
    *(0xc + r1) = r31; // stw @ 0x805F0F8C
    r4 = r25;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r5 = r25;
    /* li r4, 0 */ // 0x805F0FA4
    FUN_805E3430(r3, r5, r3, r4); // bl 0x805E3430
    /* li r24, 1 */ // 0x805F0FAC
    r4 = r24;
    /* li r5, -1 */ // 0x805F0FB8
    FUN_805E3430(r4, r3, r5); // bl 0x805E3430
    r24 = r24 + 1; // 0x805F0FC0
    if (<) goto 0x0x805f0fb0;
}