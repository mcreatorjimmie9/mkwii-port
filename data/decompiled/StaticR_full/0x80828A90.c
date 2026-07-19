/* Function at 0x80828A90, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80828A90(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80828A9C
    r31 = r3;
    r0 = *(0x9c + r3); // lwz @ 0x80828AA4
    if (==) goto 0x0x80828ac8;
    r3 = r0;
    /* li r4, 1 */ // 0x80828AB4
    r12 = *(0 + r3); // lwz @ 0x80828AB8
    r12 = *(0xc + r12); // lwz @ 0x80828ABC
    /* mtctr r12 */ // 0x80828AC0
    /* bctrl  */ // 0x80828AC4
    r3 = *(0xa0 + r31); // lwz @ 0x80828AC8
    if (==) goto 0x0x80828ae8;
    r12 = *(0 + r3); // lwz @ 0x80828AD4
    /* li r4, 1 */ // 0x80828AD8
    r12 = *(0xc + r12); // lwz @ 0x80828ADC
    /* mtctr r12 */ // 0x80828AE0
    /* bctrl  */ // 0x80828AE4
    r3 = *(0xa8 + r31); // lwz @ 0x80828AE8
    if (==) goto 0x0x80828b14;
    r0 = *(0x78 + r31); // lwz @ 0x80828AF4
    r12 = *(0 + r3); // lwz @ 0x80828AF8
    r0 = r0 rlwinm 0; // rlwinm
    /* cntlzw r0, r0 */ // 0x80828B00
    r12 = *(0xc + r12); // lwz @ 0x80828B04
    /* srwi r4, r0, 5 */ // 0x80828B08
    /* mtctr r12 */ // 0x80828B0C
    /* bctrl  */ // 0x80828B10
    r3 = *(0xa4 + r31); // lwz @ 0x80828B14
    FUN_808179C0(); // bl 0x808179C0
    r0 = *(0x14 + r1); // lwz @ 0x80828B1C
    r31 = *(0xc + r1); // lwz @ 0x80828B20
    return;
}