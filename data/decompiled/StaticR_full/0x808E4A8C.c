/* Function at 0x808E4A8C, size=624 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 8 function(s) */

int FUN_808E4A8C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x808E4AA0
    *(0x14 + r1) = r29; // stw @ 0x808E4AA4
    r0 = *(8 + r3); // lwz @ 0x808E4AA8
    if (!=) goto 0x0x808e4ce0;
    /* lis r30, 0 */ // 0x808E4AB4
    r3 = *(0 + r30); // lwz @ 0x808E4AB8
    r3 = *(0 + r3); // lwz @ 0x808E4ABC
    r3 = *(0 + r3); // lwz @ 0x808E4AC0
    FUN_808CF8D8(); // bl 0x808CF8D8
    if (==) goto 0x0x808e4bc8;
    r3 = *(0 + r30); // lwz @ 0x808E4AD0
    r3 = *(0 + r3); // lwz @ 0x808E4AD4
    r29 = *(0x140 + r3); // lwz @ 0x808E4AD8
    if (!=) goto 0x0x808e4aec;
    /* li r29, 0 */ // 0x808E4AE4
    /* b 0x808e4b40 */ // 0x808E4AE8
    /* lis r30, 0 */ // 0x808E4AEC
    r30 = r30 + 0; // 0x808E4AF0
    if (==) goto 0x0x808e4b3c;
    r12 = *(0 + r29); // lwz @ 0x808E4AF8
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x808E4B00
    /* mtctr r12 */ // 0x808E4B04
    /* bctrl  */ // 0x808E4B08
    /* b 0x808e4b24 */ // 0x808E4B0C
    if (!=) goto 0x0x808e4b20;
    /* li r0, 1 */ // 0x808E4B18
    /* b 0x808e4b30 */ // 0x808E4B1C
    r3 = *(0 + r3); // lwz @ 0x808E4B20
    if (!=) goto 0x0x808e4b10;
    /* li r0, 0 */ // 0x808E4B2C
    if (==) goto 0x0x808e4b3c;
    /* b 0x808e4b40 */ // 0x808E4B38
    /* li r29, 0 */ // 0x808E4B3C
    r12 = *(0 + r29); // lwz @ 0x808E4B40
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x808E4B48
    /* mtctr r12 */ // 0x808E4B4C
    /* bctrl  */ // 0x808E4B50
    r3 = r29;
    /* li r4, 0x1104 */ // 0x808E4B58
    /* li r5, 0 */ // 0x808E4B5C
    FUN_806B2C88(r3, r4, r5); // bl 0x806B2C88
    r3 = r29;
    /* li r4, 0 */ // 0x808E4B68
    /* li r5, 0x10ff */ // 0x808E4B6C
    /* li r6, 0 */ // 0x808E4B70
    /* li r7, -1 */ // 0x808E4B74
    /* li r8, 0 */ // 0x808E4B78
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    r3 = r29;
    /* li r4, 1 */ // 0x808E4B84
    /* li r5, 0x1100 */ // 0x808E4B88
    /* li r6, 0 */ // 0x808E4B8C
    /* li r7, -1 */ // 0x808E4B90
    /* li r8, 0 */ // 0x808E4B94
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    /* li r0, 0 */ // 0x808E4B9C
    *(0x27c + r29) = r0; // stw @ 0x808E4BA0
    r3 = r31;
    /* li r4, 0x4e */ // 0x808E4BA8
    r12 = *(0 + r31); // lwz @ 0x808E4BAC
    /* li r5, 0 */ // 0x808E4BB0
    r12 = *(0x24 + r12); // lwz @ 0x808E4BB4
    /* mtctr r12 */ // 0x808E4BB8
    /* bctrl  */ // 0x808E4BBC
    *(0x1754 + r31) = r3; // stw @ 0x808E4BC0
    /* b 0x808e4ce0 */ // 0x808E4BC4
    r4 = *(0 + r30); // lwz @ 0x808E4BC8
    r3 = *(0 + r4); // lwz @ 0x808E4BCC
    r0 = *(0 + r3); // lwz @ 0x808E4BD0
    if (!=) goto 0x0x808e4cd0;
    r3 = *(0 + r4); // lwz @ 0x808E4BDC
    r29 = *(0x140 + r3); // lwz @ 0x808E4BE0
    if (!=) goto 0x0x808e4bf4;
    /* li r29, 0 */ // 0x808E4BEC
    /* b 0x808e4c48 */ // 0x808E4BF0
    /* lis r30, 0 */ // 0x808E4BF4
    r30 = r30 + 0; // 0x808E4BF8
    if (==) goto 0x0x808e4c44;
    r12 = *(0 + r29); // lwz @ 0x808E4C00
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x808E4C08
    /* mtctr r12 */ // 0x808E4C0C
    /* bctrl  */ // 0x808E4C10
    /* b 0x808e4c2c */ // 0x808E4C14
    if (!=) goto 0x0x808e4c28;
    /* li r0, 1 */ // 0x808E4C20
    /* b 0x808e4c38 */ // 0x808E4C24
    r3 = *(0 + r3); // lwz @ 0x808E4C28
    if (!=) goto 0x0x808e4c18;
    /* li r0, 0 */ // 0x808E4C34
    if (==) goto 0x0x808e4c44;
    /* b 0x808e4c48 */ // 0x808E4C40
    /* li r29, 0 */ // 0x808E4C44
    r12 = *(0 + r29); // lwz @ 0x808E4C48
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x808E4C50
    /* mtctr r12 */ // 0x808E4C54
    /* bctrl  */ // 0x808E4C58
    r3 = r29;
    /* li r4, 0xd8f */ // 0x808E4C60
    /* li r5, 0 */ // 0x808E4C64
    FUN_806B2C88(r3, r4, r5); // bl 0x806B2C88
    r3 = r29;
    /* li r4, 0 */ // 0x808E4C70
    /* li r5, 0x7d2 */ // 0x808E4C74
    /* li r6, 0 */ // 0x808E4C78
    /* li r7, -1 */ // 0x808E4C7C
    /* li r8, 0 */ // 0x808E4C80
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    r3 = r29;
    /* li r4, 1 */ // 0x808E4C8C
    /* li r5, 0x7d3 */ // 0x808E4C90
    /* li r6, 0 */ // 0x808E4C94
    /* li r7, -1 */ // 0x808E4C98
    /* li r8, 0 */ // 0x808E4C9C
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    /* li r0, 1 */ // 0x808E4CA4
    *(0x27c + r29) = r0; // stw @ 0x808E4CA8
    r3 = r31;
    /* li r4, 0x4e */ // 0x808E4CB0
    r12 = *(0 + r31); // lwz @ 0x808E4CB4
    /* li r5, 0 */ // 0x808E4CB8
    r12 = *(0x24 + r12); // lwz @ 0x808E4CBC
    /* mtctr r12 */ // 0x808E4CC0
    /* bctrl  */ // 0x808E4CC4
    *(0x1754 + r31) = r3; // stw @ 0x808E4CC8
    /* b 0x808e4ce0 */ // 0x808E4CCC
    /* lis r4, 0 */ // 0x808E4CD0
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x808E4CD8
    FUN_808B3BEC(r4, r3); // bl 0x808B3BEC
    r0 = *(0x24 + r1); // lwz @ 0x808E4CE0
    r31 = *(0x1c + r1); // lwz @ 0x808E4CE4
    r30 = *(0x18 + r1); // lwz @ 0x808E4CE8
    r29 = *(0x14 + r1); // lwz @ 0x808E4CEC
    return;
}