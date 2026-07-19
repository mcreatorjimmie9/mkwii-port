/* Function at 0x808E815C, size=164 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_808E815C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808E816C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808E8174
    r30 = r3;
    if (==) goto 0x0x808e81e4;
    /* li r4, -1 */ // 0x808E8180
    r3 = r3 + 0xa98; // 0x808E8184
    FUN_806498AC(r4, r3); // bl 0x806498AC
    r3 = r30 + 0x844; // 0x808E818C
    /* li r4, -1 */ // 0x808E8190
    FUN_806498AC(r4, r3, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x6c8; // 0x808E8198
    /* li r4, -1 */ // 0x808E819C
    FUN_8066CEF8(r3, r4, r3, r4); // bl 0x8066CEF8
    r3 = r30 + 0x430; // 0x808E81A4
    /* li r4, -1 */ // 0x808E81A8
    FUN_8066A1A0(r3, r4, r3, r4); // bl 0x8066A1A0
    if (==) goto 0x0x808e81d4;
    /* addic. r3, r30, 0x54 */ // 0x808E81B8
    if (==) goto 0x0x808e81c8;
    /* li r4, 0 */ // 0x808E81C0
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r30;
    /* li r4, 0 */ // 0x808E81CC
    FUN_806711C4(r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x808e81e4;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808E81E8
    r30 = *(8 + r1); // lwz @ 0x808E81EC
    r0 = *(0x14 + r1); // lwz @ 0x808E81F0
    return;
}