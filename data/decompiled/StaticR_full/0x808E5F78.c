/* Function at 0x808E5F78, size=212 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_808E5F78(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x808E5F80
    *(0x18 + r1) = r30; // stw @ 0x808E5F8C
    *(0x14 + r1) = r29; // stw @ 0x808E5F90
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x808E5F98
    r3 = *(0 + r3); // lwz @ 0x808E5F9C
    r30 = *(0x204 + r3); // lwz @ 0x808E5FA0
    if (!=) goto 0x0x808e5fb4;
    /* li r30, 0 */ // 0x808E5FAC
    /* b 0x808e6008 */ // 0x808E5FB0
    /* lis r31, 0 */ // 0x808E5FB4
    r31 = r31 + 0; // 0x808E5FB8
    if (==) goto 0x0x808e6004;
    r12 = *(0 + r30); // lwz @ 0x808E5FC0
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808E5FC8
    /* mtctr r12 */ // 0x808E5FCC
    /* bctrl  */ // 0x808E5FD0
    /* b 0x808e5fec */ // 0x808E5FD4
    if (!=) goto 0x0x808e5fe8;
    /* li r0, 1 */ // 0x808E5FE0
    /* b 0x808e5ff8 */ // 0x808E5FE4
    r3 = *(0 + r3); // lwz @ 0x808E5FE8
    if (!=) goto 0x0x808e5fd8;
    /* li r0, 0 */ // 0x808E5FF4
    if (==) goto 0x0x808e6004;
    /* b 0x808e6008 */ // 0x808E6000
    /* li r30, 0 */ // 0x808E6004
    /* li r0, 0 */ // 0x808E6008
    /* mulli r0, r0, 0xc */ // 0x808E600C
    r3 = r30 + r0; // 0x808E6010
    r0 = *(0x5c + r3); // lbz @ 0x808E6014
    if (==) goto 0x0x808e6030;
    /* lis r4, 0 */ // 0x808E6020
    r3 = r29;
    /* lfs f1, 0(r4) */ // 0x808E6028
    FUN_808B3BEC(r4, r3); // bl 0x808B3BEC
    r0 = *(0x24 + r1); // lwz @ 0x808E6030
    r31 = *(0x1c + r1); // lwz @ 0x808E6034
    r30 = *(0x18 + r1); // lwz @ 0x808E6038
    r29 = *(0x14 + r1); // lwz @ 0x808E603C
    return;
}