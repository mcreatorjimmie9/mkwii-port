/* Function at 0x8083F870, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8083F870(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8083F87C
    r31 = r3;
    r0 = *(4 + r3); // lwz @ 0x8083F884
    if (==) goto 0x0x8083f8bc;
    /* li r4, 0 */ // 0x8083F890
    /* li r0, 0x14 */ // 0x8083F894
    *(4 + r3) = r4; // stw @ 0x8083F898
    *(8 + r3) = r4; // stw @ 0x8083F89C
    *(0x18 + r3) = r0; // stw @ 0x8083F8A0
    *(0x1c + r3) = r0; // stw @ 0x8083F8A4
    *(0x20 + r3) = r0; // stw @ 0x8083F8A8
    *(0x24 + r3) = r0; // stw @ 0x8083F8AC
    *(0x2d + r3) = r4; // stb @ 0x8083F8B0
    *(0x2e + r3) = r4; // stb @ 0x8083F8B4
    /* b 0x8083f8d8 */ // 0x8083F8B8
    r3 = *(0 + r3); // lwz @ 0x8083F8BC
    r0 = *(0x8c + r3); // lwz @ 0x8083F8C0
    if (==) goto 0x0x8083f8d8;
    r3 = r3 + 0x88; // 0x8083F8CC
    /* li r4, 1 */ // 0x8083F8D0
    FUN_80842034(r3, r4); // bl 0x80842034
    /* li r0, 0x14 */ // 0x8083F8D8
    /* li r5, 1 */ // 0x8083F8DC
    /* li r4, 0 */ // 0x8083F8E0
    /* li r3, 0xb8 */ // 0x8083F8E4
    *(4 + r31) = r5; // stw @ 0x8083F8E8
    *(8 + r31) = r4; // stw @ 0x8083F8EC
    *(0xc + r31) = r3; // stw @ 0x8083F8F0
    *(0x18 + r31) = r0; // stw @ 0x8083F8F4
    *(0x24 + r31) = r0; // stw @ 0x8083F8F8
    *(0x20 + r31) = r0; // stw @ 0x8083F8FC
    *(0x2d + r31) = r5; // stb @ 0x8083F900
    r31 = *(0xc + r1); // lwz @ 0x8083F904
    r0 = *(0x14 + r1); // lwz @ 0x8083F908
    return;
}