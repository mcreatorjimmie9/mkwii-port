/* Function at 0x806640A4, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_806640A4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x806640AC
    /* li r0, 0 */ // 0x806640B4
    *(0x1c + r1) = r31; // stw @ 0x806640B8
    *(0x18 + r1) = r30; // stw @ 0x806640BC
    r30 = r3;
    *(0x40c + r3) = r0; // stw @ 0x806640C4
    r3 = r3 + 0xec; // 0x806640C8
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x806640D0
    r31 = r3;
    if (==) goto 0x0x806640ec;
    if (==) goto 0x0x80664140;
    /* b 0x80664150 */ // 0x806640E8
    r3 = *(0 + r3); // lwz @ 0x806640EC
    /* slwi r0, r0, 4 */ // 0x806640F0
    /* lwzx r3, r3, r0 */ // 0x806640F4
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x806640FC
    /* lis r0, 0x4330 */ // 0x80664100
    *(0xc + r1) = r4; // stw @ 0x80664104
    /* lis r3, 0 */ // 0x80664108
    /* lfd f3, 0(r3) */ // 0x8066410C
    /* lis r5, 0 */ // 0x80664110
    *(8 + r1) = r0; // stw @ 0x80664114
    r3 = r31;
    /* lfs f1, 0x3c(r31) */ // 0x8066411C
    /* li r4, 3 */ // 0x80664120
    /* lfd f2, 8(r1) */ // 0x80664124
    /* lfs f0, 0(r5) */ // 0x80664128
    /* fsubs f2, f2, f3 */ // 0x8066412C
    /* fdivs f1, f1, f2 */ // 0x80664130
    /* fsubs f1, f0, f1 */ // 0x80664134
    FUN_8069F59C(); // bl 0x8069F59C
    /* b 0x80664150 */ // 0x8066413C
    /* lis r5, 0 */ // 0x80664140
    /* li r4, 3 */ // 0x80664144
    /* lfs f1, 0(r5) */ // 0x80664148
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    r3 = r30 + 0x1c8; // 0x80664150
    FUN_806A0C48(r5, r4, r3); // bl 0x806A0C48
    /* lis r31, 0 */ // 0x80664158
    r3 = *(0 + r31); // lwz @ 0x8066415C
    FUN_807DF530(r3); // bl 0x807DF530
}