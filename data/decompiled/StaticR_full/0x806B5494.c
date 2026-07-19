/* Function at 0x806B5494, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 7 function(s) */

int FUN_806B5494(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806B54A0
    r31 = r3;
    r0 = *(0x20 + r3); // lwz @ 0x806B54A8
    if (<) goto 0x0x806b552c;
    /* lis r3, 0 */ // 0x806B54B4
    r3 = *(0 + r3); // lwz @ 0x806B54B8
    FUN_80648900(r3); // bl 0x80648900
    if (!=) goto 0x0x806b552c;
    r3 = r31 + 0x238; // 0x806B54C8
    /* li r4, 0 */ // 0x806B54CC
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x806B54D4
    if (!=) goto 0x0x806b552c;
    r3 = r31 + 0x238; // 0x806B54E0
    /* li r4, 0 */ // 0x806B54E4
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806B54EC
    /* li r4, 1 */ // 0x806B54F0
    /* lfs f1, 0(r5) */ // 0x806B54F4
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    /* lis r31, 0 */ // 0x806B54FC
    /* li r4, 0x1e */ // 0x806B5500
    r3 = *(0 + r31); // lwz @ 0x806B5504
    FUN_807881A8(r4); // bl 0x807881A8
    r3 = *(0 + r31); // lwz @ 0x806B550C
    /* li r4, 0xcc */ // 0x806B5510
    /* li r5, 0 */ // 0x806B5514
    FUN_80787EB0(r4, r5); // bl 0x80787EB0
    /* lis r3, 0 */ // 0x806B551C
    /* li r4, 1 */ // 0x806B5520
    r3 = *(0 + r3); // lwz @ 0x806B5524
    FUN_807AAF14(r5, r3, r4); // bl 0x807AAF14
    r0 = *(0x14 + r1); // lwz @ 0x806B552C
    r31 = *(0xc + r1); // lwz @ 0x806B5530
    return;
}