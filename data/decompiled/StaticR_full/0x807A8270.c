/* Function at 0x807A8270, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807A8270(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807A8280
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807A8288
    r30 = r3;
    if (==) goto 0x0x807a82b0;
    /* addic. r3, r3, 8 */ // 0x807A8294
    if (==) goto 0x0x807a82a0;
    FUN_805E3430(); // bl 0x805E3430
    if (<=) goto 0x0x807a82b0;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807A82B4
    r30 = *(8 + r1); // lwz @ 0x807A82B8
    r0 = *(0x14 + r1); // lwz @ 0x807A82BC
    return;
}