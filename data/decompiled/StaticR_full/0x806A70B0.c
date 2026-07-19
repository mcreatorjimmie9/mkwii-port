/* Function at 0x806A70B0, size=376 bytes */
/* Stack frame: 256 bytes */
/* Saved registers: r23 */
/* Calls: 3 function(s) */

int FUN_806A70B0(int r3, int r4, int r5)
{
    /* Stack frame: -256(r1) */
    /* saved r23 */
    /* lis r4, 0 */ // 0x806A70B8
    *(0x104 + r1) = r0; // stw @ 0x806A70BC
    /* stmw r23, 0xdc(r1) */ // 0x806A70C0
    r25 = r3;
    r3 = *(0 + r4); // lwz @ 0x806A70C8
    r3 = *(0 + r3); // lwz @ 0x806A70CC
    r31 = *(0x248 + r3); // lwz @ 0x806A70D0
    if (!=) goto 0x0x806a70e4;
    /* li r31, 0 */ // 0x806A70DC
    /* b 0x806a7138 */ // 0x806A70E0
    /* lis r23, 0 */ // 0x806A70E4
    r23 = r23 + 0; // 0x806A70E8
    if (==) goto 0x0x806a7134;
    r12 = *(0 + r31); // lwz @ 0x806A70F0
    r3 = r31;
    r12 = *(0x60 + r12); // lwz @ 0x806A70F8
    /* mtctr r12 */ // 0x806A70FC
    /* bctrl  */ // 0x806A7100
    /* b 0x806a711c */ // 0x806A7104
    if (!=) goto 0x0x806a7118;
    /* li r0, 1 */ // 0x806A7110
    /* b 0x806a7128 */ // 0x806A7114
    r3 = *(0 + r3); // lwz @ 0x806A7118
    if (!=) goto 0x0x806a7108;
    /* li r0, 0 */ // 0x806A7124
    if (==) goto 0x0x806a7134;
    /* b 0x806a7138 */ // 0x806A7130
    /* li r31, 0 */ // 0x806A7134
    r30 = r25;
    r29 = r31;
    /* li r28, 0 */ // 0x806A7140
    /* li r27, 0 */ // 0x806A7144
    /* li r26, 0 */ // 0x806A7148
    /* lis r23, 0 */ // 0x806A714C
    /* li r24, 1 */ // 0x806A7150
    /* li r3, 0 */ // 0x806A7158
    if (<) goto 0x0x806a7170;
    r0 = *(0x284 + r31); // lwz @ 0x806A7160
    if (>=) goto 0x0x806a7170;
    /* li r3, 1 */ // 0x806A716C
    if (==) goto 0x0x806a71dc;
    r0 = *(0x1668 + r30); // lwz @ 0x806A7178
    if (<) goto 0x0x806a71b4;
    /* mulli r0, r0, 0x178 */ // 0x806A7184
    /* li r4, 1 */ // 0x806A7188
    r3 = r25 + r0; // 0x806A718C
    r3 = r3 + 0x560; // 0x806A7190
    FUN_8069F4B0(r4, r3); // bl 0x8069F4B0
    r0 = *(0x38 + r3); // lwz @ 0x806A7198
    if (!=) goto 0x0x806a71ac;
    r28 = r28 + 1; // 0x806A71A4
    /* b 0x806a71dc */ // 0x806A71A8
    r27 = r27 + 1; // 0x806A71AC
    /* b 0x806a71dc */ // 0x806A71B0
    r5 = *(0 + r23); // lwz @ 0x806A71B4
    r3 = *(0x1f4 + r29); // lbz @ 0x806A71B8
    r0 = *(0x291c + r5); // lwz @ 0x806A71BC
    r4 = r24 << r3; // slw
    /* mulli r0, r0, 0x58 */ // 0x806A71C4
    r3 = r5 + r0; // 0x806A71C8
    r0 = *(0x48 + r3); // lwz @ 0x806A71CC
    /* and. r0, r4, r0 */ // 0x806A71D0
    if (==) goto 0x0x806a71dc;
    r27 = r27 + 1; // 0x806A71D8
    r26 = r26 + 1; // 0x806A71DC
    r29 = r29 + 0xc; // 0x806A71E0
    r30 = r30 + 4; // 0x806A71E8
    if (<) goto 0x0x806a7154;
    FUN_80654ECC(r3); // bl 0x80654ECC
    r0 = r28 + r27; // 0x806A71F8
    *(8 + r1) = r28; // stw @ 0x806A71FC
    r3 = r25 + 0x354; // 0x806A7200
    *(0xc + r1) = r0; // stw @ 0x806A7208
    /* li r4, 0x7d9 */ // 0x806A720C
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    r0 = *(0x104 + r1); // lwz @ 0x806A7218
    return;
}