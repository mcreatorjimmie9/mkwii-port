/* Function at 0x806BB92C, size=256 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_806BB92C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806BB934
    *(0x18 + r1) = r30; // stw @ 0x806BB940
    *(0x14 + r1) = r29; // stw @ 0x806BB944
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806BB94C
    r3 = *(0 + r3); // lwz @ 0x806BB950
    r30 = *(0x14c + r3); // lwz @ 0x806BB954
    if (!=) goto 0x0x806bb968;
    /* li r30, 0 */ // 0x806BB960
    /* b 0x806bb9bc */ // 0x806BB964
    /* lis r31, 0 */ // 0x806BB968
    r31 = r31 + 0; // 0x806BB96C
    if (==) goto 0x0x806bb9b8;
    r12 = *(0 + r30); // lwz @ 0x806BB974
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806BB97C
    /* mtctr r12 */ // 0x806BB980
    /* bctrl  */ // 0x806BB984
    /* b 0x806bb9a0 */ // 0x806BB988
    if (!=) goto 0x0x806bb99c;
    /* li r0, 1 */ // 0x806BB994
    /* b 0x806bb9ac */ // 0x806BB998
    r3 = *(0 + r3); // lwz @ 0x806BB99C
    if (!=) goto 0x0x806bb98c;
    /* li r0, 0 */ // 0x806BB9A8
    if (==) goto 0x0x806bb9b8;
    /* b 0x806bb9bc */ // 0x806BB9B4
    /* li r30, 0 */ // 0x806BB9B8
    r12 = *(0 + r30); // lwz @ 0x806BB9BC
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806BB9C4
    /* mtctr r12 */ // 0x806BB9C8
    /* bctrl  */ // 0x806BB9CC
    r12 = *(0 + r30); // lwz @ 0x806BB9D0
    r3 = r30;
    /* li r4, 0x1e19 */ // 0x806BB9D8
    /* li r5, 0 */ // 0x806BB9DC
    r12 = *(0x68 + r12); // lwz @ 0x806BB9E0
    /* mtctr r12 */ // 0x806BB9E4
    /* bctrl  */ // 0x806BB9E8
    r12 = *(0 + r29); // lwz @ 0x806BB9EC
    r3 = r29;
    /* li r4, 0x51 */ // 0x806BB9F4
    /* li r5, 0 */ // 0x806BB9F8
    r12 = *(0x24 + r12); // lwz @ 0x806BB9FC
    /* mtctr r12 */ // 0x806BBA00
    /* bctrl  */ // 0x806BBA04
    /* li r0, 4 */ // 0x806BBA08
    *(0x310 + r29) = r0; // stw @ 0x806BBA0C
    r31 = *(0x1c + r1); // lwz @ 0x806BBA10
    r30 = *(0x18 + r1); // lwz @ 0x806BBA14
    r29 = *(0x14 + r1); // lwz @ 0x806BBA18
    r0 = *(0x24 + r1); // lwz @ 0x806BBA1C
    return;
}