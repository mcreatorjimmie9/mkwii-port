/* Function at 0x808CE6D4, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808CE6D4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x808CE6DC
    *(0x14 + r1) = r0; // stw @ 0x808CE6E0
    *(0xc + r1) = r31; // stw @ 0x808CE6E4
    r31 = r3;
    r4 = *(0 + r4); // lwz @ 0x808CE6EC
    r4 = *(0 + r4); // lwz @ 0x808CE6F0
    r0 = *(0x38b + r4); // lbz @ 0x808CE6F4
    if (==) goto 0x0x808ce70c;
    r4 = *(0x44 + r3); // lwz @ 0x808CE700
    r0 = r4 + 1; // 0x808CE704
    *(0x44 + r3) = r0; // stw @ 0x808CE708
    r0 = *(8 + r3); // lwz @ 0x808CE70C
    if (!=) goto 0x0x808ce768;
    r12 = *(0 + r31); // lwz @ 0x808CE718
    r3 = r31;
    r12 = *(0x64 + r12); // lwz @ 0x808CE720
    /* mtctr r12 */ // 0x808CE724
    /* bctrl  */ // 0x808CE728
    if (==) goto 0x0x808ce744;
    r3 = *(0x44 + r31); // lwz @ 0x808CE734
    r0 = r3 + 1; // 0x808CE738
    *(0x44 + r31) = r0; // stw @ 0x808CE73C
    /* b 0x808ce768 */ // 0x808CE740
    r3 = *(0x44 + r31); // lwz @ 0x808CE744
    r0 = *(0x1c + r31); // lwz @ 0x808CE748
    if (!=) goto 0x0x808ce768;
    /* lis r4, 0 */ // 0x808CE754
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x808CE75C
    /* li r4, -1 */ // 0x808CE760
    FUN_80671C48(r4, r3, r4); // bl 0x80671C48
    r0 = *(0x14 + r1); // lwz @ 0x808CE768
    r31 = *(0xc + r1); // lwz @ 0x808CE76C
    return;
}