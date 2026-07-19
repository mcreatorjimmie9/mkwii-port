/* Function at 0x806132A4, size=56 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_806132A4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x806132AC
    r4 = *(0 + r3); // lwz @ 0x806132B0
    r4 = *(4 + r4); // lwz @ 0x806132B4
    r0 = *(0xc + r4); // lwz @ 0x806132B8
    /* rlwinm. r0, r0, 0, 4, 4 */ // 0x806132BC
    if (==) goto 0x0x806132cc;
    FUN_8061EE94(); // bl 0x8061EE94
    FUN_806451A0(); // bl 0x806451A0
    r0 = *(0x14 + r1); // lwz @ 0x806132CC
    return;
}