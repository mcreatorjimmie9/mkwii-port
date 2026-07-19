/* Function at 0x808237BC, size=196 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_808237BC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 1 */ // 0x808237C4
    *(0xc + r1) = r31; // stw @ 0x808237CC
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x808237D4
    r4 = *(0 + r3); // lwz @ 0x808237D8
    r4 = *(4 + r4); // lwz @ 0x808237DC
    r6 = *(8 + r4); // lwz @ 0x808237E0
    /* andi. r0, r6, 0x102 */ // 0x808237E4
    if (!=) goto 0x0x80823804;
    /* lis r3, 0x20c */ // 0x808237EC
    r4 = *(0xc + r4); // lwz @ 0x808237F0
    r0 = r3 + 0x6000; // 0x808237F4
    /* and. r0, r4, r0 */ // 0x808237F8
    if (!=) goto 0x0x80823804;
    /* li r5, 0 */ // 0x80823800
    if (!=) goto 0x0x80823814;
    /* rlwinm. r0, r6, 0, 0x1b, 0x1b */ // 0x8082380C
    if (==) goto 0x0x8082381c;
    /* li r3, 0 */ // 0x80823814
    /* b 0x80823868 */ // 0x80823818
    r3 = r31;
    FUN_8061DFF8(r3, r3); // bl 0x8061DFF8
    FUN_8060DC74(r3, r3); // bl 0x8060DC74
    r30 = r3;
    r3 = r31;
    FUN_8061E2D8(r3, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x80823834
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8082383C
    /* li r4, 0 */ // 0x80823844
    r3 = *(0x68 + r3); // lwz @ 0x80823848
    /* lwzx r3, r3, r0 */ // 0x8082384C
    *(0x4c + r3) = r4; // stw @ 0x80823850
    if (==) goto 0x0x80823864;
    r3 = r31;
    FUN_8061DFF8(r3); // bl 0x8061DFF8
    FUN_8061F15C(r3); // bl 0x8061F15C
    r3 = r30;
    r0 = *(0x14 + r1); // lwz @ 0x80823868
    r31 = *(0xc + r1); // lwz @ 0x8082386C
    r30 = *(8 + r1); // lwz @ 0x80823870
    return;
}