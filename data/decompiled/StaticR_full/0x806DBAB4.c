/* Function at 0x806DBAB4, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806DBAB4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806DBAC4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806DBACC
    r30 = r3;
    if (==) goto 0x0x806dbb08;
    /* li r4, -1 */ // 0x806DBAD8
    r3 = r3 + 0x1b4; // 0x806DBADC
    FUN_806691A0(r4, r3); // bl 0x806691A0
    if (==) goto 0x0x806dbaf8;
    r3 = r30;
    /* li r4, 0 */ // 0x806DBAF0
    FUN_806A0540(r3, r4); // bl 0x806A0540
    if (<=) goto 0x0x806dbb08;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806DBB0C
    r30 = *(8 + r1); // lwz @ 0x806DBB10
    r0 = *(0x14 + r1); // lwz @ 0x806DBB14
    return;
}