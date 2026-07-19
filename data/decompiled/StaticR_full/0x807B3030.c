/* Function at 0x807B3030, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807B3030(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807B3038
    *(0xc + r1) = r31; // stw @ 0x807B3040
    *(8 + r1) = r30; // stw @ 0x807B3044
    r30 = r3;
    r4 = *(0 + r4); // lwz @ 0x807B304C
    r3 = *(0x1cc + r3); // lwz @ 0x807B3050
    r0 = *(0x2c + r4); // lha @ 0x807B3054
    /* clrlwi r31, r0, 0x18 */ // 0x807B3058
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* clrlwi r0, r3, 0x18 */ // 0x807B3060
    if (!=) goto 0x0x807b3090;
    /* li r31, 0 */ // 0x807B306C
    r3 = *(4 + r30); // lwz @ 0x807B3070
    /* li r4, 3 */ // 0x807B3074
    FUN_805ECA00(r4); // bl 0x805ECA00
    r31 = r31 + 1; // 0x807B307C
    r30 = r30 + 4; // 0x807B3080
    if (<) goto 0x0x807b3070;
    /* b 0x807b30b0 */ // 0x807B308C
    /* li r31, 0 */ // 0x807B3090
    r3 = *(4 + r30); // lwz @ 0x807B3094
    /* li r4, 3 */ // 0x807B3098
    FUN_805ECA18(r4); // bl 0x805ECA18
    r31 = r31 + 1; // 0x807B30A0
    r30 = r30 + 4; // 0x807B30A4
    if (<) goto 0x0x807b3094;
    r0 = *(0x14 + r1); // lwz @ 0x807B30B0
    r31 = *(0xc + r1); // lwz @ 0x807B30B4
    r30 = *(8 + r1); // lwz @ 0x807B30B8
    return;
}