/* Function at 0x807F8C84, size=104 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807F8C84(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x807F8C8C
    /* lis r5, 0 */ // 0x807F8C90
    *(0x24 + r1) = r0; // stw @ 0x807F8C94
    /* li r0, 1 */ // 0x807F8C98
    r4 = r4 + 0; // 0x807F8C9C
    *(0x1c + r1) = r31; // stw @ 0x807F8CA0
    r31 = r3;
    *(0xb4 + r3) = r0; // stb @ 0x807F8CA8
    /* lfs f1, 0(r5) */ // 0x807F8CB0
    FUN_805A443C(r3); // bl 0x805A443C
    /* lfs f0, 8(r1) */ // 0x807F8CB8
    /* li r0, 2 */ // 0x807F8CBC
    /* stfs f0, 0xb8(r31) */ // 0x807F8CC0
    /* lfs f0, 0xc(r1) */ // 0x807F8CC4
    /* stfs f0, 0xbc(r31) */ // 0x807F8CC8
    /* lfs f0, 0x10(r1) */ // 0x807F8CCC
    /* stfs f0, 0xc0(r31) */ // 0x807F8CD0
    *(0xd4 + r31) = r0; // stw @ 0x807F8CD4
    r31 = *(0x1c + r1); // lwz @ 0x807F8CD8
    r0 = *(0x24 + r1); // lwz @ 0x807F8CDC
    return;
}