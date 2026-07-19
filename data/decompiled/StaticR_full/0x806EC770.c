/* Function at 0x806EC770, size=72 bytes */
/* Stack frame: 0 bytes */

int FUN_806EC770(int r3, int r4, int r5, int r6)
{
    /* lis r6, 0 */ // 0x806EC770
    r6 = *(0 + r6); // lwz @ 0x806EC774
    r0 = *(0x291c + r6); // lwz @ 0x806EC778
    /* mulli r0, r0, 0x58 */ // 0x806EC77C
    r6 = r6 + r0; // 0x806EC780
    r0 = *(0x59 + r6); // lbz @ 0x806EC784
    if (!=) goto 0x0x806ec7a0;
    /* slwi r0, r5, 3 */ // 0x806EC790
    r3 = r3 + r0; // 0x806EC794
    r3 = *(0x1f + r3); // lbz @ 0x806EC798
    return;
    /* mulli r4, r4, 0x38 */ // 0x806EC7A0
    /* slwi r0, r5, 3 */ // 0x806EC7A4
    r3 = r3 + r4; // 0x806EC7A8
    r3 = r3 + r0; // 0x806EC7AC
    r3 = *(0x57 + r3); // lbz @ 0x806EC7B0
    return;
}