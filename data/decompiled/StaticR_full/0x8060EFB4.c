/* Function at 0x8060EFB4, size=172 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_8060EFB4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x8060EFBC
    r5 = *(0 + r3); // lwz @ 0x8060EFC0
    r4 = *(4 + r5); // lwz @ 0x8060EFC4
    r0 = *(0x14 + r4); // lwz @ 0x8060EFC8
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x8060EFCC
    if (!=) goto 0x0x8060eff0;
    r5 = *(4 + r5); // lwz @ 0x8060EFD4
    /* li r0, 0 */ // 0x8060EFD8
    r4 = *(0x14 + r5); // lwz @ 0x8060EFDC
    r4 = r4 | 1; // 0x8060EFE0
    r4 = r4 | 0x80; // 0x8060EFE4
    *(0x14 + r5) = r4; // stw @ 0x8060EFE8
    *(0x1ac + r3) = r0; // sth @ 0x8060EFEC
    /* lis r4, 0 */ // 0x8060EFF0
    /* li r5, 0 */ // 0x8060EFF4
    r4 = *(0 + r4); // lwz @ 0x8060EFF8
    r4 = *(0xb70 + r4); // lwz @ 0x8060EFFC
    r0 = r4 + -3; // 0x8060F000
    if (>) goto 0x0x8060f020;
    /* li r4, 1 */ // 0x8060F00C
    r0 = r4 << r0; // slw
    /* andi. r0, r0, 0xc1 */ // 0x8060F014
    if (==) goto 0x0x8060f020;
    r5 = r4;
    if (==) goto 0x0x8060f050;
    r5 = *(0 + r3); // lwz @ 0x8060F028
    /* lis r4, 0 */ // 0x8060F02C
    r5 = *(4 + r5); // lwz @ 0x8060F030
    r0 = *(8 + r5); // lwz @ 0x8060F034
    r0 = r0 | 0x100; // 0x8060F038
    *(8 + r5) = r0; // stw @ 0x8060F03C
    r0 = *(0 + r4); // lha @ 0x8060F040
    *(0x1a8 + r3) = r0; // sth @ 0x8060F044
    FUN_8061E908(); // bl 0x8061E908
    FUN_805FA010(); // bl 0x805FA010
    r0 = *(0x14 + r1); // lwz @ 0x8060F050
    return;
}