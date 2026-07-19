/* Function at 0x8061B3D0, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_8061B3D0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8061B3D8
    *(0x14 + r1) = r0; // stw @ 0x8061B3DC
    *(0xc + r1) = r31; // stw @ 0x8061B3E0
    r31 = r3;
    r4 = *(0 + r4); // lwz @ 0x8061B3E8
    r0 = *(0xb78 + r4); // lwz @ 0x8061B3EC
    if (!=) goto 0x0x8061b400;
    FUN_8061DFF8(); // bl 0x8061DFF8
    FUN_8060F1E4(); // bl 0x8060F1E4
    r3 = r31;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8061B408
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8061B410
    r3 = *(0x68 + r3); // lwz @ 0x8061B414
    /* lwzx r3, r3, r0 */ // 0x8061B418
    FUN_8074257C(r4); // bl 0x8074257C
    r3 = r31;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8061B428
    /* clrlwi r0, r3, 0x18 */ // 0x8061B42C
    r3 = *(0 + r4); // lwz @ 0x8061B430
    /* mulli r0, r0, 0x248 */ // 0x8061B434
    r3 = *(0x14 + r3); // lwz @ 0x8061B438
    r3 = r3 + r0; // 0x8061B43C
    FUN_80824024(); // bl 0x80824024
    r0 = *(0x14 + r1); // lwz @ 0x8061B444
    r31 = *(0xc + r1); // lwz @ 0x8061B448
    return;
}