/* Function at 0x80830124, size=180 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80830124(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x80830130
    r31 = r3;
    FUN_80829284(); // bl 0x80829284
    /* li r4, 0 */ // 0x8083013C
    /* li r3, -1 */ // 0x80830140
    r0 = *(0x78 + r31); // lwz @ 0x80830144
    /* lis r5, 0 */ // 0x80830148
    *(0x1a8 + r31) = r4; // sth @ 0x8083014C
    /* rlwinm. r0, r0, 0, 0x18, 0x19 */ // 0x80830150
    *(0x1ac + r31) = r3; // stw @ 0x80830154
    *(0x1b0 + r31) = r4; // stw @ 0x80830158
    r4 = *(0 + r5); // lwzu @ 0x8083015C
    *(8 + r1) = r4; // stw @ 0x80830160
    r3 = *(4 + r5); // lwz @ 0x80830164
    r0 = *(8 + r5); // lwz @ 0x80830168
    *(0xc + r1) = r3; // stw @ 0x8083016C
    *(0x10 + r1) = r0; // stw @ 0x80830170
    if (!=) goto 0x0x80830184;
    *(0x168 + r31) = r4; // stw @ 0x80830178
    *(0x16c + r31) = r3; // stw @ 0x8083017C
    *(0x170 + r31) = r0; // stw @ 0x80830180
    r0 = *(0x78 + r31); // lwz @ 0x80830184
    /* lis r3, 0 */ // 0x80830188
    /* lfs f1, 0(r3) */ // 0x8083018C
    /* li r5, 1 */ // 0x80830190
    r0 = r0 rlwinm 0; // rlwinm
    /* li r4, 0x10e */ // 0x80830198
    *(0x1ac + r31) = r5; // stw @ 0x8083019C
    /* lis r3, 0 */ // 0x808301A0
    r5 = *(0x9c + r31); // lwz @ 0x808301A4
    *(0x1ec + r31) = r4; // stw @ 0x808301A8
    /* li r4, 4 */ // 0x808301AC
    /* lfs f2, 0(r3) */ // 0x808301B0
    *(0x78 + r31) = r0; // stw @ 0x808301B4
    /* stfs f1, 0x1a0(r31) */ // 0x808301B8
    r3 = *(0x28 + r5); // lwz @ 0x808301BC
    FUN_805E70EC(r4); // bl 0x805E70EC
    r0 = *(0x24 + r1); // lwz @ 0x808301C4
    r31 = *(0x1c + r1); // lwz @ 0x808301C8
    return;
}