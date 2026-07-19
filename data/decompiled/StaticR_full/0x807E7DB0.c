/* Function at 0x807E7DB0, size=188 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807E7DB0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 0 */ // 0x807E7DBC
    *(0xc + r1) = r31; // stw @ 0x807E7DC0
    r31 = r3;
    r4 = *(0x124 + r3); // lwz @ 0x807E7DC8
    *(0x121 + r3) = r0; // stb @ 0x807E7DCC
    if (==) goto 0x0x807e7df4;
    if (==) goto 0x0x807e7e44;
    if (==) goto 0x0x807e7e4c;
    if (==) goto 0x0x807e7e54;
    /* b 0x807e7e58 */ // 0x807E7DF0
    r3 = *(0x20 + r3); // lwz @ 0x807E7DF4
    r12 = *(0 + r3); // lwz @ 0x807E7DF8
    r12 = *(0x14 + r12); // lwz @ 0x807E7DFC
    /* mtctr r12 */ // 0x807E7E00
    /* bctrl  */ // 0x807E7E04
    if (!=) goto 0x0x807e7e18;
    /* li r0, 1 */ // 0x807E7E10
    *(0x124 + r31) = r0; // stw @ 0x807E7E14
    r3 = *(0x20 + r31); // lwz @ 0x807E7E18
    r0 = *(0x2c + r31); // lhz @ 0x807E7E1C
    /* lfs f0, 0x20(r3) */ // 0x807E7E20
    /* lfs f1, 0x1c(r3) */ // 0x807E7E24
    r0 = r0 | 1; // 0x807E7E28
    /* lfs f2, 0x18(r3) */ // 0x807E7E2C
    /* stfs f2, 0x30(r31) */ // 0x807E7E30
    /* stfs f0, 0x38(r31) */ // 0x807E7E34
    *(0x2c + r31) = r0; // sth @ 0x807E7E38
    /* stfs f1, 0x34(r31) */ // 0x807E7E3C
    /* b 0x807e7e58 */ // 0x807E7E40
    FUN_807E7EE0(); // bl 0x807E7EE0
    /* b 0x807e7e58 */ // 0x807E7E48
    FUN_807E63A8(); // bl 0x807E63A8
    /* b 0x807e7e58 */ // 0x807E7E50
    FUN_807E7EE0(); // bl 0x807E7EE0
    r0 = *(0x14 + r1); // lwz @ 0x807E7E58
    r31 = *(0xc + r1); // lwz @ 0x807E7E5C
    return;
}