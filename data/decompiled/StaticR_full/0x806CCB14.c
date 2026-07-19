/* Function at 0x806CCB14, size=40 bytes */
/* Stack frame: 0 bytes */

int FUN_806CCB14(int r3, int r4, int r6)
{
    /* mulli r0, r4, 0xc */ // 0x806CCB14
    r6 = r3 + r0; // 0x806CCB18
    *(0x58 + r6) = r5; // stw @ 0x806CCB1C
    r0 = *(0x90 + r3); // lbz @ 0x806CCB20
    /* bnelr  */ // 0x806CCB28
    /* lis r3, 0 */ // 0x806CCB2C
    /* clrlwi r4, r4, 0x18 */ // 0x806CCB30
    r3 = *(0 + r3); // lwz @ 0x806CCB34
    /* b 0x80647608 */ // 0x806CCB38
}