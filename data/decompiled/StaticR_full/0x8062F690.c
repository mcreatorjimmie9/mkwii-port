/* Function at 0x8062F690, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8062F690(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8062F698
    *(0x14 + r1) = r0; // stw @ 0x8062F69C
    *(0xc + r1) = r31; // stw @ 0x8062F6A0
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x8062F6A8
    r3 = *(0 + r3); // lwz @ 0x8062F6AC
    r0 = *(0x38b + r3); // lbz @ 0x8062F6B0
    if (!=) goto 0x0x8062f72c;
    /* lis r3, 0 */ // 0x8062F6BC
    r4 = *(0 + r3); // lwz @ 0x8062F6C0
    r3 = *(0x60 + r4); // lhz @ 0x8062F6C4
    r0 = *(0x94 + r4); // lhz @ 0x8062F6C8
    r3 = r3 rlwinm 0; // rlwinm
    /* andc. r0, r3, r0 */ // 0x8062F6D0
    if (==) goto 0x0x8062f72c;
    /* lis r3, 0 */ // 0x8062F6D8
    r3 = *(0 + r3); // lwz @ 0x8062F6DC
    r0 = *(0xb70 + r3); // lwz @ 0x8062F6E0
    if (==) goto 0x0x8062f6f4;
    if (!=) goto 0x0x8062f700;
    r0 = *(0xb74 + r3); // lwz @ 0x8062F6F4
    if (==) goto 0x0x8062f720;
    /* lis r4, 0 */ // 0x8062F700
    r4 = *(0 + r4); // lwz @ 0x8062F704
    r0 = *(0x25 + r4); // lbz @ 0x8062F708
    if (!=) goto 0x0x8062f720;
    FUN_805C1588(r4); // bl 0x805C1588
    if (==) goto 0x0x8062f72c;
    r0 = *(0x340 + r31); // lhz @ 0x8062F720
    r0 = r0 ~| r0; // 0x8062F724
    *(0x340 + r31) = r0; // sth @ 0x8062F728
    r0 = *(0x14 + r1); // lwz @ 0x8062F72C
    r31 = *(0xc + r1); // lwz @ 0x8062F730
    return;
}