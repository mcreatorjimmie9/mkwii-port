/* Function at 0x806A3F78, size=224 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_806A3F78(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    /* li r4, 0 */ // 0x806A3F8C
    *(0x18 + r1) = r30; // stw @ 0x806A3F90
    r30 = r3;
    r3 = r3 + 0x98; // 0x806A3F98
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r31 = r3;
    if (==) goto 0x0x806a4048;
    r0 = *(0x38 + r3); // lwz @ 0x806A3FAC
    if (==) goto 0x0x806a3fc4;
    if (==) goto 0x0x806a3fd8;
    /* b 0x806a4028 */ // 0x806A3FC0
    /* lis r5, 0 */ // 0x806A3FC4
    /* li r4, 1 */ // 0x806A3FC8
    /* lfs f1, 0(r5) */ // 0x806A3FCC
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    /* b 0x806a4028 */ // 0x806A3FD4
    r3 = *(0 + r3); // lwz @ 0x806A3FD8
    /* slwi r0, r0, 4 */ // 0x806A3FDC
    /* lwzx r3, r3, r0 */ // 0x806A3FE0
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x806A3FE8
    /* lis r0, 0x4330 */ // 0x806A3FEC
    *(0xc + r1) = r4; // stw @ 0x806A3FF0
    /* lis r3, 0 */ // 0x806A3FF4
    /* lfd f3, 0(r3) */ // 0x806A3FF8
    /* lis r5, 0 */ // 0x806A3FFC
    *(8 + r1) = r0; // stw @ 0x806A4000
    r3 = r31;
    /* lfs f1, 0x3c(r31) */ // 0x806A4008
    /* li r4, 1 */ // 0x806A400C
    /* lfd f2, 8(r1) */ // 0x806A4010
    /* lfs f0, 0(r5) */ // 0x806A4014
    /* fsubs f2, f2, f3 */ // 0x806A4018
    /* fdivs f1, f1, f2 */ // 0x806A401C
    /* fsubs f1, f0, f1 */ // 0x806A4020
    FUN_8069F59C(); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x806A4028
    /* li r4, 1 */ // 0x806A402C
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806A4034
    /* li r4, 0 */ // 0x806A4038
    /* lfs f1, 0(r5) */ // 0x806A403C
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    /* b 0x806a40c4 */ // 0x806A4044
    r0 = *(0x38 + r3); // lwz @ 0x806A4048
    if (==) goto 0x0x806a4060;
}