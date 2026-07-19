/* Function at 0x807E17F8, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_807E17F8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807E180C
    r30 = r3;
    r0 = *(0xb0 + r3); // lwz @ 0x807E1814
    if (==) goto 0x0x807e1830;
    if (==) goto 0x0x807e1830;
    if (!=) goto 0x0x807e1874;
    r3 = *(0x160 + r3); // lwz @ 0x807E1830
    r12 = *(0 + r3); // lwz @ 0x807E1834
    r12 = *(0xc + r12); // lwz @ 0x807E1838
    /* mtctr r12 */ // 0x807E183C
    /* bctrl  */ // 0x807E1840
    r3 = *(0x160 + r30); // lwz @ 0x807E1844
    r4 = r31;
    r12 = *(0 + r3); // lwz @ 0x807E184C
    r12 = *(0x78 + r12); // lwz @ 0x807E1850
    /* mtctr r12 */ // 0x807E1854
    /* bctrl  */ // 0x807E1858
    r3 = *(0x160 + r30); // lwz @ 0x807E185C
    r12 = *(0 + r3); // lwz @ 0x807E1860
    r12 = *(0x80 + r12); // lwz @ 0x807E1864
    /* mtctr r12 */ // 0x807E1868
    /* bctrl  */ // 0x807E186C
    /* b 0x807e1888 */ // 0x807E1870
    r3 = *(0x160 + r3); // lwz @ 0x807E1874
    r12 = *(0 + r3); // lwz @ 0x807E1878
    r12 = *(0x10 + r12); // lwz @ 0x807E187C
    /* mtctr r12 */ // 0x807E1880
    /* bctrl  */ // 0x807E1884
    r0 = *(0x14 + r1); // lwz @ 0x807E1888
    r31 = *(0xc + r1); // lwz @ 0x807E188C
    r30 = *(8 + r1); // lwz @ 0x807E1890
    return;
}