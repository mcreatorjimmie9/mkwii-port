/* Function at 0x807C7054, size=352 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_807C7054(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 1 */ // 0x807C705C
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x807C706C
    *(0x14 + r1) = r29; // stw @ 0x807C7070
    r5 = *(0x168 + r3); // lwz @ 0x807C7074
    r3 = r5;
    r5 = *(4 + r5); // lwz @ 0x807C707C
    r12 = *(0 + r3); // lwz @ 0x807C7080
    r29 = r5 + 1; // 0x807C7084
    r12 = *(0x20 + r12); // lwz @ 0x807C7088
    /* mtctr r12 */ // 0x807C708C
    /* bctrl  */ // 0x807C7090
    r3 = *(0x16c + r31); // lwz @ 0x807C7094
    r4 = r29;
    r12 = *(0 + r3); // lwz @ 0x807C709C
    r12 = *(0x20 + r12); // lwz @ 0x807C70A0
    /* mtctr r12 */ // 0x807C70A4
    /* bctrl  */ // 0x807C70A8
    r3 = *(0x170 + r31); // lwz @ 0x807C70AC
    r4 = r29;
    FUN_807C3BF4(r4); // bl 0x807C3BF4
    /* lis r3, 0 */ // 0x807C70B8
    r4 = *(0x180 + r31); // lwz @ 0x807C70BC
    r3 = *(0 + r3); // lha @ 0x807C70C0
    r0 = r4 / r3; // 0x807C70C4
    r0 = r0 * r3; // 0x807C70C8
    /* subf. r0, r0, r4 */ // 0x807C70CC
    if (!=) goto 0x0x807c70e4;
    r4 = *(0x16c + r31); // lwz @ 0x807C70D4
    r3 = r31;
    r5 = *(0x170 + r31); // lwz @ 0x807C70DC
    FUN_807C6A6C(r3); // bl 0x807C6A6C
    r0 = *(0x18c + r31); // lbz @ 0x807C70E4
    if (==) goto 0x0x807c7160;
    /* lis r3, 0 */ // 0x807C70F0
    r3 = *(0 + r3); // lwz @ 0x807C70F4
    FUN_807BFFC0(r3); // bl 0x807BFFC0
    if (>) goto 0x0x807c7160;
    r3 = *(0x14c + r31); // lwz @ 0x807C7104
    if (==) goto 0x0x807c714c;
    FUN_807C36A8(); // bl 0x807C36A8
    /* lis r30, 0 */ // 0x807C7114
    r29 = r3;
    r3 = *(0 + r30); // lwz @ 0x807C711C
    FUN_805C2BFC(); // bl 0x805C2BFC
    r5 = *(0 + r30); // lwz @ 0x807C7124
    /* clrlwi r0, r3, 0x18 */ // 0x807C7128
    r4 = r29 rlwinm 2; // rlwinm
    r3 = *(0xc + r5); // lwz @ 0x807C7130
    /* lwzx r3, r3, r4 */ // 0x807C7134
    r3 = *(0x26 + r3); // lbz @ 0x807C7138
    if (!=) goto 0x0x807c714c;
    /* li r0, 1 */ // 0x807C7144
    /* b 0x807c7150 */ // 0x807C7148
    /* li r0, 0 */ // 0x807C714C
    if (==) goto 0x0x807c7160;
    /* li r0, 0 */ // 0x807C7158
    *(0x18c + r31) = r0; // stb @ 0x807C715C
    r0 = *(0x18c + r31); // lbz @ 0x807C7160
    /* li r4, 0 */ // 0x807C7164
    if (==) goto 0x0x807c7184;
    r3 = *(0x180 + r31); // lwz @ 0x807C7170
    r0 = *(0x184 + r31); // lwz @ 0x807C7174
    if (<=) goto 0x0x807c7184;
    /* li r4, 1 */ // 0x807C7180
    if (==) goto 0x0x807c7198;
    r3 = r31;
    r4 = r31 + 0xbc; // 0x807C7190
    FUN_807CF1B4(r4, r3, r4); // bl 0x807CF1B4
    r0 = *(0x24 + r1); // lwz @ 0x807C7198
    r31 = *(0x1c + r1); // lwz @ 0x807C719C
    r30 = *(0x18 + r1); // lwz @ 0x807C71A0
    r29 = *(0x14 + r1); // lwz @ 0x807C71A4
    return;
}