/* Function at 0x80663BC8, size=196 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_80663BC8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 0 */ // 0x80663BD4
    *(0x1c + r1) = r31; // stw @ 0x80663BD8
    *(0x18 + r1) = r30; // stw @ 0x80663BDC
    r30 = r3;
    *(0x3f8 + r3) = r4; // stw @ 0x80663BE4
    /* li r4, 0 */ // 0x80663BE8
    *(0x40c + r3) = r0; // stw @ 0x80663BEC
    r3 = r3 + 0xec; // 0x80663BF0
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x80663BF8
    r31 = r3;
    if (==) goto 0x0x80663c14;
    if (==) goto 0x0x80663c68;
    /* b 0x80663c78 */ // 0x80663C10
    r3 = *(0 + r3); // lwz @ 0x80663C14
    /* slwi r0, r0, 4 */ // 0x80663C18
    /* lwzx r3, r3, r0 */ // 0x80663C1C
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x80663C24
    /* lis r0, 0x4330 */ // 0x80663C28
    *(0xc + r1) = r4; // stw @ 0x80663C2C
    /* lis r3, 0 */ // 0x80663C30
    /* lfd f3, 0(r3) */ // 0x80663C34
    /* lis r5, 0 */ // 0x80663C38
    *(8 + r1) = r0; // stw @ 0x80663C3C
    r3 = r31;
    /* lfs f1, 0x3c(r31) */ // 0x80663C44
    /* li r4, 3 */ // 0x80663C48
    /* lfd f2, 8(r1) */ // 0x80663C4C
    /* lfs f0, 0(r5) */ // 0x80663C50
    /* fsubs f2, f2, f3 */ // 0x80663C54
    /* fdivs f1, f1, f2 */ // 0x80663C58
    /* fsubs f1, f0, f1 */ // 0x80663C5C
    FUN_8069F59C(); // bl 0x8069F59C
    /* b 0x80663c78 */ // 0x80663C64
    /* lis r5, 0 */ // 0x80663C68
    /* li r4, 3 */ // 0x80663C6C
    /* lfs f1, 0(r5) */ // 0x80663C70
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    r3 = r30 + 0x1c8; // 0x80663C78
    FUN_806A0C48(r5, r4, r3); // bl 0x806A0C48
    /* lis r31, 0 */ // 0x80663C80
    r3 = *(0 + r31); // lwz @ 0x80663C84
    FUN_807DF530(r3); // bl 0x807DF530
}