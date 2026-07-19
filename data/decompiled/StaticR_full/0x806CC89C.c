/* Function at 0x806CC89C, size=40 bytes */
/* Stack frame: 0 bytes */

int FUN_806CC89C(int r3, int r4, int r6)
{
    /* mulli r0, r4, 0xc */ // 0x806CC89C
    r6 = r3 + r0; // 0x806CC8A0
    *(0x54 + r6) = r5; // stw @ 0x806CC8A4
    r0 = *(0x90 + r3); // lbz @ 0x806CC8A8
    /* bnelr  */ // 0x806CC8B0
    /* lis r3, 0 */ // 0x806CC8B4
    /* clrlwi r4, r4, 0x18 */ // 0x806CC8B8
    r3 = *(0 + r3); // lwz @ 0x806CC8BC
    /* b 0x806475f0 */ // 0x806CC8C0
}