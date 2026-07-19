/* Function at 0x8067E80C, size=292 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_8067E80C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x8067E814
    *(0x18 + r1) = r30; // stw @ 0x8067E820
    *(0x14 + r1) = r29; // stw @ 0x8067E824
    r29 = r3;
    *(0x1b74 + r3) = r6; // stw @ 0x8067E82C
    r3 = *(0 + r4); // lwz @ 0x8067E830
    r3 = *(0 + r3); // lwz @ 0x8067E834
    r30 = *(0x25c + r3); // lwz @ 0x8067E838
    if (!=) goto 0x0x8067e84c;
    /* li r30, 0 */ // 0x8067E844
    /* b 0x8067e8a0 */ // 0x8067E848
    /* lis r31, 0 */ // 0x8067E84C
    r31 = r31 + 0; // 0x8067E850
    if (==) goto 0x0x8067e89c;
    r12 = *(0 + r30); // lwz @ 0x8067E858
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x8067E860
    /* mtctr r12 */ // 0x8067E864
    /* bctrl  */ // 0x8067E868
    /* b 0x8067e884 */ // 0x8067E86C
    if (!=) goto 0x0x8067e880;
    /* li r0, 1 */ // 0x8067E878
    /* b 0x8067e890 */ // 0x8067E87C
    r3 = *(0 + r3); // lwz @ 0x8067E880
    if (!=) goto 0x0x8067e870;
    /* li r0, 0 */ // 0x8067E88C
    if (==) goto 0x0x8067e89c;
    /* b 0x8067e8a0 */ // 0x8067E898
    /* li r30, 0 */ // 0x8067E89C
    /* lis r31, 0 */ // 0x8067E8A0
    r3 = *(0 + r31); // lwz @ 0x8067E8A8
    FUN_805D9544(r4); // bl 0x805D9544
    r3 = *(0 + r31); // lwz @ 0x8067E8B0
    FUN_805D956C(r4, r4); // bl 0x805D956C
    r0 = *(0x1b74 + r29); // lwz @ 0x8067E8BC
    if (==) goto 0x0x8067e8dc;
    if (==) goto 0x0x8067e8e8;
    if (==) goto 0x0x8067e8fc;
    /* b 0x8067e90c */ // 0x8067E8D8
    r3 = r30;
    FUN_806642AC(r3); // bl 0x806642AC
    /* b 0x8067e90c */ // 0x8067E8E4
    r4 = *(8 + r1); // lhz @ 0x8067E8E8
    r3 = r30;
    r5 = *(0xa + r1); // lhz @ 0x8067E8F0
    FUN_806644FC(r3); // bl 0x806644FC
    /* b 0x8067e90c */ // 0x8067E8F8
    r4 = *(8 + r1); // lhz @ 0x8067E8FC
    r3 = r30;
    r5 = *(0xa + r1); // lhz @ 0x8067E904
    FUN_806643B0(r3); // bl 0x806643B0
    /* li r0, 0 */ // 0x8067E90C
    *(0x1c25 + r29) = r0; // stb @ 0x8067E910
    r31 = *(0x1c + r1); // lwz @ 0x8067E914
    r30 = *(0x18 + r1); // lwz @ 0x8067E918
    r29 = *(0x14 + r1); // lwz @ 0x8067E91C
    r0 = *(0x24 + r1); // lwz @ 0x8067E920
    return;
}