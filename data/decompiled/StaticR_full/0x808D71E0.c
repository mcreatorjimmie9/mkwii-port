/* Function at 0x808D71E0, size=128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808D71E0(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 4 */ // 0x808D71E8
    /* lis r31, 0 */ // 0x808D71F4
    *(0x18 + r1) = r30; // stw @ 0x808D71F8
    /* li r30, 1 */ // 0x808D71FC
    *(0x14 + r1) = r29; // stw @ 0x808D7200
    r29 = r3;
    r3 = *(0 + r31); // lwz @ 0x808D7208
    FUN_805C5788(); // bl 0x805C5788
    if (!=) goto 0x0x808d7240;
    r3 = r29;
    FUN_80876FEC(r3); // bl 0x80876FEC
    r4 = *(0 + r31); // lwz @ 0x808D7220
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0xc + r4); // lwz @ 0x808D7228
    /* lwzx r3, r3, r0 */ // 0x808D722C
    r0 = *(0x38 + r3); // lwz @ 0x808D7230
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x808D7234
    if (!=) goto 0x0x808d7240;
    /* li r30, 0 */ // 0x808D723C
    r3 = r30;
    r31 = *(0x1c + r1); // lwz @ 0x808D7244
    r30 = *(0x18 + r1); // lwz @ 0x808D7248
    r29 = *(0x14 + r1); // lwz @ 0x808D724C
    r0 = *(0x24 + r1); // lwz @ 0x808D7250
    return;
}