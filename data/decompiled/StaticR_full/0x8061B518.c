/* Function at 0x8061B518, size=68 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_8061B518(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x8061B520
    r5 = *(0 + r3); // lwz @ 0x8061B524
    r4 = *(4 + r5); // lwz @ 0x8061B528
    r0 = *(8 + r4); // lwz @ 0x8061B52C
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x8061B530
    if (!=) goto 0x0x8061b54c;
    r4 = *(4 + r5); // lwz @ 0x8061B538
    /* li r0, 1 */ // 0x8061B53C
    *(0x80 + r4) = r0; // stw @ 0x8061B540
    FUN_8061DFF8(); // bl 0x8061DFF8
    FUN_80612208(); // bl 0x80612208
    r0 = *(0x14 + r1); // lwz @ 0x8061B54C
    return;
}