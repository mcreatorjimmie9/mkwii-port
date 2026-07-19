/* Function at 0x805E4A80, size=660 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31 */
/* Calls: 16 function(s) */

int FUN_805E4A80(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    *(0x64 + r1) = r0; // stw @ 0x805E4A8C
    /* li r0, 0 */ // 0x805E4A90
    *(0x5c + r1) = r31; // stw @ 0x805E4A94
    r31 = r4;
    if (==) goto 0x0x805e4aa4;
    /* li r31, 3 */ // 0x805E4AA0
    if (==) goto 0x0x805e4b68;
    if (>=) goto 0x0x805e4ac4;
    if (>=) goto 0x0x805e4ae0;
    if (>=) goto 0x0x805e4ad8;
    /* b 0x805e4cfc */ // 0x805E4AC0
    if (==) goto 0x0x805e4c78;
    if (>=) goto 0x0x805e4cfc;
    if (>=) goto 0x0x805e4bf0;
    /* li r0, 1 */ // 0x805E4AD8
    /* b 0x805e4cfc */ // 0x805E4ADC
    if (==) goto 0x0x805e4b1c;
    /* lis r4, 0 */ // 0x805E4AE8
    r4 = r4 + 0; // 0x805E4AF0
    *(0x44 + r1) = r4; // stw @ 0x805E4AF4
    FUN_805D8434(r4, r3, r4); // bl 0x805D8434
    /* lis r3, 0 */ // 0x805E4AFC
    r3 = *(0 + r3); // lwz @ 0x805E4B04
    FUN_805D91BC(r3, r4); // bl 0x805D91BC
    r4 = r31 + 0xe; // 0x805E4B10
    FUN_805D84B0(r4, r3, r4); // bl 0x805D84B0
    /* b 0x805e4b60 */ // 0x805E4B18
    /* lis r3, 0 */ // 0x805E4B1C
    r5 = *(0 + r3); // lwz @ 0x805E4B20
    r0 = *(0x36 + r5); // lha @ 0x805E4B24
    if (<) goto 0x0x805e4b4c;
    /* lis r3, 1 */ // 0x805E4B30
    /* clrlwi r4, r0, 0x18 */ // 0x805E4B34
    r0 = r3 + -0x6c10; // 0x805E4B38
    r0 = r0 * r4; // 0x805E4B3C
    r3 = r5 + r0; // 0x805E4B40
    r3 = r3 + 0x38; // 0x805E4B44
    /* b 0x805e4b50 */ // 0x805E4B48
    /* li r3, 0 */ // 0x805E4B4C
    /* addis r3, r3, 1 */ // 0x805E4B50
    r4 = r31 + 0xe; // 0x805E4B54
    r3 = r3 + -0x7008; // 0x805E4B58
    FUN_805D84B0(r3, r4, r3); // bl 0x805D84B0
    r0 = r3;
    /* b 0x805e4cfc */ // 0x805E4B64
    if (==) goto 0x0x805e4ba4;
    /* lis r4, 0 */ // 0x805E4B70
    r4 = r4 + 0; // 0x805E4B78
    *(0x30 + r1) = r4; // stw @ 0x805E4B7C
    FUN_805D8434(r4, r3, r4); // bl 0x805D8434
    /* lis r3, 0 */ // 0x805E4B84
    r3 = *(0 + r3); // lwz @ 0x805E4B8C
    FUN_805D91BC(r3, r4); // bl 0x805D91BC
    r4 = r31 + 0x12; // 0x805E4B98
    FUN_805D84B0(r4, r3, r4); // bl 0x805D84B0
    /* b 0x805e4be8 */ // 0x805E4BA0
    /* lis r3, 0 */ // 0x805E4BA4
    r5 = *(0 + r3); // lwz @ 0x805E4BA8
    r0 = *(0x36 + r5); // lha @ 0x805E4BAC
    if (<) goto 0x0x805e4bd4;
    /* lis r3, 1 */ // 0x805E4BB8
    /* clrlwi r4, r0, 0x18 */ // 0x805E4BBC
    r0 = r3 + -0x6c10; // 0x805E4BC0
    r0 = r0 * r4; // 0x805E4BC4
    r3 = r5 + r0; // 0x805E4BC8
    r3 = r3 + 0x38; // 0x805E4BCC
    /* b 0x805e4bd8 */ // 0x805E4BD0
    /* li r3, 0 */ // 0x805E4BD4
    /* addis r3, r3, 1 */ // 0x805E4BD8
    r4 = r31 + 0x12; // 0x805E4BDC
    r3 = r3 + -0x7008; // 0x805E4BE0
    FUN_805D84B0(r3, r4, r3); // bl 0x805D84B0
    r0 = r3;
    /* b 0x805e4cfc */ // 0x805E4BEC
    if (==) goto 0x0x805e4c2c;
    /* lis r4, 0 */ // 0x805E4BF8
    r4 = r4 + 0; // 0x805E4C00
    *(0x1c + r1) = r4; // stw @ 0x805E4C04
    FUN_805D8434(r4, r3, r4); // bl 0x805D8434
    /* lis r3, 0 */ // 0x805E4C0C
    r3 = *(0 + r3); // lwz @ 0x805E4C14
    FUN_805D91BC(r3, r4); // bl 0x805D91BC
    r4 = r31 + 0x16; // 0x805E4C20
    FUN_805D84B0(r4, r3, r4); // bl 0x805D84B0
    /* b 0x805e4c70 */ // 0x805E4C28
    /* lis r3, 0 */ // 0x805E4C2C
    r5 = *(0 + r3); // lwz @ 0x805E4C30
    r0 = *(0x36 + r5); // lha @ 0x805E4C34
    if (<) goto 0x0x805e4c5c;
    /* lis r3, 1 */ // 0x805E4C40
    /* clrlwi r4, r0, 0x18 */ // 0x805E4C44
    r0 = r3 + -0x6c10; // 0x805E4C48
    r0 = r0 * r4; // 0x805E4C4C
    r3 = r5 + r0; // 0x805E4C50
    r3 = r3 + 0x38; // 0x805E4C54
    /* b 0x805e4c60 */ // 0x805E4C58
    /* li r3, 0 */ // 0x805E4C5C
    /* addis r3, r3, 1 */ // 0x805E4C60
    r4 = r31 + 0x16; // 0x805E4C64
    r3 = r3 + -0x7008; // 0x805E4C68
    FUN_805D84B0(r3, r4, r3); // bl 0x805D84B0
    r0 = r3;
    /* b 0x805e4cfc */ // 0x805E4C74
    if (==) goto 0x0x805e4cb4;
    /* lis r4, 0 */ // 0x805E4C80
    r4 = r4 + 0; // 0x805E4C88
    *(8 + r1) = r4; // stw @ 0x805E4C8C
    FUN_805D8434(r4, r3, r4); // bl 0x805D8434
    /* lis r3, 0 */ // 0x805E4C94
    r3 = *(0 + r3); // lwz @ 0x805E4C9C
    FUN_805D91BC(r3, r4); // bl 0x805D91BC
    r4 = r31 + 0x1a; // 0x805E4CA8
    FUN_805D84B0(r4, r3, r4); // bl 0x805D84B0
    /* b 0x805e4cf8 */ // 0x805E4CB0
    /* lis r3, 0 */ // 0x805E4CB4
    r5 = *(0 + r3); // lwz @ 0x805E4CB8
    r0 = *(0x36 + r5); // lha @ 0x805E4CBC
    if (<) goto 0x0x805e4ce4;
    /* lis r3, 1 */ // 0x805E4CC8
    /* clrlwi r4, r0, 0x18 */ // 0x805E4CCC
    r0 = r3 + -0x6c10; // 0x805E4CD0
    r0 = r0 * r4; // 0x805E4CD4
    r3 = r5 + r0; // 0x805E4CD8
    r3 = r3 + 0x38; // 0x805E4CDC
    /* b 0x805e4ce8 */ // 0x805E4CE0
    /* li r3, 0 */ // 0x805E4CE4
    /* addis r3, r3, 1 */ // 0x805E4CE8
    r4 = r31 + 0x1a; // 0x805E4CEC
    r3 = r3 + -0x7008; // 0x805E4CF0
    FUN_805D84B0(r3, r4, r3); // bl 0x805D84B0
    r0 = r3;
    r3 = r0;
    r31 = *(0x5c + r1); // lwz @ 0x805E4D00
    r0 = *(0x64 + r1); // lwz @ 0x805E4D04
    return;
}