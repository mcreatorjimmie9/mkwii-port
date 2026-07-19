/* Function at 0x805FB704, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805FB704(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805FB710
    r31 = r3;
    r3 = *(0x90 + r3); // lwz @ 0x805FB718
    FUN_80629B44(); // bl 0x80629B44
    /* lis r3, 0 */ // 0x805FB720
    /* lfs f0, 0(r3) */ // 0x805FB724
    /* stfs f0, 0x94(r31) */ // 0x805FB728
    /* stfs f0, 0x98(r31) */ // 0x805FB72C
    /* stfs f0, 0xa0(r31) */ // 0x805FB730
    /* stfs f0, 0x9c(r31) */ // 0x805FB734
    /* stfs f0, 0x22c(r31) */ // 0x805FB738
    r31 = *(0xc + r1); // lwz @ 0x805FB73C
    r0 = *(0x14 + r1); // lwz @ 0x805FB740
    return;
}