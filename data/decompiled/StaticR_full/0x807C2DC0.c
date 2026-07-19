/* Function at 0x807C2DC0, size=68 bytes */
/* Stack frame: 0 bytes */

int FUN_807C2DC0(int r3, int r4, int r5)
{
    r4 = *(0x10 + r4); // lwz @ 0x807C2DC0
    r0 = *(0x34 + r3); // lwz @ 0x807C2DC4
    r5 = *(0x144 + r4); // lwz @ 0x807C2DC8
    /* slwi r0, r0, 2 */ // 0x807C2DCC
    r4 = r3 + r0; // 0x807C2DD0
    r0 = *(0x3c + r5); // lwz @ 0x807C2DD4
    *(4 + r4) = r0; // stw @ 0x807C2DD8
    r0 = *(0x34 + r3); // lwz @ 0x807C2DDC
    /* slwi r0, r0, 2 */ // 0x807C2DE0
    r4 = r3 + r0; // 0x807C2DE4
    r4 = *(4 + r4); // lwz @ 0x807C2DE8
    r4 = *(0x14 + r4); // lwz @ 0x807C2DEC
    *(4 + r4) = r3; // stw @ 0x807C2DF0
    r4 = *(0x34 + r3); // lwz @ 0x807C2DF4
    r0 = r4 + 1; // 0x807C2DF8
    *(0x34 + r3) = r0; // stw @ 0x807C2DFC
    return;
}