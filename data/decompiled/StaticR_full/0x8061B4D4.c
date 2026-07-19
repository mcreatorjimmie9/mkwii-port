/* Function at 0x8061B4D4, size=68 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_8061B4D4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x8061B4DC
    r5 = *(0 + r3); // lwz @ 0x8061B4E0
    r4 = *(4 + r5); // lwz @ 0x8061B4E4
    r0 = *(8 + r4); // lwz @ 0x8061B4E8
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x8061B4EC
    if (!=) goto 0x0x8061b508;
    r4 = *(4 + r5); // lwz @ 0x8061B4F4
    /* li r0, 0 */ // 0x8061B4F8
    *(0x80 + r4) = r0; // stw @ 0x8061B4FC
    FUN_8061DFF8(); // bl 0x8061DFF8
    FUN_80612208(); // bl 0x80612208
    r0 = *(0x14 + r1); // lwz @ 0x8061B508
    return;
}