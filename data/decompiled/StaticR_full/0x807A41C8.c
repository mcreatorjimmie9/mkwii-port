/* Function at 0x807A41C8, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807A41C8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807A41DC
    r30 = r3;
    r0 = *(8 + r3); // lwz @ 0x807A41E4
    /* li r3, -1 */ // 0x807A41E8
    if (==) goto 0x0x807a4200;
    r3 = r0;
    r4 = r5;
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r7 = *(0x4c4 + r30); // lwz @ 0x807A4200
    r5 = r3;
    r4 = r31;
    /* li r6, 0 */ // 0x807A420C
    r3 = r7 + 0xc; // 0x807A4210
    FUN_805E3430(r5, r4, r6, r3); // bl 0x805E3430
}