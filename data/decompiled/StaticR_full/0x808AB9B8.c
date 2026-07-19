/* Function at 0x808AB9B8, size=180 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_808AB9B8(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x808AB9C8
    *(0x28 + r1) = r30; // stw @ 0x808AB9CC
    /* slwi r30, r4, 2 */ // 0x808AB9D0
    *(0x24 + r1) = r29; // stw @ 0x808AB9D4
    r29 = r3;
    r4 = *(0 + r31); // lwz @ 0x808AB9DC
    r3 = *(0x40 + r4); // lwz @ 0x808AB9E0
    /* lwzx r3, r3, r30 */ // 0x808AB9E4
    r12 = *(0 + r3); // lwz @ 0x808AB9E8
    r12 = *(0xb4 + r12); // lwz @ 0x808AB9EC
    /* mtctr r12 */ // 0x808AB9F0
    /* bctrl  */ // 0x808AB9F4
    if (==) goto 0x0x808aba30;
    r3 = *(0 + r31); // lwz @ 0x808ABA00
    r3 = *(0x40 + r3); // lwz @ 0x808ABA04
    /* lwzx r3, r3, r30 */ // 0x808ABA08
    r12 = *(0 + r3); // lwz @ 0x808ABA0C
    r12 = *(0xb4 + r12); // lwz @ 0x808ABA10
    /* mtctr r12 */ // 0x808ABA14
    /* bctrl  */ // 0x808ABA18
    r4 = r3;
    FUN_80602770(r4, r3); // bl 0x80602770
    /* b 0x808aba38 */ // 0x808ABA2C
    /* lis r4, 0 */ // 0x808ABA30
    r4 = r4 + 0; // 0x808ABA34
    r3 = *(0 + r4); // lwz @ 0x808ABA38
    r0 = *(4 + r4); // lwz @ 0x808ABA3C
    *(4 + r29) = r0; // stw @ 0x808ABA40
    *(0 + r29) = r3; // stw @ 0x808ABA44
    r0 = *(8 + r4); // lwz @ 0x808ABA48
    *(8 + r29) = r0; // stw @ 0x808ABA4C
    r31 = *(0x2c + r1); // lwz @ 0x808ABA50
    r30 = *(0x28 + r1); // lwz @ 0x808ABA54
    r29 = *(0x24 + r1); // lwz @ 0x808ABA58
    r0 = *(0x34 + r1); // lwz @ 0x808ABA5C
    return;
}