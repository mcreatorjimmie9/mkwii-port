/* Function at 0x806AB2A4, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_806AB2A4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806AB2B4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806AB2BC
    r30 = r3;
    if (==) goto 0x0x806ab308;
    /* li r4, -1 */ // 0x806AB2C8
    r3 = r3 + 0x304; // 0x806AB2CC
    FUN_806A0540(r4, r3); // bl 0x806A0540
    r3 = r30 + 0x190; // 0x806AB2D4
    /* li r4, -1 */ // 0x806AB2D8
    FUN_8066CEF8(r4, r3, r3, r4); // bl 0x8066CEF8
    r3 = r30 + 0x44; // 0x806AB2E0
    /* li r4, -1 */ // 0x806AB2E4
    FUN_806688C8(r3, r4, r3, r4); // bl 0x806688C8
    r3 = r30;
    /* li r4, 0 */ // 0x806AB2F0
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806ab308;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806AB30C
    r30 = *(8 + r1); // lwz @ 0x806AB310
    r0 = *(0x14 + r1); // lwz @ 0x806AB314
    return;
}