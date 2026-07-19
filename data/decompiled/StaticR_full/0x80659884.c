/* Function at 0x80659884, size=76 bytes */
/* Stack frame: 0 bytes */

int FUN_80659884(int r3, int r4)
{
    if (>) goto 0x0x806598c8;
    /* mulli r0, r4, 0x1d8 */ // 0x8065988C
    r4 = r3 + r0; // 0x80659890
    /* lwzx r0, r3, r0 */ // 0x80659894
    r3 = *(4 + r4); // lwz @ 0x80659898
    /* or. r0, r3, r0 */ // 0x8065989C
    if (==) goto 0x0x806598c8;
    r4 = *(0x1d0 + r4); // lwz @ 0x806598A4
    /* li r3, 0x19 */ // 0x806598A8
    r4 = r4 + -1; // 0x806598AC
    /* subfic r0, r4, 0x19 */ // 0x806598B0
    /* orc r3, r3, r4 */ // 0x806598B4
    /* srwi r0, r0, 1 */ // 0x806598B8
    /* subf r0, r0, r3 */ // 0x806598BC
    /* srwi r3, r0, 0x1f */ // 0x806598C0
    return;
    /* li r3, 0 */ // 0x806598C8
    return;
}