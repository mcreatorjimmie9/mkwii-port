/* Function at 0x806699A8, size=100 bytes */
/* Stack frame: 0 bytes */

void FUN_806699A8(int r3, int r4, int r6, int r7, int r8, int r9, int r10)
{
    r0 = *(0x78 + r3); // lwz @ 0x806699A8
    /* lis r9, 0 */ // 0x806699AC
    r9 = r9 + 0; // 0x806699B0
    /* mulli r0, r0, 0x18 */ // 0x806699B4
    r10 = r9 + r0; // 0x806699B8
    /* lhax r8, r9, r0 */ // 0x806699BC
    r7 = *(2 + r10); // lha @ 0x806699C0
    r6 = *(4 + r10); // lha @ 0x806699C4
    r0 = *(6 + r10); // lha @ 0x806699C8
    *(0 + r4) = r8; // sth @ 0x806699CC
    *(2 + r4) = r7; // sth @ 0x806699D0
    *(4 + r4) = r6; // sth @ 0x806699D4
    *(6 + r4) = r0; // sth @ 0x806699D8
    r0 = *(0x78 + r3); // lwz @ 0x806699DC
    /* mulli r0, r0, 0x18 */ // 0x806699E0
    r7 = r9 + r0; // 0x806699E4
    r6 = *(8 + r7); // lha @ 0x806699E8
    r4 = *(0xa + r7); // lha @ 0x806699EC
    r3 = *(0xc + r7); // lha @ 0x806699F0
    r0 = *(0xe + r7); // lha @ 0x806699F4
    *(0 + r5) = r6; // sth @ 0x806699F8
    *(2 + r5) = r4; // sth @ 0x806699FC
    *(4 + r5) = r3; // sth @ 0x80669A00
    *(6 + r5) = r0; // sth @ 0x80669A04
    return;
}