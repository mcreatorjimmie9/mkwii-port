/* Function at 0x806547D8, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806547D8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    /* li r4, 1 */ // 0x806547F0
    *(0x14 + r1) = r29; // stw @ 0x806547F4
    r29 = r3;
    r3 = r3 + 0x98; // 0x806547FC
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x80654804
    r31 = r3;
    if (==) goto 0x0x80654820;
    if (==) goto 0x0x80654834;
    /* b 0x80654884 */ // 0x8065481C
    /* lis r5, 0 */ // 0x80654820
    /* li r4, 1 */ // 0x80654824
    /* lfs f1, 0(r5) */ // 0x80654828
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    /* b 0x80654884 */ // 0x80654830
    r3 = *(0 + r3); // lwz @ 0x80654834
    /* slwi r0, r0, 4 */ // 0x80654838
    /* lwzx r3, r3, r0 */ // 0x8065483C
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x80654844
    /* lis r0, 0x4330 */ // 0x80654848
    *(0xc + r1) = r4; // stw @ 0x8065484C
    /* lis r3, 0 */ // 0x80654850
    /* lfd f3, 0(r3) */ // 0x80654854
    /* lis r5, 0 */ // 0x80654858
    *(8 + r1) = r0; // stw @ 0x8065485C
    r3 = r31;
    /* lfs f1, 0x3c(r31) */ // 0x80654864
    /* li r4, 1 */ // 0x80654868
    /* lfd f2, 8(r1) */ // 0x8065486C
}