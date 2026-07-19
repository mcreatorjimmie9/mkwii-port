/* Function at 0x807EF8FC, size=376 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807EF8FC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x807EF910
    r3 = *(0x20 + r3); // lwz @ 0x807EF914
    r12 = *(0 + r3); // lwz @ 0x807EF918
    r12 = *(0x14 + r12); // lwz @ 0x807EF91C
    /* mtctr r12 */ // 0x807EF920
    /* bctrl  */ // 0x807EF924
    if (==) goto 0x0x807ef93c;
    if (==) goto 0x0x807efa54;
    /* b 0x807efa5c */ // 0x807EF938
    r3 = *(0x20 + r31); // lwz @ 0x807EF93C
    r0 = *(0x46 + r3); // lha @ 0x807EF940
    r3 = *(8 + r3); // lwz @ 0x807EF944
    /* slwi r0, r0, 4 */ // 0x807EF948
    r3 = r3 + r0; // 0x807EF94C
    r0 = *(0xe + r3); // lhz @ 0x807EF950
    if (!=) goto 0x0x807ef978;
    r3 = *(0xcc + r31); // lwz @ 0x807EF95C
    /* li r0, 1 */ // 0x807EF960
    *(0xf2 + r3) = r0; // stb @ 0x807EF964
    r3 = *(0xcc + r31); // lwz @ 0x807EF968
    r0 = *(0xd0 + r31); // lwz @ 0x807EF96C
    *(0xf4 + r3) = r0; // stw @ 0x807EF970
    /* b 0x807efa5c */ // 0x807EF974
    if (!=) goto 0x0x807efa5c;
    r3 = *(0xd0 + r31); // lwz @ 0x807EF980
    r0 = *(0xb5 + r3); // lbz @ 0x807EF984
    if (!=) goto 0x0x807efa5c;
    /* lis r3, 0 */ // 0x807EF990
    r3 = *(0 + r3); // lwz @ 0x807EF994
    r0 = *(0x55 + r3); // lbz @ 0x807EF998
    if (!=) goto 0x0x807efa5c;
    /* lis r3, 0 */ // 0x807EF9A4
    r3 = *(0 + r3); // lwz @ 0x807EF9A8
    r0 = *(0xb80 + r3); // lwz @ 0x807EF9AC
    if (==) goto 0x0x807efa5c;
    /* li r0, 1 */ // 0x807EF9B8
    *(0xc8 + r31) = r0; // stw @ 0x807EF9BC
    r3 = r31;
    /* li r30, 0 */ // 0x807EF9C4
    *(0xb0 + r31) = r0; // stw @ 0x807EF9C8
    r12 = *(0 + r31); // lwz @ 0x807EF9CC
    r12 = *(0x30 + r12); // lwz @ 0x807EF9D0
    /* mtctr r12 */ // 0x807EF9D4
    /* bctrl  */ // 0x807EF9D8
    /* lis r4, 0x101 */ // 0x807EF9DC
    r0 = *(0x20 + r3); // lwz @ 0x807EF9E0
    r3 = r4 + 0x101; // 0x807EF9E4
    /* andc. r0, r3, r0 */ // 0x807EF9E8
    if (!=) goto 0x0x807efa08;
    /* lis r3, 0 */ // 0x807EF9F0
    r3 = *(0 + r3); // lwz @ 0x807EF9F4
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x807efa08;
    /* li r30, 1 */ // 0x807EFA04
    if (!=) goto 0x0x807efa5c;
    r3 = *(0xd8 + r31); // lwz @ 0x807EFA10
    r12 = *(0 + r3); // lwz @ 0x807EFA14
    r12 = *(0xc + r12); // lwz @ 0x807EFA18
    /* mtctr r12 */ // 0x807EFA1C
    /* bctrl  */ // 0x807EFA20
    r3 = *(0xd8 + r31); // lwz @ 0x807EFA24
    r4 = r31 + 0x30; // 0x807EFA28
    r12 = *(0 + r3); // lwz @ 0x807EFA2C
    r12 = *(0x74 + r12); // lwz @ 0x807EFA30
    /* mtctr r12 */ // 0x807EFA34
    /* bctrl  */ // 0x807EFA38
    r3 = *(0xd8 + r31); // lwz @ 0x807EFA3C
    r12 = *(0 + r3); // lwz @ 0x807EFA40
    r12 = *(0x80 + r12); // lwz @ 0x807EFA44
    /* mtctr r12 */ // 0x807EFA48
    /* bctrl  */ // 0x807EFA4C
    /* b 0x807efa5c */ // 0x807EFA50
    /* li r0, 0 */ // 0x807EFA54
    *(0xc8 + r31) = r0; // stw @ 0x807EFA58
    r0 = *(0x14 + r1); // lwz @ 0x807EFA5C
    r31 = *(0xc + r1); // lwz @ 0x807EFA60
    r30 = *(8 + r1); // lwz @ 0x807EFA64
    return;
}