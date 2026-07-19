/* Function at 0x80841D28, size=328 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80841D28(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80841D34
    r31 = r3;
    r4 = *(0x18 + r3); // lwz @ 0x80841D3C
    if (<=) goto 0x0x80841dac;
    r0 = r4 + -1; // 0x80841D48
    *(0x18 + r3) = r0; // stw @ 0x80841D4C
    if (==) goto 0x0x80841d68;
    if (==) goto 0x0x80841d68;
    if (!=) goto 0x0x80841dac;
    r3 = r31;
    FUN_808417B0(r3); // bl 0x808417B0
    r0 = *(8 + r31); // lwz @ 0x80841D70
    if (!=) goto 0x0x80841dac;
    /* li r0, 0 */ // 0x80841D7C
    /* li r3, 0x14 */ // 0x80841D80
    *(4 + r31) = r3; // stw @ 0x80841D84
    *(8 + r31) = r0; // stw @ 0x80841D88
    *(0x29 + r31) = r0; // stb @ 0x80841D8C
    *(0x18 + r31) = r0; // stw @ 0x80841D90
    *(0xc + r31) = r0; // stw @ 0x80841D94
    *(0x10 + r31) = r0; // stw @ 0x80841D98
    *(0x14 + r31) = r0; // stw @ 0x80841D9C
    *(0x1c + r31) = r0; // stb @ 0x80841DA0
    *(0x20 + r31) = r0; // stw @ 0x80841DA4
    *(0x24 + r31) = r0; // stw @ 0x80841DA8
    r0 = *(0x1c + r31); // lbz @ 0x80841DAC
    if (==) goto 0x0x80841e5c;
    r3 = *(0x20 + r31); // lwz @ 0x80841DB8
    if (==) goto 0x0x80841e5c;
    r0 = *(0x18 + r31); // lwz @ 0x80841DC4
    if (!=) goto 0x0x80841e5c;
    /* addic. r0, r3, -1 */ // 0x80841DD0
    *(0x20 + r31) = r0; // stw @ 0x80841DD4
    if (!=) goto 0x0x80841e5c;
    /* lis r3, 0 */ // 0x80841DDC
    r0 = *(0 + r3); // lbz @ 0x80841DE0
    if (==) goto 0x0x80841e1c;
    r3 = *(0 + r31); // lwz @ 0x80841DEC
    r0 = *(0x19 + r3); // lbz @ 0x80841DF0
    if (==) goto 0x0x80841e1c;
    r0 = *(4 + r31); // lwz @ 0x80841DFC
    /* lis r3, 0 */ // 0x80841E00
    r3 = r3 + 0; // 0x80841E04
    /* li r4, 0xc */ // 0x80841E08
    /* mulli r0, r0, 0x1c */ // 0x80841E0C
    r3 = r3 + r0; // 0x80841E10
    r3 = *(4 + r3); // lwz @ 0x80841E14
    FUN_808272B4(r3, r4); // bl 0x808272B4
    r0 = *(8 + r31); // lwz @ 0x80841E1C
    /* addic. r0, r0, -1 */ // 0x80841E20
    *(8 + r31) = r0; // stw @ 0x80841E24
    if (!=) goto 0x0x80841e5c;
    /* li r0, 0 */ // 0x80841E2C
    /* li r3, 0x14 */ // 0x80841E30
    *(4 + r31) = r3; // stw @ 0x80841E34
    *(8 + r31) = r0; // stw @ 0x80841E38
    *(0x29 + r31) = r0; // stb @ 0x80841E3C
    *(0x18 + r31) = r0; // stw @ 0x80841E40
    *(0xc + r31) = r0; // stw @ 0x80841E44
    *(0x10 + r31) = r0; // stw @ 0x80841E48
    *(0x14 + r31) = r0; // stw @ 0x80841E4C
    *(0x1c + r31) = r0; // stb @ 0x80841E50
    *(0x20 + r31) = r0; // stw @ 0x80841E54
    *(0x24 + r31) = r0; // stw @ 0x80841E58
    r0 = *(0x14 + r1); // lwz @ 0x80841E5C
    r31 = *(0xc + r1); // lwz @ 0x80841E60
    return;
}