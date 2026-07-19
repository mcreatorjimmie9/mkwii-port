/* Function at 0x806641A8, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_806641A8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x806641B0
    /* li r0, 0 */ // 0x806641B8
    *(0x1c + r1) = r31; // stw @ 0x806641BC
    *(0x18 + r1) = r30; // stw @ 0x806641C0
    r30 = r3;
    *(0x40c + r3) = r0; // stw @ 0x806641C8
    r3 = r3 + 0xec; // 0x806641CC
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x806641D4
    r31 = r3;
    if (==) goto 0x0x806641f0;
    if (==) goto 0x0x80664244;
    /* b 0x80664254 */ // 0x806641EC
    r3 = *(0 + r3); // lwz @ 0x806641F0
    /* slwi r0, r0, 4 */ // 0x806641F4
    /* lwzx r3, r3, r0 */ // 0x806641F8
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x80664200
    /* lis r0, 0x4330 */ // 0x80664204
    *(0xc + r1) = r4; // stw @ 0x80664208
    /* lis r3, 0 */ // 0x8066420C
    /* lfd f3, 0(r3) */ // 0x80664210
    /* lis r5, 0 */ // 0x80664214
    *(8 + r1) = r0; // stw @ 0x80664218
    r3 = r31;
    /* lfs f1, 0x3c(r31) */ // 0x80664220
    /* li r4, 3 */ // 0x80664224
    /* lfd f2, 8(r1) */ // 0x80664228
    /* lfs f0, 0(r5) */ // 0x8066422C
    /* fsubs f2, f2, f3 */ // 0x80664230
    /* fdivs f1, f1, f2 */ // 0x80664234
    /* fsubs f1, f0, f1 */ // 0x80664238
    FUN_8069F59C(); // bl 0x8069F59C
    /* b 0x80664254 */ // 0x80664240
    /* lis r5, 0 */ // 0x80664244
    /* li r4, 3 */ // 0x80664248
    /* lfs f1, 0(r5) */ // 0x8066424C
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    r3 = r30 + 0x1c8; // 0x80664254
    FUN_806A0C48(r5, r4, r3); // bl 0x806A0C48
    /* lis r31, 0 */ // 0x8066425C
    r3 = *(0 + r31); // lwz @ 0x80664260
    FUN_807DF530(r3); // bl 0x807DF530
}