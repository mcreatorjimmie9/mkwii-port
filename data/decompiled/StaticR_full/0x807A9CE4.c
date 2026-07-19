/* Function at 0x807A9CE4, size=140 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

int FUN_807A9CE4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x807A9CEC
    *(0x14 + r1) = r0; // stw @ 0x807A9CF0
    r3 = *(0 + r3); // lwz @ 0x807A9CF4
    if (==) goto 0x0x807a9d0c;
    r0 = *(0x10 + r3); // lwz @ 0x807A9D00
    if (==) goto 0x0x807a9d60;
    /* lis r0, 0 */ // 0x807A9D0C
    /* addic. r0, r0, 0 */ // 0x807A9D10
    if (!=) goto 0x0x807a9d34;
    /* lis r3, 0 */ // 0x807A9D18
    /* lis r5, 0 */ // 0x807A9D1C
    r3 = r3 + 0; // 0x807A9D20
    /* li r4, 0xcf */ // 0x807A9D24
    r5 = r5 + 0; // 0x807A9D28
    /* crclr cr1eq */ // 0x807A9D2C
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    /* lis r3, 0 */ // 0x807A9D34
    r3 = r3 + 0; // 0x807A9D38
    r0 = *(8 + r3); // lhz @ 0x807A9D3C
    if (==) goto 0x0x807a9d60;
    /* lis r3, 0 */ // 0x807A9D48
    /* lis r4, 0 */ // 0x807A9D4C
    r3 = *(0 + r3); // lwz @ 0x807A9D50
    r4 = r4 + 0; // 0x807A9D54
    /* li r5, 0 */ // 0x807A9D58
    FUN_805D07AC(r3, r4, r4, r5); // bl 0x805D07AC
    r0 = *(0x14 + r1); // lwz @ 0x807A9D60
    return;
}