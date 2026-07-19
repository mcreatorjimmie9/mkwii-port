/* Function at 0x805AAC14, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805AAC14(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x805AAC24
    *(8 + r1) = r30; // stw @ 0x805AAC28
    r30 = r4;
    r3 = *(0 + r31); // lwz @ 0x805AAC30
    r3 = *(0x54 + r3); // lwz @ 0x805AAC34
    r3 = *(0x24 + r3); // lwz @ 0x805AAC38
    r12 = *(0 + r3); // lwz @ 0x805AAC3C
    r12 = *(0xc + r12); // lwz @ 0x805AAC40
    /* mtctr r12 */ // 0x805AAC44
    /* bctrl  */ // 0x805AAC48
    /* subfic r4, r3, 1 */ // 0x805AAC4C
    r0 = r3 + -1; // 0x805AAC50
    r0 = r4 | r0; // 0x805AAC54
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x805AAC58
    if (!=) goto 0x0x805aaca0;
    r3 = *(0 + r31); // lwz @ 0x805AAC60
    r4 = r30;
    r3 = *(0x54 + r3); // lwz @ 0x805AAC68
    FUN_805E3430(r4); // bl 0x805E3430
    /* lis r3, 0 */ // 0x805AAC70
    r3 = *(0 + r3); // lwz @ 0x805AAC74
    if (==) goto 0x0x805aac90;
    r12 = *(0 + r3); // lwz @ 0x805AAC80
    r12 = *(0x10 + r12); // lwz @ 0x805AAC84
}