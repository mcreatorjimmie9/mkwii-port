/* Function at 0x806AAA7C, size=224 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 9 function(s) */

int FUN_806AAA7C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x806AAA8C
    *(0x18 + r1) = r30; // stw @ 0x806AAA90
    r30 = r5;
    r3 = *(0 + r31); // lwz @ 0x806AAA98
    r3 = *(0 + r3); // lwz @ 0x806AAA9C
    FUN_80686240(); // bl 0x80686240
    r3 = *(0 + r31); // lwz @ 0x806AAAA4
    r4 = *(0 + r3); // lwz @ 0x806AAAA8
    r0 = *(0 + r4); // lwz @ 0x806AAAAC
    if (<) goto 0x0x806aaaf0;
    if (>) goto 0x0x806aaaf0;
    /* li r4, 0x7a */ // 0x806AAAC0
    /* li r5, 1 */ // 0x806AAAC4
    FUN_80698C44(r4, r5); // bl 0x80698C44
    /* lis r4, 0 */ // 0x806AAACC
    /* li r3, 0x7a */ // 0x806AAAD0
    r31 = *(0 + r4); // lwz @ 0x806AAAD4
    FUN_80694E54(r5, r4, r3); // bl 0x80694E54
    r4 = r3;
    r3 = r31;
    /* li r5, 0 */ // 0x806AAAE4
    FUN_80787EB0(r4, r3, r5); // bl 0x80787EB0
    /* b 0x806aab1c */ // 0x806AAAEC
    /* li r4, 0x41 */ // 0x806AAAF0
    /* li r5, 1 */ // 0x806AAAF4
    FUN_80698C44(r5, r4, r5); // bl 0x80698C44
    /* lis r4, 0 */ // 0x806AAAFC
    /* li r3, 0x41 */ // 0x806AAB00
    r31 = *(0 + r4); // lwz @ 0x806AAB04
    FUN_80694E54(r5, r4, r3); // bl 0x80694E54
    r4 = r3;
    r3 = r31;
    /* li r5, 0 */ // 0x806AAB14
    FUN_80787EB0(r4, r3, r5); // bl 0x80787EB0
    /* lis r4, 0 */ // 0x806AAB1C
    r3 = r30;
    r31 = *(0 + r4); // lwz @ 0x806AAB24
    FUN_8064A384(r5, r4, r3); // bl 0x8064A384
    /* fctiwz f0, f1 */ // 0x806AAB2C
    r3 = r31;
    /* li r5, 0xff */ // 0x806AAB34
    /* stfd f0, 8(r1) */ // 0x806AAB38
    r4 = *(0xc + r1); // lwz @ 0x806AAB3C
    FUN_80698CD0(r3, r5); // bl 0x80698CD0
    r0 = *(0x24 + r1); // lwz @ 0x806AAB44
    r31 = *(0x1c + r1); // lwz @ 0x806AAB48
    r30 = *(0x18 + r1); // lwz @ 0x806AAB4C
    return;
}