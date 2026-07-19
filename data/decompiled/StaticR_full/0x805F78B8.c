/* Function at 0x805F78B8, size=208 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_805F78B8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805F78C4
    r31 = r3;
    r4 = *(0 + r3); // lwz @ 0x805F78CC
    r4 = *(4 + r4); // lwz @ 0x805F78D0
    r0 = *(8 + r4); // lwz @ 0x805F78D4
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r4) = r0; // stw @ 0x805F78DC
    r4 = *(0 + r3); // lwz @ 0x805F78E0
    r4 = *(4 + r4); // lwz @ 0x805F78E4
    r0 = *(4 + r4); // lwz @ 0x805F78E8
    r0 = r0 rlwinm 0; // rlwinm
    *(4 + r4) = r0; // stw @ 0x805F78F0
    FUN_8061DC48(); // bl 0x8061DC48
    /* li r5, 1 */ // 0x805F78F8
    *(0x170 + r3) = r5; // stb @ 0x805F78FC
    /* lis r3, 0 */ // 0x805F7900
    /* li r4, 0 */ // 0x805F7904
    r3 = *(0 + r3); // lwz @ 0x805F7908
    r3 = *(0xb70 + r3); // lwz @ 0x805F790C
    r0 = r3 + -3; // 0x805F7910
    if (>) goto 0x0x805f792c;
    r0 = r5 << r0; // slw
    /* andi. r0, r0, 0xc1 */ // 0x805F7920
    if (==) goto 0x0x805f792c;
    r4 = r5;
    if (==) goto 0x0x805f794c;
    r0 = *(0xcc + r31); // lhz @ 0x805F7934
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x805F7938
    if (!=) goto 0x0x805f794c;
    r3 = r31;
    FUN_8061DFF8(r3); // bl 0x8061DFF8
    FUN_8060F1E4(r3); // bl 0x8060F1E4
    /* li r0, 0 */ // 0x805F794C
    /* li r3, -1 */ // 0x805F7950
    *(0x1c + r31) = r3; // stw @ 0x805F7954
    r3 = r31;
    /* li r4, 2 */ // 0x805F795C
    /* li r5, 0 */ // 0x805F7960
    *(0xf6 + r31) = r0; // sth @ 0x805F7964
    /* li r6, 1 */ // 0x805F7968
    *(0xcc + r31) = r0; // sth @ 0x805F796C
    FUN_8061E8CC(r4, r5, r6); // bl 0x8061E8CC
    r0 = *(0x14 + r1); // lwz @ 0x805F7974
    r31 = *(0xc + r1); // lwz @ 0x805F7978
    return;
}