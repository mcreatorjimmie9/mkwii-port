/* Function at 0x8060EF78, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_8060EF78(int r3, int r5)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x8060EF80
    r5 = *(0 + r3); // lwz @ 0x8060EF84
    r5 = *(4 + r5); // lwz @ 0x8060EF88
    r0 = *(8 + r5); // lwz @ 0x8060EF8C
    r0 = r0 | 0x100; // 0x8060EF90
    *(8 + r5) = r0; // stw @ 0x8060EF94
    *(0x1a8 + r3) = r4; // sth @ 0x8060EF98
    FUN_8061E908(); // bl 0x8061E908
    FUN_805FA010(); // bl 0x805FA010
    r0 = *(0x14 + r1); // lwz @ 0x8060EFA4
    return;
}