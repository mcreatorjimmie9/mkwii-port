/* Function at 0x80882038, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80882038(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x80882040
    *(0xc + r1) = r31; // stw @ 0x80882048
    /* lis r31, 0 */ // 0x8088204C
    r31 = r31 + 0; // 0x80882050
    *(8 + r1) = r30; // stw @ 0x80882054
    r30 = r3;
    FUN_8089B9C4(); // bl 0x8089B9C4
    /* lfs f1, 0xc(r31) */ // 0x80882060
    /* lis r4, 0 */ // 0x80882064
    /* lfs f2, 8(r31) */ // 0x80882068
    r4 = r4 + 0; // 0x8088206C
    /* lfs f0, 0x10(r31) */ // 0x80882070
    r3 = r30;
    *(0 + r30) = r4; // stw @ 0x80882078
    /* stfs f2, 0xb0(r30) */ // 0x8088207C
    /* stfs f1, 0xb4(r30) */ // 0x80882080
    /* stfs f1, 0xb8(r30) */ // 0x80882084
    /* stfs f0, 0xbc(r30) */ // 0x80882088
    r31 = *(0xc + r1); // lwz @ 0x8088208C
    r30 = *(8 + r1); // lwz @ 0x80882090
    r0 = *(0x14 + r1); // lwz @ 0x80882094
    return;
}