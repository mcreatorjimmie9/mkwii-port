/* Function at 0x806767FC, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_806767FC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80676810
    r30 = r3;
    r0 = *(0x178 + r3); // lwz @ 0x80676818
    if (==) goto 0x0x8067688c;
    r3 = r0;
    r12 = *(0 + r3); // lwz @ 0x80676828
    r12 = *(0x68 + r12); // lwz @ 0x8067682C
    /* mtctr r12 */ // 0x80676830
    /* bctrl  */ // 0x80676834
    r0 = *(0 + r31); // lha @ 0x80676838
    *(0x10 + r3) = r0; // sth @ 0x8067683C
    r0 = *(2 + r31); // lha @ 0x80676840
    *(0x12 + r3) = r0; // sth @ 0x80676844
    r0 = *(4 + r31); // lha @ 0x80676848
    *(0x14 + r3) = r0; // sth @ 0x8067684C
    r0 = *(6 + r31); // lha @ 0x80676850
    *(0x16 + r3) = r0; // sth @ 0x80676854
    r3 = *(0x178 + r30); // lwz @ 0x80676858
    r12 = *(0 + r3); // lwz @ 0x8067685C
    r12 = *(0x68 + r12); // lwz @ 0x80676860
    /* mtctr r12 */ // 0x80676864
    /* bctrl  */ // 0x80676868
    r0 = *(0 + r31); // lha @ 0x8067686C
    *(0x18 + r3) = r0; // sth @ 0x80676870
    r0 = *(2 + r31); // lha @ 0x80676874
    *(0x1a + r3) = r0; // sth @ 0x80676878
    r0 = *(4 + r31); // lha @ 0x8067687C
    *(0x1c + r3) = r0; // sth @ 0x80676880
    r0 = *(6 + r31); // lha @ 0x80676884
    *(0x1e + r3) = r0; // sth @ 0x80676888
    r0 = *(0x14 + r1); // lwz @ 0x8067688C
    r31 = *(0xc + r1); // lwz @ 0x80676890
    r30 = *(8 + r1); // lwz @ 0x80676894
    return;
}