/* Function at 0x80799FE0, size=164 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80799FE0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80799FEC
    r31 = r3;
    r4 = *(0xdc + r3); // lwz @ 0x80799FF4
    r3 = *(0 + r4); // lwz @ 0x80799FF8
    r3 = *(4 + r3); // lwz @ 0x80799FFC
    r0 = *(8 + r3); // lwz @ 0x8079A000
    /* rlwinm. r0, r0, 0, 0, 0 */ // 0x8079A004
    if (!=) goto 0x0x8079a020;
    r3 = *(0xc + r3); // lwz @ 0x8079A00C
    /* rlwinm. r0, r3, 0, 0x10, 0x10 */ // 0x8079A010
    if (!=) goto 0x0x8079a020;
    /* rlwinm. r0, r3, 0, 4, 4 */ // 0x8079A018
    if (==) goto 0x0x8079a028;
    /* li r0, 1 */ // 0x8079A020
    /* b 0x8079a02c */ // 0x8079A024
    /* li r0, 0 */ // 0x8079A028
    if (!=) goto 0x0x8079a070;
    r12 = *(0 + r31); // lwz @ 0x8079A034
    /* lis r5, 0 */ // 0x8079A038
    r3 = r31;
    /* li r4, 0x17f */ // 0x8079A040
    r12 = *(0xe4 + r12); // lwz @ 0x8079A044
    /* lfs f1, 0(r5) */ // 0x8079A048
    /* mtctr r12 */ // 0x8079A04C
    /* bctrl  */ // 0x8079A050
    if (==) goto 0x0x8079a070;
    r0 = *(0xf4 + r31); // lwz @ 0x8079A05C
    if (==) goto 0x0x8079a070;
    r4 = r0 | 1; // 0x8079A068
    FUN_807A027C(); // bl 0x807A027C
    r0 = *(0x14 + r1); // lwz @ 0x8079A070
    r31 = *(0xc + r1); // lwz @ 0x8079A074
    return;
}