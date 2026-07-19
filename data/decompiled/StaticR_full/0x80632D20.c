/* Function at 0x80632D20, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80632D20(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80632D2C
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x80632D34
    r12 = *(0x14 + r12); // lwz @ 0x80632D38
    /* mtctr r12 */ // 0x80632D3C
    /* bctrl  */ // 0x80632D40
    if (==) goto 0x0x80632d58;
    r3 = *(0 + r3); // lwz @ 0x80632D4C
    /* lfs f0, 0x24(r3) */ // 0x80632D50
    /* stfs f0, 0x34(r31) */ // 0x80632D54
    /* lis r3, 0 */ // 0x80632D58
    /* li r0, 1 */ // 0x80632D5C
    /* lfs f0, 0(r3) */ // 0x80632D60
    /* lis r3, 0 */ // 0x80632D64
    /* stfs f0, 0x14(r31) */ // 0x80632D68
    *(0x51 + r31) = r0; // stb @ 0x80632D6C
    r3 = *(0 + r3); // lwz @ 0x80632D70
    FUN_8079D8F8(r3); // bl 0x8079D8F8
    r3 = r31;
    /* li r4, 0 */ // 0x80632D7C
    FUN_80632FC4(r3, r4); // bl 0x80632FC4
    r0 = *(0x14 + r1); // lwz @ 0x80632D84
    r31 = *(0xc + r1); // lwz @ 0x80632D88
    return;
}