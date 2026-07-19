/* Function at 0x808E8C64, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_808E8C64(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808E8C74
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808E8C7C
    r30 = r3;
    if (==) goto 0x0x808e8ce8;
    /* li r4, -1 */ // 0x808E8C88
    r3 = r3 + 0x934; // 0x808E8C8C
    FUN_8066CEF8(r4, r3); // bl 0x8066CEF8
    /* addic. r3, r30, 0x6c4 */ // 0x808E8C94
    if (==) goto 0x0x808e8ca8;
    r3 = r3 + 0x18; // 0x808E8C9C
    /* li r4, 0 */ // 0x808E8CA0
    FUN_806498AC(r3, r4); // bl 0x806498AC
    r3 = r30 + 0x430; // 0x808E8CA8
    /* li r4, -1 */ // 0x808E8CAC
    FUN_8066A1A0(r3, r4, r3, r4); // bl 0x8066A1A0
    if (==) goto 0x0x808e8cd8;
    /* addic. r3, r30, 0x54 */ // 0x808E8CBC
    if (==) goto 0x0x808e8ccc;
    /* li r4, 0 */ // 0x808E8CC4
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r30;
    /* li r4, 0 */ // 0x808E8CD0
    FUN_806711C4(r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x808e8ce8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808E8CEC
    r30 = *(8 + r1); // lwz @ 0x808E8CF0
    r0 = *(0x14 + r1); // lwz @ 0x808E8CF4
    return;
}