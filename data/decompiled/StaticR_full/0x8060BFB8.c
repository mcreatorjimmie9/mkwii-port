/* Function at 0x8060BFB8, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8060BFB8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x8060BFC4
    *(0xc + r1) = r31; // stw @ 0x8060BFC8
    r31 = r3;
    if (!=) goto 0x0x8060bfe0;
    /* li r4, 0 */ // 0x8060BFD4
    /* li r5, 0 */ // 0x8060BFD8
    FUN_806107D8(r4, r5); // bl 0x806107D8
    /* li r4, 0 */ // 0x8060BFE0
    *(0xcc + r31) = r4; // stw @ 0x8060BFE4
    r3 = *(0 + r31); // lwz @ 0x8060BFE8
    *(0xd0 + r31) = r4; // stw @ 0x8060BFEC
    r3 = *(4 + r3); // lwz @ 0x8060BFF0
    r0 = *(4 + r3); // lwz @ 0x8060BFF4
    r0 = r0 rlwinm 0; // rlwinm
    *(4 + r3) = r0; // stw @ 0x8060BFFC
    r3 = *(0 + r31); // lwz @ 0x8060C000
    r3 = *(4 + r3); // lwz @ 0x8060C004
    r0 = *(4 + r3); // lwz @ 0x8060C008
    r0 = r0 rlwinm 0; // rlwinm
    *(4 + r3) = r0; // stw @ 0x8060C010
    r0 = *(0x254 + r31); // lhz @ 0x8060C014
    *(0xfc + r31) = r4; // sth @ 0x8060C018
    r0 = r0 | 2; // 0x8060C01C
    *(0x100 + r31) = r4; // sth @ 0x8060C020
    *(0xfe + r31) = r4; // sth @ 0x8060C024
    *(0x254 + r31) = r0; // sth @ 0x8060C028
    r31 = *(0xc + r1); // lwz @ 0x8060C02C
    r0 = *(0x14 + r1); // lwz @ 0x8060C030
    return;
}