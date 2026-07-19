/* Function at 0x808E5D10, size=396 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 7 function(s) */

int FUN_808E5D10(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x808E5D1C
    r30 = r3;
    r31 = r4;
    r27 = r5;
    r28 = *(0x240 + r4); // lwz @ 0x808E5D2C
    if (!=) goto 0x0x808e5dd4;
    /* lis r3, 0 */ // 0x808E5D38
    r3 = *(0 + r3); // lwz @ 0x808E5D3C
    r3 = *(0 + r3); // lwz @ 0x808E5D40
    r28 = *(0x204 + r3); // lwz @ 0x808E5D44
    if (!=) goto 0x0x808e5d58;
    /* li r28, 0 */ // 0x808E5D50
    /* b 0x808e5dac */ // 0x808E5D54
    /* lis r29, 0 */ // 0x808E5D58
    r29 = r29 + 0; // 0x808E5D5C
    if (==) goto 0x0x808e5da8;
    r12 = *(0 + r28); // lwz @ 0x808E5D64
    r3 = r28;
    r12 = *(0x60 + r12); // lwz @ 0x808E5D6C
    /* mtctr r12 */ // 0x808E5D70
    /* bctrl  */ // 0x808E5D74
    /* b 0x808e5d90 */ // 0x808E5D78
    if (!=) goto 0x0x808e5d8c;
    /* li r0, 1 */ // 0x808E5D84
    /* b 0x808e5d9c */ // 0x808E5D88
    r3 = *(0 + r3); // lwz @ 0x808E5D8C
    if (!=) goto 0x0x808e5d7c;
    /* li r0, 0 */ // 0x808E5D98
    if (==) goto 0x0x808e5da8;
    /* b 0x808e5dac */ // 0x808E5DA4
    /* li r28, 0 */ // 0x808E5DA8
    /* li r0, 0 */ // 0x808E5DAC
    /* mulli r0, r0, 0xc */ // 0x808E5DB0
    r3 = r28 + r0; // 0x808E5DB4
    r0 = *(0x5c + r3); // lbz @ 0x808E5DB8
    if (==) goto 0x0x808e5e88;
    r3 = r30;
    r4 = r31;
    FUN_808B3CF4(r3, r4); // bl 0x808B3CF4
    /* b 0x808e5e88 */ // 0x808E5DD0
    /* lis r29, 0 */ // 0x808E5DD4
    r3 = *(0 + r29); // lwz @ 0x808E5DD8
    r3 = *(0x98 + r3); // lwz @ 0x808E5DDC
    *(0x13c + r3) = r28; // stw @ 0x808E5DE0
    r3 = *(0 + r29); // lwz @ 0x808E5DE4
    r3 = *(0 + r3); // lwz @ 0x808E5DE8
    r3 = *(0 + r3); // lwz @ 0x808E5DEC
    FUN_808CF8D8(); // bl 0x808CF8D8
    if (==) goto 0x0x808e5e1c;
    r6 = *(0 + r29); // lwz @ 0x808E5DFC
    r3 = r30;
    r5 = r31;
    /* li r4, 0x6d */ // 0x808E5E08
    r6 = *(0x98 + r6); // lwz @ 0x808E5E0C
    *(0x224 + r6) = r28; // stw @ 0x808E5E10
    FUN_808B38C8(r3, r5, r4); // bl 0x808B38C8
    /* b 0x808e5e3c */ // 0x808E5E18
    /* lis r3, 0 */ // 0x808E5E1C
    r3 = *(0 + r3); // lwz @ 0x808E5E20
    *(0xc20 + r3) = r28; // stw @ 0x808E5E24
    FUN_808E614C(r3); // bl 0x808E614C
    r3 = r30;
    r5 = r31;
    /* li r4, 0x6d */ // 0x808E5E34
    FUN_808B38C8(r3, r5, r4); // bl 0x808B38C8
    /* lis r3, 0 */ // 0x808E5E3C
    r4 = r27;
    r3 = *(0 + r3); // lwz @ 0x808E5E44
    FUN_808F7FF8(r4, r3, r4); // bl 0x808F7FF8
    /* lis r3, 0 */ // 0x808E5E4C
    r3 = *(0 + r3); // lwz @ 0x808E5E50
    if (==) goto 0x0x808e5e88;
    r3 = *(0x14 + r3); // lwz @ 0x808E5E5C
    if (==) goto 0x0x808e5e88;
    /* clrlwi r4, r27, 0x18 */ // 0x808E5E68
    /* mulli r0, r4, 0xc */ // 0x808E5E6C
    r3 = r3 + r0; // 0x808E5E70
    r3 = *(0x18 + r3); // lwz @ 0x808E5E74
    if (==) goto 0x0x808e5e88;
    /* li r5, 3 */ // 0x808E5E80
    FUN_808E08F0(r5); // bl 0x808E08F0
    r0 = *(0x24 + r1); // lwz @ 0x808E5E8C
    return;
}