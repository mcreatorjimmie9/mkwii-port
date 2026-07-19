/* Function at 0x808D8FE0, size=184 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808D8FE0(int r3, int r4, int r5)
{
    /* Stack frame: -160(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x808D8FF0
    r31 = r31 + 0; // 0x808D8FF4
    *(0x98 + r1) = r30; // stw @ 0x808D8FF8
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x808D9000
    r12 = *(0xb4 + r12); // lwz @ 0x808D9004
    /* mtctr r12 */ // 0x808D9008
    /* bctrl  */ // 0x808D900C
    if (==) goto 0x0x808d90f4;
    /* lfs f2, 0x40(r30) */ // 0x808D9018
    /* lfs f1, 0xc(r31) */ // 0x808D9020
    /* lfs f0, 0(r31) */ // 0x808D9028
    /* fmuls f3, f1, f2 */ // 0x808D902C
    /* lfs f2, 8(r31) */ // 0x808D9030
    /* lfs f1, 0x10(r31) */ // 0x808D9034
    /* stfs f0, 0x20(r1) */ // 0x808D9038
    /* fmuls f2, f2, f3 */ // 0x808D903C
    /* stfs f0, 0x28(r1) */ // 0x808D9040
    /* fdivs f1, f2, f1 */ // 0x808D9044
    /* stfs f0, 0x60(r1) */ // 0x808D9048
    /* stfs f0, 0x64(r1) */ // 0x808D904C
    /* stfs f0, 0x68(r1) */ // 0x808D9050
    /* stfs f0, 0x6c(r1) */ // 0x808D9054
    /* stfs f0, 0x70(r1) */ // 0x808D9058
    /* stfs f1, 0x24(r1) */ // 0x808D905C
    /* stfs f0, 0x74(r1) */ // 0x808D9060
    /* stfs f0, 0x78(r1) */ // 0x808D9064
    /* stfs f0, 0x7c(r1) */ // 0x808D9068
    /* stfs f0, 0x80(r1) */ // 0x808D906C
    /* stfs f0, 0x84(r1) */ // 0x808D9070
    /* stfs f0, 0x88(r1) */ // 0x808D9074
    /* stfs f0, 0x8c(r1) */ // 0x808D9078
    FUN_805E3430(); // bl 0x805E3430
    r3 = r30;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r3 = r30 + 0x58; // 0x808D9088
    FUN_805E3430(r3, r3, r4, r5); // bl 0x805E3430
}