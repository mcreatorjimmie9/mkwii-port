/* Function at 0x8068D09C, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8068D09C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8068D0AC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8068D0B4
    r30 = r3;
    if (==) goto 0x0x8068d100;
    /* li r4, -1 */ // 0x8068D0C0
    r3 = r3 + 0xd90; // 0x8068D0C4
    FUN_806A0540(r4, r3); // bl 0x806A0540
    /* lis r4, 0 */ // 0x8068D0CC
    r3 = r30 + 0x174; // 0x8068D0D0
    r4 = r4 + 0; // 0x8068D0D4
    /* li r5, 0x26c */ // 0x8068D0D8
    /* li r6, 5 */ // 0x8068D0DC
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x8068D0E8
    FUN_806A0540(r5, r6, r3, r4); // bl 0x806A0540
    if (<=) goto 0x0x8068d100;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}