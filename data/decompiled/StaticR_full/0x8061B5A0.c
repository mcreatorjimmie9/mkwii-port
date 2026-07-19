/* Function at 0x8061B5A0, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_8061B5A0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x8061B5A8
    r4 = *(0 + r3); // lwz @ 0x8061B5AC
    r4 = *(4 + r4); // lwz @ 0x8061B5B0
    r0 = *(0xc + r4); // lwz @ 0x8061B5B4
    /* rlwinm. r0, r0, 0, 6, 6 */ // 0x8061B5B8
    if (!=) goto 0x0x8061b5cc;
    FUN_8061DFF8(); // bl 0x8061DFF8
    /* li r4, 1 */ // 0x8061B5C4
    FUN_80607520(r4); // bl 0x80607520
    r0 = *(0x14 + r1); // lwz @ 0x8061B5CC
    return;
}