/* Function at 0x807C2B88, size=276 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 6 function(s) */

int FUN_807C2B88(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x807C2B90
    *(0x24 + r1) = r29; // stw @ 0x807C2BA0
    r29 = r4;
    *(0x20 + r1) = r28; // stw @ 0x807C2BA8
    r28 = r3;
    /* lfs f0, 0x34(r3) */ // 0x807C2BB0
    /* stfs f0, 0x30(r3) */ // 0x807C2BB4
    r30 = *(0x14 + r3); // lwz @ 0x807C2BB8
    /* lfs f0, 0(r5) */ // 0x807C2BBC
    /* stfs f0, 0x2c(r30) */ // 0x807C2BC0
    r0 = *(0 + r4); // lbz @ 0x807C2BC4
    if (==) goto 0x0x807c2bf8;
    /* stfs f0, 0x28(r30) */ // 0x807C2BD0
    /* li r0, 0 */ // 0x807C2BD4
    r4 = *(0x28 + r3); // lwz @ 0x807C2BD8
    *(0x24 + r3) = r4; // stw @ 0x807C2BDC
    r3 = *(0xc + r3); // lwz @ 0x807C2BE0
    *(4 + r3) = r0; // stw @ 0x807C2BE4
    *(8 + r3) = r0; // stw @ 0x807C2BE8
    *(0xc + r3) = r0; // stb @ 0x807C2BEC
    /* stfs f0, 0x10(r3) */ // 0x807C2BF0
    /* b 0x807c2c18 */ // 0x807C2BF4
    /* li r0, 1 */ // 0x807C2BF8
    *(0x24 + r3) = r0; // stw @ 0x807C2BFC
    r3 = *(0xc + r3); // lwz @ 0x807C2C00
    r4 = *(0xa + r30); // lbz @ 0x807C2C04
    FUN_807DBEB4(); // bl 0x807DBEB4
    r3 = *(0xc + r28); // lwz @ 0x807C2C0C
    /* lfs f0, 0x20(r30) */ // 0x807C2C10
    /* stfs f0, 0x10(r3) */ // 0x807C2C14
    r0 = *(0x24 + r28); // lwz @ 0x807C2C18
    /* li r31, 1 */ // 0x807C2C1C
    *(0x2c + r28) = r0; // stw @ 0x807C2C20
    r3 = r30;
    r4 = r29;
    *(0x24 + r29) = r31; // stb @ 0x807C2C2C
    r0 = *(0x1c + r28); // lbz @ 0x807C2C30
    *(0x1c + r29) = r0; // stb @ 0x807C2C34
    r0 = *(0x21 + r28); // lbz @ 0x807C2C38
    *(0x1d + r29) = r0; // stb @ 0x807C2C3C
    FUN_807DA064(); // bl 0x807DA064
    r3 = *(0x10 + r28); // lwz @ 0x807C2C44
    r4 = *(0xa + r30); // lbz @ 0x807C2C48
    FUN_807DBEB4(); // bl 0x807DBEB4
    r5 = *(0x10 + r28); // lwz @ 0x807C2C50
    r4 = r30;
    /* lfs f0, 0x20(r30) */ // 0x807C2C58
    /* stfs f0, 0x10(r5) */ // 0x807C2C60
    FUN_807D9E88(r4, r3); // bl 0x807D9E88
    r5 = r29 + 4; // 0x807C2C70
    FUN_805A4498(r3, r4, r5); // bl 0x805A4498
    /* lfs f1, 0x14(r1) */ // 0x807C2C78
    /* lfs f0, 0x18(r1) */ // 0x807C2C7C
    /* fmuls f1, f1, f1 */ // 0x807C2C80
    /* lfs f2, 0x1c(r1) */ // 0x807C2C84
    /* fmuls f0, f0, f0 */ // 0x807C2C88
    /* fmuls f2, f2, f2 */ // 0x807C2C8C
    /* fadds f0, f1, f0 */ // 0x807C2C90
    /* fadds f1, f2, f0 */ // 0x807C2C94
    FUN_805E3430(); // bl 0x805E3430
}