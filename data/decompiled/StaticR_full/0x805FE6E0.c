/* Function at 0x805FE6E0, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805FE6E0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805FE6EC
    r31 = r3;
    r0 = *(0 + r4); // lwz @ 0x805FE6F4
    /* rlwinm. r0, r0, 0, 0xe, 0xe */ // 0x805FE6F8
    if (==) goto 0x0x805fe710;
    r3 = r4;
    /* lis r4, 2 */ // 0x805FE704
    FUN_80842FAC(r3, r4); // bl 0x80842FAC
    /* b 0x805fe714 */ // 0x805FE70C
    /* li r3, 0 */ // 0x805FE710
    if (==) goto 0x0x805fe74c;
    /* lis r4, 0 */ // 0x805FE71C
    r3 = *(4 + r31); // lwz @ 0x805FE720
    r4 = *(0 + r4); // lwz @ 0x805FE724
    r3 = *(4 + r3); // lwz @ 0x805FE728
    r0 = *(4 + r4); // lhz @ 0x805FE72C
    r0 = r0 rlwinm 0x1b; // rlwinm
    *(0x80 + r3) = r0; // stw @ 0x805FE734
    r3 = *(4 + r31); // lwz @ 0x805FE738
    r3 = *(4 + r3); // lwz @ 0x805FE73C
    r0 = *(8 + r3); // lwz @ 0x805FE740
    r0 = r0 | 8; // 0x805FE744
    *(8 + r3) = r0; // stw @ 0x805FE748
    r0 = *(0x14 + r1); // lwz @ 0x805FE74C
    r31 = *(0xc + r1); // lwz @ 0x805FE750
    return;
}