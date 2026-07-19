/* Function at 0x8061B320, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

int FUN_8061B320(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x8061B328
    r4 = *(0 + r3); // lwz @ 0x8061B32C
    r4 = *(4 + r4); // lwz @ 0x8061B330
    r0 = *(8 + r4); // lwz @ 0x8061B334
    /* rlwinm. r0, r0, 0, 0xd, 0xd */ // 0x8061B338
    if (!=) goto 0x0x8061b34c;
    FUN_8061DFF8(); // bl 0x8061DFF8
    r3 = r3 + 0x264; // 0x8061B344
    FUN_8061692C(r3); // bl 0x8061692C
    r0 = *(0x14 + r1); // lwz @ 0x8061B34C
    return;
}