/* Function at 0x805E7854, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805E7854(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x805E7860
    *(0xc + r1) = r31; // stw @ 0x805E7864
    r31 = r3;
    if (==) goto 0x0x805e78c4;
    r0 = *(0x2c + r3); // lwz @ 0x805E7870
    if (!=) goto 0x0x805e78c4;
    r3 = *(0x1c + r3); // lwz @ 0x805E787C
    FUN_805EEFE4(); // bl 0x805EEFE4
    r4 = r3;
    /* li r3, 0x14 */ // 0x805E7888
    r4 = *(0x10 + r4); // lwz @ 0x805E788C
    /* li r5, 4 */ // 0x805E7890
    FUN_805E3430(r4, r3, r5); // bl 0x805E3430
    *(0x2c + r31) = r3; // stw @ 0x805E7898
    /* li r0, 0 */ // 0x805E789C
    *(0 + r3) = r0; // stw @ 0x805E78A0
    r3 = *(0x2c + r31); // lwz @ 0x805E78A4
    *(4 + r3) = r0; // stw @ 0x805E78A8
}