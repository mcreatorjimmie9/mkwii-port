/* Function at 0x806EC728, size=72 bytes */
/* Stack frame: 0 bytes */

int FUN_806EC728(int r3, int r4, int r5, int r6)
{
    /* lis r6, 0 */ // 0x806EC728
    r6 = *(0 + r6); // lwz @ 0x806EC72C
    r0 = *(0x291c + r6); // lwz @ 0x806EC730
    /* mulli r0, r0, 0x58 */ // 0x806EC734
    r6 = r6 + r0; // 0x806EC738
    r0 = *(0x59 + r6); // lbz @ 0x806EC73C
    if (!=) goto 0x0x806ec758;
    /* slwi r0, r5, 3 */ // 0x806EC748
    r3 = r3 + r0; // 0x806EC74C
    r3 = r3 + 0x18; // 0x806EC750
    return;
    /* mulli r4, r4, 0x38 */ // 0x806EC758
    /* slwi r0, r5, 3 */ // 0x806EC75C
    r3 = r3 + r4; // 0x806EC760
    r3 = r3 + r0; // 0x806EC764
    r3 = r3 + 0x50; // 0x806EC768
    return;
}