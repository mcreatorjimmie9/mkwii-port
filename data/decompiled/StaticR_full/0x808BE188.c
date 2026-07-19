/* Function at 0x808BE188, size=212 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_808BE188(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x808BE190
    *(0x18 + r1) = r30; // stw @ 0x808BE19C
    *(0x14 + r1) = r29; // stw @ 0x808BE1A0
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x808BE1A8
    r3 = *(0 + r3); // lwz @ 0x808BE1AC
    r30 = *(0x204 + r3); // lwz @ 0x808BE1B0
    if (!=) goto 0x0x808be1c4;
    /* li r30, 0 */ // 0x808BE1BC
    /* b 0x808be218 */ // 0x808BE1C0
    /* lis r31, 0 */ // 0x808BE1C4
    r31 = r31 + 0; // 0x808BE1C8
    if (==) goto 0x0x808be214;
    r12 = *(0 + r30); // lwz @ 0x808BE1D0
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808BE1D8
    /* mtctr r12 */ // 0x808BE1DC
    /* bctrl  */ // 0x808BE1E0
    /* b 0x808be1fc */ // 0x808BE1E4
    if (!=) goto 0x0x808be1f8;
    /* li r0, 1 */ // 0x808BE1F0
    /* b 0x808be208 */ // 0x808BE1F4
    r3 = *(0 + r3); // lwz @ 0x808BE1F8
    if (!=) goto 0x0x808be1e8;
    /* li r0, 0 */ // 0x808BE204
    if (==) goto 0x0x808be214;
    /* b 0x808be218 */ // 0x808BE210
    /* li r30, 0 */ // 0x808BE214
    /* li r0, 0 */ // 0x808BE218
    /* mulli r0, r0, 0xc */ // 0x808BE21C
    r3 = r30 + r0; // 0x808BE220
    r0 = *(0x5c + r3); // lbz @ 0x808BE224
    if (==) goto 0x0x808be240;
    /* lis r4, 0 */ // 0x808BE230
    r3 = r29;
    /* lfs f1, 0(r4) */ // 0x808BE238
    FUN_808B3BEC(r4, r3); // bl 0x808B3BEC
    r0 = *(0x24 + r1); // lwz @ 0x808BE240
    r31 = *(0x1c + r1); // lwz @ 0x808BE244
    r30 = *(0x18 + r1); // lwz @ 0x808BE248
    r29 = *(0x14 + r1); // lwz @ 0x808BE24C
    return;
}