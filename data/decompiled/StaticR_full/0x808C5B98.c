/* Function at 0x808C5B98, size=1040 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 14 function(s) */

int FUN_808C5B98(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r4;
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x808C5BB4
    *(0x10 + r1) = r28; // stw @ 0x808C5BB8
    r0 = *(0x240 + r4); // lwz @ 0x808C5BBC
    if (==) goto 0x0x808c5bd8;
    /* lis r3, 0 */ // 0x808C5BC8
    r3 = *(0 + r3); // lwz @ 0x808C5BCC
    r3 = *(0x98 + r3); // lwz @ 0x808C5BD0
    *(0x128 + r3) = r0; // stw @ 0x808C5BD4
    r4 = *(0x240 + r4); // lwz @ 0x808C5BD8
    if (==) goto 0x0x808c5d60;
    if (>=) goto 0x0x808c5c00;
    if (==) goto 0x0x808c5c2c;
    if (>=) goto 0x0x808c5c4c;
    if (==) goto 0x0x808c5c18;
    /* b 0x808c5f68 */ // 0x808C5BFC
    if (==) goto 0x0x808c5f48;
    if (>=) goto 0x0x808c5f68;
    if (>=) goto 0x0x808c5c6c;
    /* b 0x808c5e54 */ // 0x808C5C14
    r3 = r30;
    r5 = r31;
    /* li r4, 0x65 */ // 0x808C5C20
    FUN_808B3ADC(r3, r5, r4); // bl 0x808B3ADC
    /* b 0x808c5f68 */ // 0x808C5C28
    r3 = r30;
    /* li r4, 1 */ // 0x808C5C30
    FUN_808C6148(r4, r3, r4); // bl 0x808C6148
    r3 = r30;
    r5 = r31;
    /* li r4, 0x48 */ // 0x808C5C40
    FUN_808B3FE8(r4, r3, r5, r4); // bl 0x808B3FE8
    /* b 0x808c5f68 */ // 0x808C5C48
    r3 = r30;
    r4 = r4 + 1; // 0x808C5C50
    FUN_808C6148(r4, r3, r4); // bl 0x808C6148
    r3 = r30;
    r5 = r31;
    /* li r4, 0x54 */ // 0x808C5C60
    FUN_808B3FE8(r4, r3, r5, r4); // bl 0x808B3FE8
    /* b 0x808c5f68 */ // 0x808C5C68
    /* lis r3, 0 */ // 0x808C5C6C
    r4 = *(0 + r3); // lwz @ 0x808C5C70
    r3 = *(0x90 + r4); // lwz @ 0x808C5C74
    r0 = *(0x14 + r3); // lbz @ 0x808C5C78
    if (==) goto 0x0x808c5d40;
    r3 = *(0 + r4); // lwz @ 0x808C5C84
    r28 = *(0x13c + r3); // lwz @ 0x808C5C88
    if (!=) goto 0x0x808c5c9c;
    /* li r28, 0 */ // 0x808C5C94
    /* b 0x808c5cf0 */ // 0x808C5C98
    /* lis r29, 0 */ // 0x808C5C9C
    r29 = r29 + 0; // 0x808C5CA0
    if (==) goto 0x0x808c5cec;
    r12 = *(0 + r28); // lwz @ 0x808C5CA8
    r3 = r28;
    r12 = *(0x60 + r12); // lwz @ 0x808C5CB0
    /* mtctr r12 */ // 0x808C5CB4
    /* bctrl  */ // 0x808C5CB8
    /* b 0x808c5cd4 */ // 0x808C5CBC
    if (!=) goto 0x0x808c5cd0;
    /* li r0, 1 */ // 0x808C5CC8
    /* b 0x808c5ce0 */ // 0x808C5CCC
    r3 = *(0 + r3); // lwz @ 0x808C5CD0
    if (!=) goto 0x0x808c5cc0;
    /* li r0, 0 */ // 0x808C5CDC
    if (==) goto 0x0x808c5cec;
    /* b 0x808c5cf0 */ // 0x808C5CE8
    /* li r28, 0 */ // 0x808C5CEC
    r12 = *(0 + r28); // lwz @ 0x808C5CF0
    r3 = r28;
    r12 = *(0x64 + r12); // lwz @ 0x808C5CF8
    /* mtctr r12 */ // 0x808C5CFC
    /* bctrl  */ // 0x808C5D00
    r12 = *(0 + r28); // lwz @ 0x808C5D04
    r3 = r28;
    /* li r4, 0x816 */ // 0x808C5D0C
    /* li r5, 0 */ // 0x808C5D10
    r12 = *(0x68 + r12); // lwz @ 0x808C5D14
    /* mtctr r12 */ // 0x808C5D18
    /* bctrl  */ // 0x808C5D1C
    r12 = *(0 + r30); // lwz @ 0x808C5D20
    r3 = r30;
    /* li r4, 0x4d */ // 0x808C5D28
    /* li r5, 0 */ // 0x808C5D2C
    r12 = *(0x24 + r12); // lwz @ 0x808C5D30
    /* mtctr r12 */ // 0x808C5D34
    /* bctrl  */ // 0x808C5D38
    /* b 0x808c5f68 */ // 0x808C5D3C
    r3 = r30;
    /* li r4, 1 */ // 0x808C5D44
    FUN_808C6148(r3, r4); // bl 0x808C6148
    r3 = r30;
    r5 = r31;
    /* li r4, 0x7a */ // 0x808C5D54
    FUN_808B3FE8(r4, r3, r5, r4); // bl 0x808B3FE8
    /* b 0x808c5f68 */ // 0x808C5D5C
    /* lis r3, 0 */ // 0x808C5D60
    r4 = *(0 + r3); // lwz @ 0x808C5D64
    r3 = *(0x90 + r4); // lwz @ 0x808C5D68
    r0 = *(0x14 + r3); // lbz @ 0x808C5D6C
    if (==) goto 0x0x808c5e34;
    r3 = *(0 + r4); // lwz @ 0x808C5D78
    r28 = *(0x13c + r3); // lwz @ 0x808C5D7C
    if (!=) goto 0x0x808c5d90;
    /* li r28, 0 */ // 0x808C5D88
    /* b 0x808c5de4 */ // 0x808C5D8C
    /* lis r29, 0 */ // 0x808C5D90
    r29 = r29 + 0; // 0x808C5D94
    if (==) goto 0x0x808c5de0;
    r12 = *(0 + r28); // lwz @ 0x808C5D9C
    r3 = r28;
    r12 = *(0x60 + r12); // lwz @ 0x808C5DA4
    /* mtctr r12 */ // 0x808C5DA8
    /* bctrl  */ // 0x808C5DAC
    /* b 0x808c5dc8 */ // 0x808C5DB0
    if (!=) goto 0x0x808c5dc4;
    /* li r0, 1 */ // 0x808C5DBC
    /* b 0x808c5dd4 */ // 0x808C5DC0
    r3 = *(0 + r3); // lwz @ 0x808C5DC4
    if (!=) goto 0x0x808c5db4;
    /* li r0, 0 */ // 0x808C5DD0
    if (==) goto 0x0x808c5de0;
    /* b 0x808c5de4 */ // 0x808C5DDC
    /* li r28, 0 */ // 0x808C5DE0
    r12 = *(0 + r28); // lwz @ 0x808C5DE4
    r3 = r28;
    r12 = *(0x64 + r12); // lwz @ 0x808C5DEC
    /* mtctr r12 */ // 0x808C5DF0
    /* bctrl  */ // 0x808C5DF4
    r12 = *(0 + r28); // lwz @ 0x808C5DF8
    r3 = r28;
    /* li r4, 0x816 */ // 0x808C5E00
    /* li r5, 0 */ // 0x808C5E04
    r12 = *(0x68 + r12); // lwz @ 0x808C5E08
    /* mtctr r12 */ // 0x808C5E0C
    /* bctrl  */ // 0x808C5E10
    r12 = *(0 + r30); // lwz @ 0x808C5E14
    r3 = r30;
    /* li r4, 0x4d */ // 0x808C5E1C
    /* li r5, 0 */ // 0x808C5E20
    r12 = *(0x24 + r12); // lwz @ 0x808C5E24
    /* mtctr r12 */ // 0x808C5E28
    /* bctrl  */ // 0x808C5E2C
    /* b 0x808c5f68 */ // 0x808C5E30
    r3 = r30;
    /* li r4, 1 */ // 0x808C5E38
    FUN_808C6148(r3, r4); // bl 0x808C6148
    r3 = r30;
    r5 = r31;
    /* li r4, 0x55 */ // 0x808C5E48
    FUN_808B3FE8(r4, r3, r5, r4); // bl 0x808B3FE8
    /* b 0x808c5f68 */ // 0x808C5E50
    /* lis r3, 0 */ // 0x808C5E54
    r4 = *(0 + r3); // lwz @ 0x808C5E58
    r3 = *(0x90 + r4); // lwz @ 0x808C5E5C
    r0 = *(0x14 + r3); // lbz @ 0x808C5E60
    if (==) goto 0x0x808c5f28;
    r3 = *(0 + r4); // lwz @ 0x808C5E6C
    r28 = *(0x13c + r3); // lwz @ 0x808C5E70
    if (!=) goto 0x0x808c5e84;
    /* li r28, 0 */ // 0x808C5E7C
    /* b 0x808c5ed8 */ // 0x808C5E80
    /* lis r29, 0 */ // 0x808C5E84
    r29 = r29 + 0; // 0x808C5E88
    if (==) goto 0x0x808c5ed4;
    r12 = *(0 + r28); // lwz @ 0x808C5E90
    r3 = r28;
    r12 = *(0x60 + r12); // lwz @ 0x808C5E98
    /* mtctr r12 */ // 0x808C5E9C
    /* bctrl  */ // 0x808C5EA0
    /* b 0x808c5ebc */ // 0x808C5EA4
    if (!=) goto 0x0x808c5eb8;
    /* li r0, 1 */ // 0x808C5EB0
    /* b 0x808c5ec8 */ // 0x808C5EB4
    r3 = *(0 + r3); // lwz @ 0x808C5EB8
    if (!=) goto 0x0x808c5ea8;
    /* li r0, 0 */ // 0x808C5EC4
    if (==) goto 0x0x808c5ed4;
    /* b 0x808c5ed8 */ // 0x808C5ED0
    /* li r28, 0 */ // 0x808C5ED4
    r12 = *(0 + r28); // lwz @ 0x808C5ED8
    r3 = r28;
    r12 = *(0x64 + r12); // lwz @ 0x808C5EE0
    /* mtctr r12 */ // 0x808C5EE4
    /* bctrl  */ // 0x808C5EE8
    r12 = *(0 + r28); // lwz @ 0x808C5EEC
    r3 = r28;
    /* li r4, 0x816 */ // 0x808C5EF4
    /* li r5, 0 */ // 0x808C5EF8
    r12 = *(0x68 + r12); // lwz @ 0x808C5EFC
    /* mtctr r12 */ // 0x808C5F00
    /* bctrl  */ // 0x808C5F04
    r12 = *(0 + r30); // lwz @ 0x808C5F08
    r3 = r30;
    /* li r4, 0x4d */ // 0x808C5F10
    /* li r5, 0 */ // 0x808C5F14
    r12 = *(0x24 + r12); // lwz @ 0x808C5F18
    /* mtctr r12 */ // 0x808C5F1C
    /* bctrl  */ // 0x808C5F20
    /* b 0x808c5f68 */ // 0x808C5F24
    r3 = r30;
    /* li r4, 2 */ // 0x808C5F2C
    FUN_808C6148(r3, r4); // bl 0x808C6148
    r3 = r30;
    r5 = r31;
    /* li r4, 0x5a */ // 0x808C5F3C
    FUN_808B3FE8(r4, r3, r5, r4); // bl 0x808B3FE8
    /* b 0x808c5f68 */ // 0x808C5F44
    r3 = r30;
    /* li r4, 1 */ // 0x808C5F4C
    FUN_808C6148(r4, r3, r4); // bl 0x808C6148
    /* lis r4, 0 */ // 0x808C5F54
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x808C5F5C
    /* li r4, 0x47 */ // 0x808C5F60
    FUN_808B3E04(r4, r3, r4); // bl 0x808B3E04
    r0 = *(0x240 + r31); // lwz @ 0x808C5F68
    if (==) goto 0x0x808c5f88;
    if (==) goto 0x0x808c5f88;
    r3 = r31;
    /* li r4, 0xd0 */ // 0x808C5F80
    FUN_8064A82C(r3, r4); // bl 0x8064A82C
    r0 = *(0x24 + r1); // lwz @ 0x808C5F88
    r31 = *(0x1c + r1); // lwz @ 0x808C5F8C
    r30 = *(0x18 + r1); // lwz @ 0x808C5F90
    r29 = *(0x14 + r1); // lwz @ 0x808C5F94
    r28 = *(0x10 + r1); // lwz @ 0x808C5F98
    return;
}