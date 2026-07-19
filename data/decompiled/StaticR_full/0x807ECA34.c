/* Function at 0x807ECA34, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807ECA34(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r3 = r4;
    *(0x14 + r1) = r0; // stw @ 0x807ECA40
    *(0xc + r1) = r31; // stw @ 0x807ECA44
    r31 = r5;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807ECA50
    r0 = r3 rlwinm 2; // rlwinm
    r4 = *(0 + r4); // lwz @ 0x807ECA58
    /* li r5, 1 */ // 0x807ECA5C
    r3 = r31;
    r4 = *(0x68 + r4); // lwz @ 0x807ECA64
    /* lwzx r4, r4, r0 */ // 0x807ECA68
    *(0xa9 + r4) = r5; // stb @ 0x807ECA6C
    r31 = *(0xc + r1); // lwz @ 0x807ECA70
    r0 = *(0x14 + r1); // lwz @ 0x807ECA74
    return;
}