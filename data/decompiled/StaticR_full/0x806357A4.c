/* Function at 0x806357A4, size=216 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806357A4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x806357B4
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x806357BC
    r12 = *(0x14 + r12); // lwz @ 0x806357C0
    /* mtctr r12 */ // 0x806357C4
    /* bctrl  */ // 0x806357C8
    /* lis r4, 0 */ // 0x806357CC
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x806357D4
    r0 = *(0x25 + r3); // lbz @ 0x806357D8
    if (==) goto 0x0x806357f4;
    r3 = *(0x2c + r30); // lwz @ 0x806357E4
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* clrlwi r0, r3, 0x18 */ // 0x806357EC
    /* b 0x80635800 */ // 0x806357F0
    r3 = *(4 + r30); // lwz @ 0x806357F4
    r3 = *(0x8c + r3); // lwz @ 0x806357F8
    r0 = *(0x68 + r3); // lwz @ 0x806357FC
    r4 = *(0 + r31); // lwz @ 0x80635800
    /* lis r3, 0 */ // 0x80635804
    r3 = *(0 + r3); // lwz @ 0x80635808
    /* clrlwi r5, r0, 0x18 */ // 0x8063580C
    r4 = *(3 + r4); // lbz @ 0x80635810
    /* extsb r4, r4 */ // 0x80635814
    FUN_80770F58(r3); // bl 0x80770F58
    *(0x48 + r30) = r3; // stw @ 0x8063581C
    /* lis r4, 0 */ // 0x80635820
    /* lfs f1, 0(r4) */ // 0x80635824
    /* li r4, 0 */ // 0x80635828
    r12 = *(0 + r3); // lwz @ 0x8063582C
    r12 = *(0x10 + r12); // lwz @ 0x80635830
    /* mtctr r12 */ // 0x80635834
    /* bctrl  */ // 0x80635838
    r3 = *(0x48 + r30); // lwz @ 0x8063583C
    /* lis r4, 0 */ // 0x80635840
    /* lfs f1, 0(r4) */ // 0x80635844
    r12 = *(0 + r3); // lwz @ 0x80635848
    r12 = *(0x18 + r12); // lwz @ 0x8063584C
    /* mtctr r12 */ // 0x80635850
    /* bctrl  */ // 0x80635854
    r3 = *(0x48 + r30); // lwz @ 0x80635858
    /* li r0, 1 */ // 0x8063585C
    *(0x16 + r3) = r0; // stb @ 0x80635860
    r31 = *(0xc + r1); // lwz @ 0x80635864
    r30 = *(8 + r1); // lwz @ 0x80635868
    r0 = *(0x14 + r1); // lwz @ 0x8063586C
    return;
}