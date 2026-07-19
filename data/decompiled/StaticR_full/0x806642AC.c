/* Function at 0x806642AC, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_806642AC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x806642B4
    /* li r0, 0 */ // 0x806642BC
    *(0x1c + r1) = r31; // stw @ 0x806642C0
    *(0x18 + r1) = r30; // stw @ 0x806642C4
    r30 = r3;
    *(0x40c + r3) = r0; // stw @ 0x806642CC
    r3 = r3 + 0xec; // 0x806642D0
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x806642D8
    r31 = r3;
    if (==) goto 0x0x806642f4;
    if (==) goto 0x0x80664348;
    /* b 0x80664358 */ // 0x806642F0
    r3 = *(0 + r3); // lwz @ 0x806642F4
    /* slwi r0, r0, 4 */ // 0x806642F8
    /* lwzx r3, r3, r0 */ // 0x806642FC
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x80664304
    /* lis r0, 0x4330 */ // 0x80664308
    *(0xc + r1) = r4; // stw @ 0x8066430C
    /* lis r3, 0 */ // 0x80664310
    /* lfd f3, 0(r3) */ // 0x80664314
    /* lis r5, 0 */ // 0x80664318
    *(8 + r1) = r0; // stw @ 0x8066431C
    r3 = r31;
    /* lfs f1, 0x3c(r31) */ // 0x80664324
    /* li r4, 3 */ // 0x80664328
    /* lfd f2, 8(r1) */ // 0x8066432C
    /* lfs f0, 0(r5) */ // 0x80664330
    /* fsubs f2, f2, f3 */ // 0x80664334
    /* fdivs f1, f1, f2 */ // 0x80664338
    /* fsubs f1, f0, f1 */ // 0x8066433C
    FUN_8069F59C(); // bl 0x8069F59C
    /* b 0x80664358 */ // 0x80664344
    /* lis r5, 0 */ // 0x80664348
    /* li r4, 3 */ // 0x8066434C
    /* lfs f1, 0(r5) */ // 0x80664350
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    r3 = r30 + 0x1c8; // 0x80664358
    FUN_806A0C48(r5, r4, r3); // bl 0x806A0C48
    /* lis r31, 0 */ // 0x80664360
    r3 = *(0 + r31); // lwz @ 0x80664364
    FUN_807DF530(r3); // bl 0x807DF530
}