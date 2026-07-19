/* Function at 0x80635B64, size=240 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80635B64(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0x4330 */ // 0x80635B6C
    /* lis r5, 0 */ // 0x80635B70
    *(0x24 + r1) = r0; // stw @ 0x80635B74
    /* lfd f1, 0(r5) */ // 0x80635B78
    *(0x1c + r1) = r31; // stw @ 0x80635B7C
    r31 = r3;
    r7 = *(0x48 + r3); // lwz @ 0x80635B84
    *(8 + r1) = r4; // stw @ 0x80635B88
    r8 = *(8 + r7); // lwz @ 0x80635B8C
    r3 = r7;
    r6 = *(0x46 + r7); // lha @ 0x80635B94
    r0 = *(0x48 + r7); // lha @ 0x80635B98
    r8 = r8 + 0xc; // 0x80635B9C
    /* slwi r6, r6, 4 */ // 0x80635BA0
    r12 = *(0 + r7); // lwz @ 0x80635BA4
    /* lhzx r6, r8, r6 */ // 0x80635BA8
    /* slwi r0, r0, 4 */ // 0x80635BAC
    *(0xc + r1) = r6; // stw @ 0x80635BB0
    /* lhzx r0, r8, r0 */ // 0x80635BB4
    /* lfd f0, 8(r1) */ // 0x80635BB8
    *(0x14 + r1) = r0; // stw @ 0x80635BBC
    /* fsubs f2, f0, f1 */ // 0x80635BC0
    /* lfs f3, 0x40(r7) */ // 0x80635BC4
    *(0x10 + r1) = r4; // stw @ 0x80635BC8
    r12 = *(0x18 + r12); // lwz @ 0x80635BCC
    /* lfd f0, 0x10(r1) */ // 0x80635BD0
    /* fsubs f0, f0, f1 */ // 0x80635BD4
    /* fsubs f0, f0, f2 */ // 0x80635BD8
    /* fmuls f0, f0, f3 */ // 0x80635BDC
    /* fadds f1, f2, f0 */ // 0x80635BE0
    /* mtctr r12 */ // 0x80635BE4
    /* bctrl  */ // 0x80635BE8
    r3 = *(0x48 + r31); // lwz @ 0x80635BEC
    r12 = *(0 + r3); // lwz @ 0x80635BF0
    r12 = *(0x14 + r12); // lwz @ 0x80635BF4
    /* mtctr r12 */ // 0x80635BF8
    /* bctrl  */ // 0x80635BFC
    r12 = *(0 + r31); // lwz @ 0x80635C00
    r3 = r31;
    r12 = *(0x14 + r12); // lwz @ 0x80635C08
    /* mtctr r12 */ // 0x80635C0C
    /* bctrl  */ // 0x80635C10
    r3 = r31;
    FUN_80633A6C(r3, r3); // bl 0x80633A6C
    r3 = *(4 + r31); // lwz @ 0x80635C1C
    r4 = *(0x48 + r31); // lwz @ 0x80635C20
    r3 = *(0x90 + r3); // lwz @ 0x80635C24
    /* lfs f0, 0x18(r4) */ // 0x80635C28
    /* stfs f0, 0x64(r3) */ // 0x80635C2C
    /* lfs f0, 0x1c(r4) */ // 0x80635C30
    /* stfs f0, 0x68(r3) */ // 0x80635C34
    /* lfs f0, 0x20(r4) */ // 0x80635C38
    /* stfs f0, 0x6c(r3) */ // 0x80635C3C
    r31 = *(0x1c + r1); // lwz @ 0x80635C40
    r0 = *(0x24 + r1); // lwz @ 0x80635C44
    return;
}