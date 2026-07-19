/* Function at 0x8064CC24, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_8064CC24(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8064CC34
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8064CC3C
    r30 = r3;
    if (==) goto 0x0x8064ccb8;
    /* addic. r3, r3, 0xb24 */ // 0x8064CC48
    if (==) goto 0x0x8064cc58;
    /* li r4, 0 */ // 0x8064CC50
    FUN_806A0540(r4); // bl 0x806A0540
    /* addic. r3, r30, 0x8c0 */ // 0x8064CC58
    if (==) goto 0x0x8064cc68;
    /* li r4, 0 */ // 0x8064CC60
    FUN_806498AC(r4, r4); // bl 0x806498AC
    r3 = r30 + 0x66c; // 0x8064CC68
    /* li r4, -1 */ // 0x8064CC6C
    FUN_806498AC(r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x418; // 0x8064CC74
    /* li r4, -1 */ // 0x8064CC78
    FUN_806498AC(r3, r4, r3, r4); // bl 0x806498AC
    /* addic. r3, r30, 0x2a4 */ // 0x8064CC80
    if (==) goto 0x0x8064cc90;
    /* li r4, 0 */ // 0x8064CC88
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30 + 0x80; // 0x8064CC90
    /* li r4, -1 */ // 0x8064CC94
    FUN_8066A1A0(r4, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x8064CCA0
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x8064ccb8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8064CCBC
    r30 = *(8 + r1); // lwz @ 0x8064CCC0
    r0 = *(0x14 + r1); // lwz @ 0x8064CCC4
    return;
}