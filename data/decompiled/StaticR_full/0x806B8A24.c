/* Function at 0x806B8A24, size=368 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_806B8A24(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x18 + r1) = r30; // stw @ 0x806B8A34
    r30 = r3;
    r0 = *(0x7c + r3); // lwz @ 0x806B8A3C
    if (!=) goto 0x0x806b8b7c;
    /* lis r31, 0 */ // 0x806B8A48
    r3 = *(0 + r31); // lwz @ 0x806B8A4C
    FUN_806F58E0(); // bl 0x806F58E0
    if (==) goto 0x0x806b8b7c;
    r3 = *(0 + r31); // lwz @ 0x806B8A5C
    FUN_806F58E8(); // bl 0x806F58E8
    if (==) goto 0x0x806b8a88;
    if (==) goto 0x0x806b8aa4;
    if (==) goto 0x0x806b8ae0;
    if (==) goto 0x0x806b8aec;
    /* b 0x806b8af8 */ // 0x806B8A84
    /* lis r3, 0 */ // 0x806B8A88
    r3 = *(0 + r3); // lwz @ 0x806B8A8C
    r3 = *(0x90 + r3); // lwz @ 0x806B8A90
    FUN_806845FC(r3); // bl 0x806845FC
    /* li r0, 4 */ // 0x806B8A98
    *(0x7c + r30) = r0; // stw @ 0x806B8A9C
    /* b 0x806b8b00 */ // 0x806B8AA0
    r3 = *(0 + r31); // lwz @ 0x806B8AA4
    FUN_806F8718(r4); // bl 0x806F8718
    if (==) goto 0x0x806b8ad4;
    /* lis r3, 0 */ // 0x806B8AB8
    r3 = *(0 + r3); // lwz @ 0x806B8ABC
    r3 = *(0x90 + r3); // lwz @ 0x806B8AC0
    FUN_806845FC(r3); // bl 0x806845FC
    /* li r0, 4 */ // 0x806B8AC8
    *(0x7c + r30) = r0; // stw @ 0x806B8ACC
    /* b 0x806b8b00 */ // 0x806B8AD0
    /* li r0, 5 */ // 0x806B8AD4
    *(0x7c + r30) = r0; // stw @ 0x806B8AD8
    /* b 0x806b8b00 */ // 0x806B8ADC
    /* li r0, 5 */ // 0x806B8AE0
    *(0x7c + r30) = r0; // stw @ 0x806B8AE4
    /* b 0x806b8b00 */ // 0x806B8AE8
    /* li r0, 5 */ // 0x806B8AEC
    *(0x7c + r30) = r0; // stw @ 0x806B8AF0
    /* b 0x806b8b00 */ // 0x806B8AF4
    /* li r0, 5 */ // 0x806B8AF8
    *(0x7c + r30) = r0; // stw @ 0x806B8AFC
    /* lis r3, 0 */ // 0x806B8B00
    r3 = *(0 + r3); // lwz @ 0x806B8B04
    r3 = *(0 + r3); // lwz @ 0x806B8B08
    r30 = *(0x144 + r3); // lwz @ 0x806B8B0C
    if (!=) goto 0x0x806b8b20;
    /* li r30, 0 */ // 0x806B8B18
    /* b 0x806b8b74 */ // 0x806B8B1C
    /* lis r31, 0 */ // 0x806B8B20
    r31 = r31 + 0; // 0x806B8B24
    if (==) goto 0x0x806b8b70;
    r12 = *(0 + r30); // lwz @ 0x806B8B2C
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806B8B34
    /* mtctr r12 */ // 0x806B8B38
    /* bctrl  */ // 0x806B8B3C
    /* b 0x806b8b58 */ // 0x806B8B40
    if (!=) goto 0x0x806b8b54;
    /* li r0, 1 */ // 0x806B8B4C
    /* b 0x806b8b64 */ // 0x806B8B50
    r3 = *(0 + r3); // lwz @ 0x806B8B54
    if (!=) goto 0x0x806b8b44;
    /* li r0, 0 */ // 0x806B8B60
    if (==) goto 0x0x806b8b70;
    /* b 0x806b8b74 */ // 0x806B8B6C
    /* li r30, 0 */ // 0x806B8B70
    r3 = r30;
    FUN_80649164(r3); // bl 0x80649164
    r0 = *(0x24 + r1); // lwz @ 0x806B8B7C
    r31 = *(0x1c + r1); // lwz @ 0x806B8B80
    r30 = *(0x18 + r1); // lwz @ 0x806B8B84
    return;
}