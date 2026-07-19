/* Function at 0x806458F0, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_806458F0(int r3, int r4, int r5, int r6)
{
    r6 = *(0 + r4); // lwz @ 0x806458F0
    r5 = *(4 + r4); // lwz @ 0x806458F4
    r0 = *(8 + r4); // lwz @ 0x806458F8
    *(0 + r3) = r6; // stw @ 0x806458FC
    *(4 + r3) = r5; // stw @ 0x80645900
    *(8 + r3) = r0; // stw @ 0x80645904
    /* stfs f1, 0xc(r3) */ // 0x80645908
    return;
}