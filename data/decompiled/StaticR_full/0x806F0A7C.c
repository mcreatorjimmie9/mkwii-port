/* Function at 0x806F0A7C, size=148 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806F0A7C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x806F0A8C
    *(8 + r1) = r30; // stw @ 0x806F0A90
    r30 = r3;
    r3 = *(0 + r31); // lwz @ 0x806F0A98
    FUN_806E6B18(); // bl 0x806E6B18
    if (!=) goto 0x0x806f0ab0;
    /* li r3, 0 */ // 0x806F0AA8
    /* b 0x806f0af8 */ // 0x806F0AAC
    r5 = *(8 + r30); // lwz @ 0x806F0AB0
    if (==) goto 0x0x806f0af4;
    r3 = *(0 + r31); // lwz @ 0x806F0ABC
    /* li r4, 1 */ // 0x806F0AC0
    r0 = *(0x291c + r3); // lwz @ 0x806F0AC4
    /* mulli r0, r0, 0x58 */ // 0x806F0AC8
    r3 = r3 + r0; // 0x806F0ACC
    r0 = *(0x59 + r3); // lbz @ 0x806F0AD0
    r3 = *(0x48 + r3); // lwz @ 0x806F0AD4
    r0 = r4 << r0; // slw
    r0 = r5 | r0; // 0x806F0ADC
    r0 = r3 & r0; // 0x806F0AE0
    /* subf r0, r3, r0 */ // 0x806F0AE4
    /* cntlzw r0, r0 */ // 0x806F0AE8
    /* srwi r3, r0, 5 */ // 0x806F0AEC
    /* b 0x806f0af8 */ // 0x806F0AF0
    /* li r3, 0 */ // 0x806F0AF4
    r0 = *(0x14 + r1); // lwz @ 0x806F0AF8
    r31 = *(0xc + r1); // lwz @ 0x806F0AFC
    r30 = *(8 + r1); // lwz @ 0x806F0B00
    return;
}