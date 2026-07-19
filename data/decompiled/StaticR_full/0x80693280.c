/* Function at 0x80693280, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80693280(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r0 = r4 + -6; // 0x8069328C
    *(0xc + r1) = r31; // stw @ 0x80693294
    r31 = r3;
    if (>) goto 0x0x80694760;
    /* lis r4, 0 */ // 0x806932A0
    /* slwi r0, r0, 2 */ // 0x806932A4
    r4 = r4 + 0; // 0x806932A8
    /* lwzx r4, r4, r0 */ // 0x806932AC
    /* mtctr r4 */ // 0x806932B0
    /* bctr  */ // 0x806932B4
    /* li r4, 0 */ // 0x806932B8
    FUN_80685F8C(r4, r4); // bl 0x80685F8C
    /* b 0x80694760 */ // 0x806932C0
    /* li r4, 0 */ // 0x806932C4
    FUN_80685F8C(r4, r4); // bl 0x80685F8C
}