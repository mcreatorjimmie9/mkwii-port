/* Function at 0x806D0074, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_806D0074(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806D0084
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806D008C
    r30 = r3;
    if (==) goto 0x0x806d0104;
    /* addic. r3, r3, 0xb00 */ // 0x806D0098
    if (==) goto 0x0x806d00a8;
    /* li r4, 0 */ // 0x806D00A0
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r30 + 0x8ac; // 0x806D00A8
    /* li r4, -1 */ // 0x806D00AC
    FUN_806498AC(r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x658; // 0x806D00B4
    /* li r4, -1 */ // 0x806D00B8
    FUN_806498AC(r3, r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x404; // 0x806D00C0
    /* li r4, -1 */ // 0x806D00C4
    FUN_806498AC(r3, r4, r3, r4); // bl 0x806498AC
    /* addic. r3, r30, 0x290 */ // 0x806D00CC
    if (==) goto 0x0x806d00dc;
    /* li r4, 0 */ // 0x806D00D4
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30 + 0x6c; // 0x806D00DC
    /* li r4, -1 */ // 0x806D00E0
    FUN_8066A1A0(r4, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x806D00EC
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806d0104;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806D0108
    r30 = *(8 + r1); // lwz @ 0x806D010C
    r0 = *(0x14 + r1); // lwz @ 0x806D0110
    return;
}