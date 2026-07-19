/* Function at 0x806BCA58, size=184 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_806BCA58(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x806BCA60
    /* li r0, -1 */ // 0x806BCA68
    *(0xc + r1) = r31; // stw @ 0x806BCA6C
    /* li r31, 0 */ // 0x806BCA70
    *(8 + r1) = r30; // stw @ 0x806BCA74
    r30 = r3;
    *(0xdb8 + r3) = r31; // stw @ 0x806BCA7C
    *(0xdbc + r3) = r0; // stw @ 0x806BCA80
    *(0xdc0 + r3) = r31; // stb @ 0x806BCA84
    *(0xdc1 + r3) = r31; // stb @ 0x806BCA88
    r3 = r3 + 0x2e0; // 0x806BCA8C
    FUN_80649EEC(r3); // bl 0x80649EEC
    r3 = r30 + 0xc40; // 0x806BCA94
    /* li r4, 0x1112 */ // 0x806BCA98
    /* li r5, 0 */ // 0x806BCA9C
    FUN_808D5A00(r3, r3, r4, r5); // bl 0x808D5A00
    r0 = *(0xdb4 + r30); // lwz @ 0x806BCAA4
    if (==) goto 0x0x806bcabc;
    if (==) goto 0x0x806bcad0;
    /* b 0x806bcae4 */ // 0x806BCAB8
    r3 = r30 + 0x534; // 0x806BCABC
    /* li r4, 1 */ // 0x806BCAC0
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    *(0x5b4 + r30) = r31; // stb @ 0x806BCAC8
    /* b 0x806bcae4 */ // 0x806BCACC
    r3 = r30 + 0x534; // 0x806BCAD0
    /* li r4, 0 */ // 0x806BCAD4
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    /* li r0, 1 */ // 0x806BCADC
    *(0x5b4 + r30) = r0; // stb @ 0x806BCAE0
    r3 = r30 + 0x788; // 0x806BCAE4
    /* li r4, 0 */ // 0x806BCAE8
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    /* li r0, 1 */ // 0x806BCAF0
    *(0x808 + r30) = r0; // stb @ 0x806BCAF4
    r31 = *(0xc + r1); // lwz @ 0x806BCAF8
    r30 = *(8 + r1); // lwz @ 0x806BCAFC
    r0 = *(0x14 + r1); // lwz @ 0x806BCB00
    return;
}