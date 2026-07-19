/* Function at 0x806D69CC, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_806D69CC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806D69DC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806D69E4
    r30 = r3;
    if (==) goto 0x0x806d6a58;
    /* li r4, -1 */ // 0x806D69F0
    r3 = r3 + 0xb10; // 0x806D69F4
    FUN_8066A1A0(r4, r3); // bl 0x8066A1A0
    /* addic. r3, r30, 0x8ac */ // 0x806D69FC
    if (==) goto 0x0x806d6a0c;
    /* li r4, 0 */ // 0x806D6A04
    FUN_806498AC(r3, r4); // bl 0x806498AC
    r3 = r30 + 0x658; // 0x806D6A0C
    /* li r4, -1 */ // 0x806D6A10
    FUN_806498AC(r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x404; // 0x806D6A18
    /* li r4, -1 */ // 0x806D6A1C
    FUN_806498AC(r3, r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x1b8; // 0x806D6A24
    /* li r4, -1 */ // 0x806D6A28
    FUN_80660AA0(r3, r4, r3, r4); // bl 0x80660AA0
    r3 = r30 + 0x44; // 0x806D6A30
    /* li r4, -1 */ // 0x806D6A34
    FUN_806A0540(r3, r4, r3, r4); // bl 0x806A0540
    r3 = r30;
    /* li r4, 0 */ // 0x806D6A40
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806d6a58;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806D6A5C
    r30 = *(8 + r1); // lwz @ 0x806D6A60
    r0 = *(0x14 + r1); // lwz @ 0x806D6A64
    return;
}