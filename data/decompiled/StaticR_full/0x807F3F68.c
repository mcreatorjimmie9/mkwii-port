/* Function at 0x807F3F68, size=104 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_807F3F68(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    *(0x3c + r1) = r31; // stw @ 0x807F3F74
    r31 = r3;
    r3 = *(0xb8 + r3); // lwz @ 0x807F3F7C
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lfs f1, 0xc0(r31) */ // 0x807F3F84
    /* clrlwi r3, r3, 0x18 */ // 0x807F3F88
    r4 = r31 + 0x30; // 0x807F3F8C
    FUN_80812948(r4); // bl 0x80812948
    if (!=) goto 0x0x807f3fc8;
    /* li r0, 1 */ // 0x807F3F9C
    *(0xb0 + r31) = r0; // stw @ 0x807F3FA0
    /* lis r3, 0 */ // 0x807F3FA4
    /* lis r5, 0 */ // 0x807F3FA8
    /* lfs f2, 0(r5) */ // 0x807F3FAC
    /* li r5, 1 */ // 0x807F3FB0
    r4 = *(8 + r31); // lwz @ 0x807F3FB4
    /* lfs f1, 0(r3) */ // 0x807F3FB8
    r3 = *(0x28 + r4); // lwz @ 0x807F3FBC
    /* li r4, 0 */ // 0x807F3FC0
    FUN_805E73A4(r5, r4); // bl 0x805E73A4
    r3 = *(0xb8 + r31); // lwz @ 0x807F3FC8
    FUN_8061DA88(r4); // bl 0x8061DA88
}