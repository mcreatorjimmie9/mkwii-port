/* Function at 0x806EC688, size=80 bytes */
/* Stack frame: 0 bytes */

int FUN_806EC688(int r3, int r4, int r5, int r6)
{
    /* lis r6, 0 */ // 0x806EC688
    r6 = *(0 + r6); // lwz @ 0x806EC68C
    r0 = *(0x291c + r6); // lwz @ 0x806EC690
    /* mulli r0, r0, 0x58 */ // 0x806EC694
    r6 = r6 + r0; // 0x806EC698
    r0 = *(0x59 + r6); // lbz @ 0x806EC69C
    if (!=) goto 0x0x806ec6bc;
    /* slwi r0, r5, 3 */ // 0x806EC6A8
    r3 = r3 + r0; // 0x806EC6AC
    r3 = *(0x1d + r3); // lbz @ 0x806EC6B0
    /* extsb r3, r3 */ // 0x806EC6B4
    return;
    /* mulli r4, r4, 0x38 */ // 0x806EC6BC
    /* slwi r0, r5, 3 */ // 0x806EC6C0
    r3 = r3 + r4; // 0x806EC6C4
    r3 = r3 + r0; // 0x806EC6C8
    r3 = *(0x55 + r3); // lbz @ 0x806EC6CC
    /* extsb r3, r3 */ // 0x806EC6D0
    return;
}