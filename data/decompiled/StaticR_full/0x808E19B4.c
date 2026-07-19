/* Function at 0x808E19B4, size=40 bytes */
/* Stack frame: 0 bytes */

int FUN_808E19B4(int r3, int r4, int r5, int r6)
{
    /* mulli r0, r4, 0xc */ // 0x808E19B4
    r6 = r3 + r0; // 0x808E19B8
    /* mulli r0, r4, 0x28 */ // 0x808E19BC
    *(0x14 + r6) = r5; // stb @ 0x808E19C0
    r4 = r5;
    r3 = *(4 + r3); // lwz @ 0x808E19C8
    /* lwzux r12, r3, r0 */ // 0x808E19CC
    r12 = *(0x14 + r12); // lwz @ 0x808E19D0
    /* mtctr r12 */ // 0x808E19D4
    /* bctr  */ // 0x808E19D8
}