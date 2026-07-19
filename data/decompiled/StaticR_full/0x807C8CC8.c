/* Function at 0x807C8CC8, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807C8CC8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807C8CD0
    /* lis r4, 0 */ // 0x807C8CD4
    *(0x14 + r1) = r0; // stw @ 0x807C8CD8
    /* li r0, 0 */ // 0x807C8CDC
    /* lfs f1, 0(r5) */ // 0x807C8CE0
    *(0xc + r1) = r31; // stw @ 0x807C8CE4
    r31 = r3;
    /* lfs f0, 0(r4) */ // 0x807C8CEC
    r6 = *(0xbc + r3); // lwz @ 0x807C8CF0
    r7 = *(0xc4 + r3); // lwz @ 0x807C8CF4
    r6 = *(0 + r6); // lwz @ 0x807C8CF8
    r5 = *(0x10 + r6); // lwz @ 0x807C8CFC
    r4 = *(0x148 + r5); // lwz @ 0x807C8D00
    *(0xc0 + r3) = r4; // stw @ 0x807C8D04
    *(8 + r7) = r0; // stw @ 0x807C8D08
    *(0xc + r7) = r0; // stb @ 0x807C8D0C
    /* stfs f1, 0xd0(r3) */ // 0x807C8D10
    /* stfs f1, 0xcc(r3) */ // 0x807C8D14
    /* stfs f1, 0xc8(r3) */ // 0x807C8D18
    /* stfs f1, 0xdc(r3) */ // 0x807C8D1C
    /* stfs f1, 0xd8(r3) */ // 0x807C8D20
    /* stfs f1, 0xd4(r3) */ // 0x807C8D24
    *(0xe4 + r3) = r0; // stw @ 0x807C8D28
    *(0xf8 + r3) = r0; // stw @ 0x807C8D2C
    /* stfs f0, 0xe0(r3) */ // 0x807C8D30
    *(0xe8 + r3) = r0; // stw @ 0x807C8D34
    *(0xec + r3) = r0; // stw @ 0x807C8D38
    *(0xf0 + r3) = r0; // stw @ 0x807C8D3C
    FUN_807C02F8(); // bl 0x807C02F8
    if (!=) goto 0x0x807c8d64;
    FUN_807C0300(); // bl 0x807C0300
    if (!=) goto 0x0x807c8d64;
    r3 = r31;
    r4 = r31 + 0x38; // 0x807C8D5C
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    r0 = *(0x14 + r1); // lwz @ 0x807C8D64
    r31 = *(0xc + r1); // lwz @ 0x807C8D68
    return;
}