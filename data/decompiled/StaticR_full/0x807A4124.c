/* Function at 0x807A4124, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807A4124(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807A4138
    r30 = r3;
    r0 = *(8 + r3); // lwz @ 0x807A4140
    /* li r3, -1 */ // 0x807A4144
    if (==) goto 0x0x807a415c;
    r3 = r0;
    r4 = r5;
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r7 = *(0x4c4 + r30); // lwz @ 0x807A415C
    r5 = r3;
    r4 = r31;
    /* li r6, 0 */ // 0x807A4168
    r3 = r7 + 0xc; // 0x807A416C
    FUN_805E3430(r5, r4, r6, r3); // bl 0x805E3430
}