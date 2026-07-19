/* Function at 0x80662880, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_80662880(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x80662888
    /* li r0, 0 */ // 0x80662890
    *(0x1c + r1) = r31; // stw @ 0x80662894
    *(0x18 + r1) = r30; // stw @ 0x80662898
    r30 = r3;
    *(0x40c + r3) = r0; // stw @ 0x806628A0
    r3 = r3 + 0xec; // 0x806628A4
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x806628AC
    r31 = r3;
    if (==) goto 0x0x806628c8;
    if (==) goto 0x0x8066291c;
    /* b 0x8066292c */ // 0x806628C4
    r3 = *(0 + r3); // lwz @ 0x806628C8
    /* slwi r0, r0, 4 */ // 0x806628CC
    /* lwzx r3, r3, r0 */ // 0x806628D0
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x806628D8
    /* lis r0, 0x4330 */ // 0x806628DC
    *(0xc + r1) = r4; // stw @ 0x806628E0
    /* lis r3, 0 */ // 0x806628E4
    /* lfd f3, 0(r3) */ // 0x806628E8
    /* lis r5, 0 */ // 0x806628EC
    *(8 + r1) = r0; // stw @ 0x806628F0
    r3 = r31;
    /* lfs f1, 0x3c(r31) */ // 0x806628F8
    /* li r4, 3 */ // 0x806628FC
    /* lfd f2, 8(r1) */ // 0x80662900
    /* lfs f0, 0(r5) */ // 0x80662904
    /* fsubs f2, f2, f3 */ // 0x80662908
    /* fdivs f1, f1, f2 */ // 0x8066290C
    /* fsubs f1, f0, f1 */ // 0x80662910
    FUN_8069F59C(); // bl 0x8069F59C
    /* b 0x8066292c */ // 0x80662918
    /* lis r5, 0 */ // 0x8066291C
    /* li r4, 3 */ // 0x80662920
    /* lfs f1, 0(r5) */ // 0x80662924
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    r3 = r30 + 0x1c8; // 0x8066292C
    FUN_806A0C48(r5, r4, r3); // bl 0x806A0C48
    /* lis r31, 0 */ // 0x80662934
    r3 = *(0 + r31); // lwz @ 0x80662938
    FUN_807DF530(r3); // bl 0x807DF530
}