/* Function at 0x80601794, size=48 bytes */
/* Stack frame: 0 bytes */

void FUN_80601794(int r4, int r5)
{
    /* lis r4, 0 */ // 0x80601794
    r4 = *(0 + r4); // lwz @ 0x80601798
    /* mulli r0, r5, 0xc */ // 0x8060179C
    r4 = *(0x44 + r4); // lwz @ 0x806017A0
    r5 = r4 + r0; // 0x806017A4
    /* lwzx r4, r4, r0 */ // 0x806017A8
    r0 = *(4 + r5); // lwz @ 0x806017AC
    *(4 + r3) = r0; // stw @ 0x806017B0
    *(0 + r3) = r4; // stw @ 0x806017B4
    r0 = *(8 + r5); // lwz @ 0x806017B8
    *(8 + r3) = r0; // stw @ 0x806017BC
    /* b 0x805e3430 */ // 0x806017C0
}