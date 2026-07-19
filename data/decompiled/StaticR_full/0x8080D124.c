/* Function at 0x8080D124, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8080D124(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8080D134
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8080D13C
    r30 = r3;
    if (==) goto 0x0x8080d188;
    r0 = *(8 + r3); // lwz @ 0x8080D148
    /* lis r4, 0 */ // 0x8080D14C
    r4 = r4 + 0; // 0x8080D150
    *(0 + r3) = r4; // stw @ 0x8080D154
    if (==) goto 0x0x8080d178;
    /* lis r4, 0 */ // 0x8080D160
    r3 = r0;
    r4 = r4 + 0; // 0x8080D168
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    /* li r0, 0 */ // 0x8080D170
    *(8 + r30) = r0; // stw @ 0x8080D174
    if (<=) goto 0x0x8080d188;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8080D18C
    r30 = *(8 + r1); // lwz @ 0x8080D190
    r0 = *(0x14 + r1); // lwz @ 0x8080D194
}