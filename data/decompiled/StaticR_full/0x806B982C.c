/* Function at 0x806B982C, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806B982C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806B983C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806B9844
    r30 = r3;
    if (==) goto 0x0x806b9890;
    /* lis r4, 0 */ // 0x806B9850
    /* li r5, 0x2e8 */ // 0x806B9854
    r4 = r4 + 0; // 0x806B9858
    /* li r6, 3 */ // 0x806B985C
    r3 = r3 + 0x19c; // 0x806B9860
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    r3 = r30 + 0x58; // 0x806B9868
    /* li r4, -1 */ // 0x806B986C
    FUN_806688C8(r6, r3, r3, r4); // bl 0x806688C8
    r3 = r30;
    /* li r4, 0 */ // 0x806B9878
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
}