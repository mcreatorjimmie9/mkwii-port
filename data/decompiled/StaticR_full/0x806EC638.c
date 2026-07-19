/* Function at 0x806EC638, size=80 bytes */
/* Stack frame: 0 bytes */

int FUN_806EC638(int r3, int r4, int r5, int r6)
{
    /* lis r6, 0 */ // 0x806EC638
    r6 = *(0 + r6); // lwz @ 0x806EC63C
    r0 = *(0x291c + r6); // lwz @ 0x806EC640
    /* mulli r0, r0, 0x58 */ // 0x806EC644
    r6 = r6 + r0; // 0x806EC648
    r0 = *(0x59 + r6); // lbz @ 0x806EC64C
    if (!=) goto 0x0x806ec66c;
    /* slwi r0, r5, 3 */ // 0x806EC658
    r3 = r3 + r0; // 0x806EC65C
    r3 = *(0x1c + r3); // lbz @ 0x806EC660
    /* extsb r3, r3 */ // 0x806EC664
    return;
    /* mulli r4, r4, 0x38 */ // 0x806EC66C
    /* slwi r0, r5, 3 */ // 0x806EC670
    r3 = r3 + r4; // 0x806EC674
    r3 = r3 + r0; // 0x806EC678
    r3 = *(0x54 + r3); // lbz @ 0x806EC67C
    /* extsb r3, r3 */ // 0x806EC680
    return;
}