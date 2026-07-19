/* Function at 0x807885C4, size=236 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807885C4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807885CC
    *(0xc + r1) = r31; // stw @ 0x807885D4
    *(8 + r1) = r30; // stw @ 0x807885D8
    r30 = r3;
    r4 = *(0 + r4); // lwz @ 0x807885E0
    r0 = *(0x14 + r4); // lbz @ 0x807885E4
    if (!=) goto 0x0x807886a4;
    r4 = *(0x26 + r3); // lha @ 0x807885F0
    if (<=) goto 0x0x80788608;
    r0 = r4 + -1; // 0x807885FC
    *(0x26 + r3) = r0; // sth @ 0x80788600
    /* b 0x807886a4 */ // 0x80788604
    if (!=) goto 0x0x807886a4;
    r3 = *(0x1c + r3); // lwz @ 0x8078860C
    if (==) goto 0x0x8078869c;
    r3 = *(0 + r3); // lwz @ 0x80788618
    /* li r31, 0 */ // 0x8078861C
    if (==) goto 0x0x80788638;
    FUN_805E3430(); // bl 0x805E3430
    if (==) goto 0x0x80788638;
    /* li r31, 1 */ // 0x80788634
    if (==) goto 0x0x8078865c;
    r3 = *(0x1c + r30); // lwz @ 0x80788640
    r3 = *(0 + r3); // lwz @ 0x80788644
    if (==) goto 0x0x8078865c;
    /* li r4, 0 */ // 0x80788650
    /* li r5, 0 */ // 0x80788654
    FUN_805E3430(r4, r5); // bl 0x805E3430
    r3 = *(0x1c + r30); // lwz @ 0x8078865C
    r3 = *(0 + r3); // lwz @ 0x80788660
    if (==) goto 0x0x80788670;
    FUN_805E3430(); // bl 0x805E3430
    /* lis r4, 0 */ // 0x80788670
    r3 = *(0x1c + r30); // lwz @ 0x80788674
    r4 = *(0 + r4); // lwz @ 0x80788678
    *(0xb8 + r4) = r3; // stw @ 0x8078867C
    r3 = *(0 + r3); // lwz @ 0x80788680
    if (==) goto 0x0x80788694;
    r0 = *(0x90 + r3); // lwz @ 0x8078868C
    /* b 0x80788698 */ // 0x80788690
    /* li r0, -1 */ // 0x80788694
    *(0xbc + r4) = r0; // stw @ 0x80788698
    /* li r0, -1 */ // 0x8078869C
    *(0x26 + r30) = r0; // sth @ 0x807886A0
    r0 = *(0x14 + r1); // lwz @ 0x807886A4
    r31 = *(0xc + r1); // lwz @ 0x807886A8
    r30 = *(8 + r1); // lwz @ 0x807886AC
}