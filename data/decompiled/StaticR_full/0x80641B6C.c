/* Function at 0x80641B6C, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80641B6C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r5 = r4 | 4; // 0x80641B74
    /* li r4, 0 */ // 0x80641B78
    *(0x14 + r1) = r0; // stw @ 0x80641B7C
    *(0xc + r1) = r31; // stw @ 0x80641B80
    r31 = r3;
    FUN_805EB22C(r4); // bl 0x805EB22C
    /* lis r4, 0 */ // 0x80641B8C
    /* li r0, 0 */ // 0x80641B90
    r4 = r4 + 0; // 0x80641B94
    *(0x50 + r31) = r0; // stw @ 0x80641B98
    r3 = r31;
    *(0x4c + r31) = r0; // stw @ 0x80641BA0
    *(0x54 + r31) = r0; // stb @ 0x80641BA4
    *(0 + r31) = r4; // stw @ 0x80641BA8
    r31 = *(0xc + r1); // lwz @ 0x80641BAC
    r0 = *(0x14 + r1); // lwz @ 0x80641BB0
    return;
}