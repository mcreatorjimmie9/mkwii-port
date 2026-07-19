/* Function at 0x807F3E4C, size=148 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_807F3E4C(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    *(0x3c + r1) = r31; // stw @ 0x807F3E58
    r31 = r3;
    r3 = *(0xb8 + r3); // lwz @ 0x807F3E60
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lfs f1, 0xc0(r31) */ // 0x807F3E68
    /* clrlwi r3, r3, 0x18 */ // 0x807F3E6C
    r4 = r31 + 0x30; // 0x807F3E70
    FUN_80812948(r4); // bl 0x80812948
    if (==) goto 0x0x807f3eb0;
    /* li r0, 2 */ // 0x807F3E80
    *(0xb0 + r31) = r0; // stw @ 0x807F3E84
    /* lis r3, 0 */ // 0x807F3E88
    /* lis r5, 0 */ // 0x807F3E8C
    /* lfs f2, 0(r5) */ // 0x807F3E90
    /* li r5, 1 */ // 0x807F3E94
    r4 = *(8 + r31); // lwz @ 0x807F3E98
    /* lfs f1, 0(r3) */ // 0x807F3E9C
    r3 = *(0x28 + r4); // lwz @ 0x807F3EA0
    /* li r4, 1 */ // 0x807F3EA4
    FUN_805E73A4(r5, r4); // bl 0x805E73A4
    /* b 0x807f3ed8 */ // 0x807F3EAC
    r3 = *(0xb8 + r31); // lwz @ 0x807F3EB0
    FUN_8061E2D8(r4); // bl 0x8061E2D8
    /* lfs f1, 0xbc(r31) */ // 0x807F3EB8
    /* clrlwi r3, r3, 0x18 */ // 0x807F3EBC
    r4 = r31 + 0x30; // 0x807F3EC0
    FUN_80812948(r4); // bl 0x80812948
    if (!=) goto 0x0x807f3ed8;
    /* li r0, 0 */ // 0x807F3ED0
    *(0xb0 + r31) = r0; // stw @ 0x807F3ED4
    r3 = *(0xb8 + r31); // lwz @ 0x807F3ED8
    FUN_8061DA88(); // bl 0x8061DA88
}