/* Function at 0x807BC6D8, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807BC6D8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807BC6E4
    r31 = r3;
    r0 = *(0x160 + r3); // lbz @ 0x807BC6EC
    if (==) goto 0x0x807bc754;
    r0 = *(0x161 + r3); // lbz @ 0x807BC6F8
    if (!=) goto 0x0x807bc75c;
    r0 = *(0x162 + r3); // lbz @ 0x807BC704
    if (==) goto 0x0x807bc724;
    r3 = *(0x140 + r3); // lwz @ 0x807BC710
    r3 = *(0 + r3); // lwz @ 0x807BC714
    FUN_807B6158(); // bl 0x807B6158
    if (!=) goto 0x0x807bc75c;
    r3 = *(0x140 + r31); // lwz @ 0x807BC724
    r3 = *(0 + r3); // lwz @ 0x807BC728
    FUN_8061DA88(); // bl 0x8061DA88
    r4 = r3;
    r3 = *(0x144 + r31); // lwz @ 0x807BC734
    r12 = *(0x34 + r3); // lwz @ 0x807BC738
    r12 = *(0x30 + r12); // lwz @ 0x807BC73C
    /* mtctr r12 */ // 0x807BC740
    /* bctrl  */ // 0x807BC744
    /* li r0, 1 */ // 0x807BC748
    *(0x161 + r31) = r0; // stb @ 0x807BC74C
    /* b 0x807bc75c */ // 0x807BC750
}