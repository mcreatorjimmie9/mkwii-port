/* Function at 0x808F8448, size=240 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_808F8448(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x2c + r1) = r31; // stw @ 0x808F8458
    *(0x28 + r1) = r30; // stw @ 0x808F845C
    r30 = r3;
    if (!=) goto 0x0x808f8470;
    /* li r3, 0 */ // 0x808F8468
    /* b 0x808f8520 */ // 0x808F846C
    /* li r6, 1 */ // 0x808F8474
    FUN_808F8960(r3, r5, r6); // bl 0x808F8960
    FUN_808F5E9C(r5, r6, r3, r4); // bl 0x808F5E9C
    /* lis r3, 0 */ // 0x808F8488
    r0 = *(8 + r1); // lwz @ 0x808F848C
    r3 = *(0 + r3); // lwz @ 0x808F8490
    /* lis r5, 0 */ // 0x808F8494
    /* slwi r0, r0, 2 */ // 0x808F8498
    r4 = r30 + 0x2430; // 0x808F849C
    r12 = *(0 + r3); // lwz @ 0x808F84A0
    r5 = r5 + 0; // 0x808F84A4
    /* lwzx r5, r5, r0 */ // 0x808F84A8
    r12 = *(0xb0 + r12); // lwz @ 0x808F84AC
    /* mtctr r12 */ // 0x808F84B0
    /* bctrl  */ // 0x808F84B4
    r31 = r3;
    if (==) goto 0x0x808f851c;
    r3 = *(0x2430 + r30); // lwz @ 0x808F84C4
    if (==) goto 0x0x808f84e0;
    /* lis r4, 0 */ // 0x808F84D0
    /* lfs f1, 0(r4) */ // 0x808F84D4
    /* li r4, 0 */ // 0x808F84D8
    FUN_805E3430(r4, r4); // bl 0x805E3430
    r3 = *(0x2430 + r30); // lwz @ 0x808F84E0
    /* lfs f1, 0x1c(r1) */ // 0x808F84E4
    if (==) goto 0x0x808f84f4;
    FUN_805E3430(); // bl 0x805E3430
    r0 = *(8 + r1); // lwz @ 0x808F84F4
    /* lis r3, 0 */ // 0x808F84F8
    r3 = r3 + 0; // 0x808F84FC
    /* li r5, 1 */ // 0x808F8500
    /* mulli r6, r0, 0x30 */ // 0x808F8504
    /* slwi r0, r0, 2 */ // 0x808F8508
    /* lwzx r4, r3, r0 */ // 0x808F850C
    r3 = r30 + r6; // 0x808F8510
    r3 = r3 + 0x42a8; // 0x808F8514
    FUN_808F9218(r3); // bl 0x808F9218
    r3 = r31;
    r0 = *(0x34 + r1); // lwz @ 0x808F8520
    r31 = *(0x2c + r1); // lwz @ 0x808F8524
    r30 = *(0x28 + r1); // lwz @ 0x808F8528
    return;
}