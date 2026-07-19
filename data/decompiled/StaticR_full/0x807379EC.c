/* Function at 0x807379EC, size=208 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_807379EC(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807379F8
    r31 = r3;
    r0 = *(0x7b9 + r3); // lbz @ 0x80737A00
    if (==) goto 0x0x80737a34;
    r4 = *(0x530 + r3); // lwz @ 0x80737A0C
    r7 = r3 + 0x6f4; // 0x80737A10
    r8 = r3 + 0x7bc; // 0x80737A14
    /* li r5, 0x1a */ // 0x80737A18
    /* li r6, 0x1d */ // 0x80737A1C
    /* li r9, 1 */ // 0x80737A20
    FUN_807271EC(r7, r8, r5, r6, r9); // bl 0x807271EC
    /* li r0, 1 */ // 0x80737A28
    *(0xba + r31) = r0; // stb @ 0x80737A2C
    /* b 0x80737a50 */ // 0x80737A30
    r4 = *(0x530 + r3); // lwz @ 0x80737A34
    r7 = r3 + 0x6f4; // 0x80737A38
    r8 = r3 + 0x7bc; // 0x80737A3C
    /* li r5, 0x1a */ // 0x80737A40
    /* li r6, 0x1d */ // 0x80737A44
    /* li r9, 1 */ // 0x80737A48
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r0 = *(0x7ba + r31); // lbz @ 0x80737A50
    if (==) goto 0x0x80737a88;
    r4 = *(0x530 + r31); // lwz @ 0x80737A5C
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x80737A64
    r8 = r31 + 0x7c8; // 0x80737A68
    /* li r5, 0x1d */ // 0x80737A6C
    /* li r6, 0x20 */ // 0x80737A70
    /* li r9, 1 */ // 0x80737A74
    FUN_807271EC(r7, r8, r5, r6, r9); // bl 0x807271EC
    /* li r0, 1 */ // 0x80737A7C
    *(0xba + r31) = r0; // stb @ 0x80737A80
    /* b 0x80737aa8 */ // 0x80737A84
    r4 = *(0x530 + r31); // lwz @ 0x80737A88
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x80737A90
    r8 = r31 + 0x7c8; // 0x80737A94
    /* li r5, 0x1d */ // 0x80737A98
    /* li r6, 0x20 */ // 0x80737A9C
    /* li r9, 1 */ // 0x80737AA0
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r0 = *(0x14 + r1); // lwz @ 0x80737AA8
    r31 = *(0xc + r1); // lwz @ 0x80737AAC
    return;
}