/* Function at 0x807623C8, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807623C8(int r3, int r4, int r5, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x807623D0
    *(0x14 + r1) = r0; // stw @ 0x807623D4
    /* lfs f0, 0(r3) */ // 0x807623D8
    *(0xc + r1) = r31; // stw @ 0x807623DC
    r31 = r5;
    /* stfs f0, 8(r7) */ // 0x807623E4
    /* stfs f0, 4(r7) */ // 0x807623E8
    /* stfs f0, 0(r7) */ // 0x807623EC
    r3 = *(0 + r4); // lwz @ 0x807623F0
    r3 = *(4 + r3); // lwz @ 0x807623F4
    r0 = *(4 + r3); // lwz @ 0x807623F8
    /* rlwinm. r0, r0, 0, 0xd, 0xd */ // 0x807623FC
    if (==) goto 0x0x80762428;
    r3 = r4;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8076240C
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x80762414
    r3 = *(0x68 + r3); // lwz @ 0x80762418
    /* lwzx r3, r3, r0 */ // 0x8076241C
    FUN_8073AF54(r4); // bl 0x8073AF54
    /* b 0x8076242c */ // 0x80762424
    /* li r31, 0 */ // 0x80762428
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x80762430
    r0 = *(0x14 + r1); // lwz @ 0x80762434
    return;
}