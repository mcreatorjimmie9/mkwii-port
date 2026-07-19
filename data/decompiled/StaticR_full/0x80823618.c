/* Function at 0x80823618, size=200 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80823618(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80823620
    *(0x14 + r1) = r0; // stw @ 0x80823624
    *(0xc + r1) = r31; // stw @ 0x80823628
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x80823630
    /* li r4, 2 */ // 0x80823634
    FUN_805C5788(r4); // bl 0x805C5788
    if (!=) goto 0x0x8082364c;
    /* li r3, 0 */ // 0x80823644
    /* b 0x808236cc */ // 0x80823648
    r3 = *(0 + r31); // lwz @ 0x8082364C
    r3 = *(4 + r3); // lwz @ 0x80823650
    r3 = *(8 + r3); // lwz @ 0x80823654
    /* clrlwi. r0, r3, 0x1f */ // 0x80823658
    if (==) goto 0x0x80823668;
    /* li r3, 0 */ // 0x80823660
    /* b 0x808236cc */ // 0x80823664
    /* rlwinm. r0, r3, 0, 0xd, 0xd */ // 0x80823668
    if (==) goto 0x0x80823678;
    /* li r3, 0 */ // 0x80823670
    /* b 0x808236cc */ // 0x80823674
    r0 = *(0xc8 + r31); // lwz @ 0x80823678
    if (==) goto 0x0x80823694;
    r0 = *(0xc + r31); // lhz @ 0x80823684
    r0 = r0 | 4; // 0x80823688
    *(0xc + r31) = r0; // sth @ 0x8082368C
    /* b 0x808236c8 */ // 0x80823690
    r0 = *(0x8c + r31); // lwz @ 0x80823694
    if (==) goto 0x0x808236b0;
    r0 = *(0xc + r31); // lhz @ 0x808236A0
    r0 = r0 | 2; // 0x808236A4
    *(0xc + r31) = r0; // sth @ 0x808236A8
    /* b 0x808236c8 */ // 0x808236AC
    r0 = *(0x58 + r31); // lwz @ 0x808236B0
    if (==) goto 0x0x808236c8;
    r0 = *(0xc + r31); // lhz @ 0x808236BC
    r0 = r0 | 1; // 0x808236C0
    *(0xc + r31) = r0; // sth @ 0x808236C4
    /* li r3, 1 */ // 0x808236C8
    r0 = *(0x14 + r1); // lwz @ 0x808236CC
    r31 = *(0xc + r1); // lwz @ 0x808236D0
    return;
}