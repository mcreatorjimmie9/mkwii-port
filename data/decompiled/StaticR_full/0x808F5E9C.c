/* Function at 0x808F5E9C, size=180 bytes */
/* Stack frame: 0 bytes */

void FUN_808F5E9C(int r3, int r4, int r5)
{
    /* li r0, -1 */ // 0x808F5E9C
    *(0 + r3) = r0; // stw @ 0x808F5EA0
    r0 = *(0 + r4); // lwz @ 0x808F5EA4
    /* beqlr  */ // 0x808F5EAC
    if (==) goto 0x0x808f5ed8;
    if (==) goto 0x0x808f5ee4;
    if (==) goto 0x0x808f5ef0;
    if (==) goto 0x0x808f5efc;
    /* b 0x808f5f04 */ // 0x808F5ED0
    return;
    /* li r0, 0 */ // 0x808F5ED8
    *(0 + r3) = r0; // stw @ 0x808F5EDC
    /* b 0x808f5f04 */ // 0x808F5EE0
    /* li r0, 3 */ // 0x808F5EE4
    *(0 + r3) = r0; // stw @ 0x808F5EE8
    /* b 0x808f5f04 */ // 0x808F5EEC
    /* li r0, 6 */ // 0x808F5EF0
    *(0 + r3) = r0; // stw @ 0x808F5EF4
    /* b 0x808f5f04 */ // 0x808F5EF8
    /* li r0, 9 */ // 0x808F5EFC
    *(0 + r3) = r0; // stw @ 0x808F5F00
    r0 = *(4 + r4); // lwz @ 0x808F5F04
    if (==) goto 0x0x808f5f1c;
    if (==) goto 0x0x808f5f2c;
    /* b 0x808f5f38 */ // 0x808F5F18
    r5 = *(0 + r3); // lwz @ 0x808F5F1C
    r0 = r5 + 1; // 0x808F5F20
    *(0 + r3) = r0; // stw @ 0x808F5F24
    /* b 0x808f5f38 */ // 0x808F5F28
    r5 = *(0 + r3); // lwz @ 0x808F5F2C
    r0 = r5 + 2; // 0x808F5F30
    *(0 + r3) = r0; // stw @ 0x808F5F34
    r0 = *(8 + r4); // lwz @ 0x808F5F38
    /* bnelr  */ // 0x808F5F40
    r4 = *(0 + r3); // lwz @ 0x808F5F44
    r0 = r4 + 0xc; // 0x808F5F48
    *(0 + r3) = r0; // stw @ 0x808F5F4C
}