/* Function at 0x806E3AE4, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806E3AE4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806E3AF4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806E3AFC
    r30 = r3;
    if (==) goto 0x0x806e3b20;
    FUN_806EB084(); // bl 0x806EB084
    FUN_806F1090(); // bl 0x806F1090
    if (<=) goto 0x0x806e3b20;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806E3B24
    r30 = *(8 + r1); // lwz @ 0x806E3B28
    r0 = *(0x14 + r1); // lwz @ 0x806E3B2C
    return;
}