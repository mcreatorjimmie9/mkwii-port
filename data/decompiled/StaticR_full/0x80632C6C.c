/* Function at 0x80632C6C, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80632C6C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x80632C74
    /* lis r9, 0 */ // 0x80632C78
    *(0x14 + r1) = r0; // stw @ 0x80632C7C
    /* li r8, 0 */ // 0x80632C80
    /* lfs f0, 0(r5) */ // 0x80632C84
    r9 = r9 + 0; // 0x80632C88
    *(0xc + r1) = r31; // stw @ 0x80632C8C
    /* li r5, 0xff */ // 0x80632C90
    /* li r7, -1 */ // 0x80632C94
    /* lis r6, 0 */ // 0x80632C98
    *(0 + r3) = r9; // stw @ 0x80632C9C
    /* li r0, 1 */ // 0x80632CA0
    r31 = r3;
    *(4 + r3) = r4; // stw @ 0x80632CA8
    *(8 + r3) = r8; // stw @ 0x80632CAC
    /* stfs f0, 0xc(r3) */ // 0x80632CB0
    /* stfs f0, 0x14(r3) */ // 0x80632CB4
    *(0x20 + r3) = r8; // stb @ 0x80632CB8
    *(0x24 + r3) = r5; // stw @ 0x80632CBC
    *(0x2c + r3) = r8; // stw @ 0x80632CC0
    *(0x30 + r3) = r7; // sth @ 0x80632CC4
    r5 = *(0 + r6); // lwzu @ 0x80632CC8
    r4 = *(4 + r6); // lwz @ 0x80632CCC
    *(0x3c + r3) = r4; // stw @ 0x80632CD0
    *(0x38 + r3) = r5; // stw @ 0x80632CD4
    r4 = *(8 + r6); // lwz @ 0x80632CD8
    *(0x40 + r3) = r4; // stw @ 0x80632CDC
    /* stfs f0, 0x44(r3) */ // 0x80632CE0
    *(0x4c + r3) = r7; // stw @ 0x80632CE4
    *(0x50 + r3) = r8; // stb @ 0x80632CE8
    *(0x51 + r3) = r0; // stb @ 0x80632CEC
    /* li r3, 0x38 */ // 0x80632CF0
    FUN_805E3430(r3); // bl 0x805E3430
}