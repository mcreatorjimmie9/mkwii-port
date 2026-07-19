/* Function at 0x8060775C, size=76 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_8060775C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x80607764
    r5 = *(0 + r3); // lwz @ 0x80607768
    r4 = *(4 + r5); // lwz @ 0x8060776C
    r0 = *(0xc + r4); // lwz @ 0x80607770
    /* rlwinm. r0, r0, 0, 6, 6 */ // 0x80607774
    if (==) goto 0x0x80607798;
    r4 = *(4 + r5); // lwz @ 0x8060777C
    r0 = *(0xc + r4); // lwz @ 0x80607780
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x80607788
    FUN_8061DC48(); // bl 0x8061DC48
    /* li r0, 0 */ // 0x80607790
    *(0x171 + r3) = r0; // stb @ 0x80607794
    r0 = *(0x14 + r1); // lwz @ 0x80607798
    return;
}