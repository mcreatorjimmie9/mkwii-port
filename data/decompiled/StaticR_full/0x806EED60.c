/* Function at 0x806EED60, size=44 bytes */
/* Stack frame: 0 bytes */

int FUN_806EED60(int r3, int r4)
{
    /* lis r4, 0 */ // 0x806EED60
    /* lis r3, 1 */ // 0x806EED64
    r4 = *(0 + r4); // lwz @ 0x806EED68
    r0 = r3 + -0x6c10; // 0x806EED6C
    r3 = *(0x36 + r4); // lha @ 0x806EED70
    /* clrlwi r3, r3, 0x18 */ // 0x806EED74
    r0 = r0 * r3; // 0x806EED78
    r3 = r4 + r0; // 0x806EED7C
    /* addis r3, r3, 1 */ // 0x806EED80
    r3 = r3 + -0x7010; // 0x806EED84
    /* b 0x805e3430 */ // 0x806EED88
}