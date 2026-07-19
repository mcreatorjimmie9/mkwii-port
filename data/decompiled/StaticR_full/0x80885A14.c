/* Function at 0x80885A14, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80885A14(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x80885A20
    r31 = r3;
    r5 = *(0x108 + r3); // lwz @ 0x80885A28
    r0 = *(0x10c + r3); // lwz @ 0x80885A2C
    *(0xc + r1) = r0; // stw @ 0x80885A30
    *(8 + r1) = r5; // stw @ 0x80885A34
    r0 = *(0x110 + r3); // lwz @ 0x80885A38
    *(0x10 + r1) = r0; // stw @ 0x80885A3C
    r0 = *(0x146 + r3); // lbz @ 0x80885A40
    if (==) goto 0x0x80885a78;
    /* lis r5, 0 */ // 0x80885A4C
    r6 = *(0x138 + r3); // lha @ 0x80885A50
    r5 = *(0 + r5); // lwz @ 0x80885A54
    r0 = *(0x20 + r5); // lwz @ 0x80885A58
    r0 = r6 + r0; // 0x80885A5C
    /* subf r4, r4, r0 */ // 0x80885A60
    FUN_8088533C(); // bl 0x8088533C
    /* lfs f0, 8(r1) */ // 0x80885A68
    /* fadds f0, f0, f1 */ // 0x80885A6C
    /* stfs f0, 8(r1) */ // 0x80885A70
    /* b 0x80885aa0 */ // 0x80885A74
    /* lis r5, 0 */ // 0x80885A78
    r6 = *(0x138 + r3); // lha @ 0x80885A7C
    r5 = *(0 + r5); // lwz @ 0x80885A80
    r0 = *(0x20 + r5); // lwz @ 0x80885A84
    r0 = r6 + r0; // 0x80885A88
    /* subf r4, r4, r0 */ // 0x80885A8C
    FUN_8088533C(); // bl 0x8088533C
    /* lfs f0, 8(r1) */ // 0x80885A94
    /* fsubs f0, f0, f1 */ // 0x80885A98
    /* stfs f0, 8(r1) */ // 0x80885A9C
    r3 = r31 + 0x17c; // 0x80885AA0
    r4 = r31 + 0x120; // 0x80885AA4
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}