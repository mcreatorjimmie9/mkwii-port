/* Function at 0x806B2A30, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_806B2A30(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806B2A40
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806B2A48
    r30 = r3;
    if (==) goto 0x0x806b2aa0;
    /* li r4, -1 */ // 0x806B2A54
    r3 = r3 + 0x73c; // 0x806B2A58
    FUN_8066CEF8(r4, r3); // bl 0x8066CEF8
    /* lis r4, 0 */ // 0x806B2A60
    r3 = r30 + 0x294; // 0x806B2A64
    r4 = r4 + 0; // 0x806B2A68
    /* li r5, 0x254 */ // 0x806B2A6C
    /* li r6, 2 */ // 0x806B2A70
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30 + 0x4c; // 0x806B2A78
    /* li r4, -1 */ // 0x806B2A7C
    FUN_8066A1A0(r5, r6, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x806B2A88
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
}