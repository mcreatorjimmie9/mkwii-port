/* Function at 0x806AEDA0, size=156 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_806AEDA0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806AEDB0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806AEDB8
    r30 = r3;
    if (==) goto 0x0x806aee20;
    /* li r4, -1 */ // 0x806AEDC4
    r3 = r3 + 0x884; // 0x806AEDC8
    FUN_806498AC(r4, r3); // bl 0x806498AC
    /* addic. r3, r30, 0x630 */ // 0x806AEDD0
    if (==) goto 0x0x806aede0;
    /* li r4, 0 */ // 0x806AEDD8
    FUN_806498AC(r3, r4); // bl 0x806498AC
    r3 = r30 + 0x3dc; // 0x806AEDE0
    /* li r4, -1 */ // 0x806AEDE4
    FUN_806498AC(r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x268; // 0x806AEDEC
    /* li r4, -1 */ // 0x806AEDF0
    FUN_806A0540(r3, r4, r3, r4); // bl 0x806A0540
    r3 = r30 + 0x44; // 0x806AEDF8
    /* li r4, -1 */ // 0x806AEDFC
    FUN_8066A1A0(r3, r4, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x806AEE08
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806aee20;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806AEE24
    r30 = *(8 + r1); // lwz @ 0x806AEE28
    r0 = *(0x14 + r1); // lwz @ 0x806AEE2C
    return;
}