/* Function at 0x806A2444, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_806A2444(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    /* li r4, 0 */ // 0x806A245C
    *(0x14 + r1) = r29; // stw @ 0x806A2460
    r29 = r3;
    r3 = r3 + 0x98; // 0x806A2468
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x806A2470
    r31 = r3;
    if (==) goto 0x0x806a248c;
    if (==) goto 0x0x806a24e0;
    /* b 0x806a24f0 */ // 0x806A2488
    r3 = *(0 + r3); // lwz @ 0x806A248C
    /* slwi r0, r0, 4 */ // 0x806A2490
    /* lwzx r3, r3, r0 */ // 0x806A2494
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x806A249C
    /* lis r0, 0x4330 */ // 0x806A24A0
    *(0xc + r1) = r4; // stw @ 0x806A24A4
    /* lis r3, 0 */ // 0x806A24A8
    /* lfd f3, 0(r3) */ // 0x806A24AC
    /* lis r5, 0 */ // 0x806A24B0
    *(8 + r1) = r0; // stw @ 0x806A24B4
    r3 = r31;
    /* lfs f1, 0x3c(r31) */ // 0x806A24BC
    /* li r4, 3 */ // 0x806A24C0
    /* lfd f2, 8(r1) */ // 0x806A24C4
    /* lfs f0, 0(r5) */ // 0x806A24C8
    /* fsubs f2, f2, f3 */ // 0x806A24CC
    /* fdivs f1, f1, f2 */ // 0x806A24D0
    /* fsubs f1, f0, f1 */ // 0x806A24D4
    FUN_8069F718(); // bl 0x8069F718
    /* b 0x806a24f0 */ // 0x806A24DC
    /* lis r5, 0 */ // 0x806A24E0
    /* li r4, 3 */ // 0x806A24E4
    /* lfs f1, 0(r5) */ // 0x806A24E8
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    r3 = *(0x2a8 + r29); // lwz @ 0x806A24F0
    if (==) goto 0x0x806a2514;
    r12 = *(0 + r3); // lwz @ 0x806A24FC
    r4 = r29;
}