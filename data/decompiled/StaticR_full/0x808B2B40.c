/* Function at 0x808B2B40, size=132 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808B2B40(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x808B2B48
    /* lfs f1, 0(r5) */ // 0x808B2B4C
    *(0x34 + r1) = r0; // stw @ 0x808B2B50
    /* li r0, 0 */ // 0x808B2B54
    /* lfs f0, 0(r6) */ // 0x808B2B58
    *(0x2c + r1) = r31; // stw @ 0x808B2B5C
    r31 = r5;
    /* fcmpu cr0, f0, f1 */ // 0x808B2B64
    *(0x28 + r1) = r30; // stw @ 0x808B2B68
    r30 = r4;
    *(0x24 + r1) = r29; // stw @ 0x808B2B70
    r29 = r3;
    *(0x1c + r3) = r0; // stb @ 0x808B2B78
    if (==) goto 0x0x808b2bb4;
    r4 = r29 + 0x24; // 0x808B2B84
    FUN_805A443C(r3, r4); // bl 0x805A443C
    /* lfs f0, 0x14(r1) */ // 0x808B2B8C
    /* stfs f0, 0x34(r29) */ // 0x808B2B90
    /* lfs f1, 0x20(r29) */ // 0x808B2B94
    /* lfs f0, 0x18(r1) */ // 0x808B2B98
    /* stfs f0, 0x38(r29) */ // 0x808B2B9C
    /* lfs f0, 0(r31) */ // 0x808B2BA0
    /* lfs f2, 0x1c(r1) */ // 0x808B2BA4
    /* fmuls f0, f1, f0 */ // 0x808B2BA8
    /* stfs f2, 0x3c(r29) */ // 0x808B2BAC
    /* stfs f0, 0x30(r29) */ // 0x808B2BB0
    r4 = r30;
    r5 = r29 + 0x34; // 0x808B2BBC
    FUN_805E3430(r4, r3, r5); // bl 0x805E3430
}