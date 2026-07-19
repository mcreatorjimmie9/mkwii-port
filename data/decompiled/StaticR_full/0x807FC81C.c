/* Function at 0x807FC81C, size=164 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_807FC81C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x807FC824
    *(0xc + r1) = r31; // stw @ 0x807FC82C
    *(8 + r1) = r30; // stw @ 0x807FC830
    r30 = r3;
    r31 = *(0xc4 + r3); // lwz @ 0x807FC838
    if (<) goto 0x0x807fc854;
    r0 = *(0xb4 + r3); // lwz @ 0x807FC844
    if (>=) goto 0x0x807fc854;
    /* li r4, 1 */ // 0x807FC850
    if (!=) goto 0x0x807fc86c;
    r12 = *(0xb0 + r3); // lwzu @ 0x807FC85C
    r12 = *(0x18 + r12); // lwz @ 0x807FC860
    /* mtctr r12 */ // 0x807FC864
    /* bctrl  */ // 0x807FC868
    r3 = *(0xb8 + r30); // lwz @ 0x807FC86C
    /* slwi r0, r31, 2 */ // 0x807FC870
    /* lwzx r3, r3, r0 */ // 0x807FC874
    r12 = *(0 + r3); // lwz @ 0x807FC878
    r12 = *(0xf0 + r12); // lwz @ 0x807FC87C
    /* mtctr r12 */ // 0x807FC880
    /* bctrl  */ // 0x807FC884
    r3 = *(0xc4 + r30); // lwz @ 0x807FC888
    r0 = *(0xbc + r30); // lwz @ 0x807FC88C
    r3 = r3 + 1; // 0x807FC890
    *(0xc4 + r30) = r3; // stw @ 0x807FC894
    if (!=) goto 0x0x807fc8a8;
    /* li r0, 0 */ // 0x807FC8A0
    *(0xc4 + r30) = r0; // stw @ 0x807FC8A4
    r0 = *(0x14 + r1); // lwz @ 0x807FC8A8
    r31 = *(0xc + r1); // lwz @ 0x807FC8AC
    r30 = *(8 + r1); // lwz @ 0x807FC8B0
    return;
}