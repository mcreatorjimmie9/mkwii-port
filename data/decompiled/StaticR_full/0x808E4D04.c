/* Function at 0x808E4D04, size=624 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 8 function(s) */

int FUN_808E4D04(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x808E4D18
    *(0x14 + r1) = r29; // stw @ 0x808E4D1C
    r0 = *(8 + r3); // lwz @ 0x808E4D20
    if (!=) goto 0x0x808e4f58;
    /* lis r30, 0 */ // 0x808E4D2C
    r3 = *(0 + r30); // lwz @ 0x808E4D30
    r3 = *(0 + r3); // lwz @ 0x808E4D34
    r3 = *(0 + r3); // lwz @ 0x808E4D38
    FUN_808CF8D8(); // bl 0x808CF8D8
    if (==) goto 0x0x808e4e40;
    r3 = *(0 + r30); // lwz @ 0x808E4D48
    r3 = *(0 + r3); // lwz @ 0x808E4D4C
    r29 = *(0x140 + r3); // lwz @ 0x808E4D50
    if (!=) goto 0x0x808e4d64;
    /* li r29, 0 */ // 0x808E4D5C
    /* b 0x808e4db8 */ // 0x808E4D60
    /* lis r30, 0 */ // 0x808E4D64
    r30 = r30 + 0; // 0x808E4D68
    if (==) goto 0x0x808e4db4;
    r12 = *(0 + r29); // lwz @ 0x808E4D70
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x808E4D78
    /* mtctr r12 */ // 0x808E4D7C
    /* bctrl  */ // 0x808E4D80
    /* b 0x808e4d9c */ // 0x808E4D84
    if (!=) goto 0x0x808e4d98;
    /* li r0, 1 */ // 0x808E4D90
    /* b 0x808e4da8 */ // 0x808E4D94
    r3 = *(0 + r3); // lwz @ 0x808E4D98
    if (!=) goto 0x0x808e4d88;
    /* li r0, 0 */ // 0x808E4DA4
    if (==) goto 0x0x808e4db4;
    /* b 0x808e4db8 */ // 0x808E4DB0
    /* li r29, 0 */ // 0x808E4DB4
    r12 = *(0 + r29); // lwz @ 0x808E4DB8
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x808E4DC0
    /* mtctr r12 */ // 0x808E4DC4
    /* bctrl  */ // 0x808E4DC8
    r3 = r29;
    /* li r4, 0x1104 */ // 0x808E4DD0
    /* li r5, 0 */ // 0x808E4DD4
    FUN_806B2C88(r3, r4, r5); // bl 0x806B2C88
    r3 = r29;
    /* li r4, 0 */ // 0x808E4DE0
    /* li r5, 0x10ff */ // 0x808E4DE4
    /* li r6, 0 */ // 0x808E4DE8
    /* li r7, -1 */ // 0x808E4DEC
    /* li r8, 0 */ // 0x808E4DF0
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    r3 = r29;
    /* li r4, 1 */ // 0x808E4DFC
    /* li r5, 0x1100 */ // 0x808E4E00
    /* li r6, 0 */ // 0x808E4E04
    /* li r7, -1 */ // 0x808E4E08
    /* li r8, 0 */ // 0x808E4E0C
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    /* li r0, 0 */ // 0x808E4E14
    *(0x27c + r29) = r0; // stw @ 0x808E4E18
    r3 = r31;
    /* li r4, 0x4e */ // 0x808E4E20
    r12 = *(0 + r31); // lwz @ 0x808E4E24
    /* li r5, 0 */ // 0x808E4E28
    r12 = *(0x24 + r12); // lwz @ 0x808E4E2C
    /* mtctr r12 */ // 0x808E4E30
    /* bctrl  */ // 0x808E4E34
    *(0x1754 + r31) = r3; // stw @ 0x808E4E38
    /* b 0x808e4f58 */ // 0x808E4E3C
    r4 = *(0 + r30); // lwz @ 0x808E4E40
    r3 = *(0 + r4); // lwz @ 0x808E4E44
    r0 = *(0 + r3); // lwz @ 0x808E4E48
    if (!=) goto 0x0x808e4f48;
    r3 = *(0 + r4); // lwz @ 0x808E4E54
    r29 = *(0x140 + r3); // lwz @ 0x808E4E58
    if (!=) goto 0x0x808e4e6c;
    /* li r29, 0 */ // 0x808E4E64
    /* b 0x808e4ec0 */ // 0x808E4E68
    /* lis r30, 0 */ // 0x808E4E6C
    r30 = r30 + 0; // 0x808E4E70
    if (==) goto 0x0x808e4ebc;
    r12 = *(0 + r29); // lwz @ 0x808E4E78
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x808E4E80
    /* mtctr r12 */ // 0x808E4E84
    /* bctrl  */ // 0x808E4E88
    /* b 0x808e4ea4 */ // 0x808E4E8C
    if (!=) goto 0x0x808e4ea0;
    /* li r0, 1 */ // 0x808E4E98
    /* b 0x808e4eb0 */ // 0x808E4E9C
    r3 = *(0 + r3); // lwz @ 0x808E4EA0
    if (!=) goto 0x0x808e4e90;
    /* li r0, 0 */ // 0x808E4EAC
    if (==) goto 0x0x808e4ebc;
    /* b 0x808e4ec0 */ // 0x808E4EB8
    /* li r29, 0 */ // 0x808E4EBC
    r12 = *(0 + r29); // lwz @ 0x808E4EC0
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x808E4EC8
    /* mtctr r12 */ // 0x808E4ECC
    /* bctrl  */ // 0x808E4ED0
    r3 = r29;
    /* li r4, 0xd8f */ // 0x808E4ED8
    /* li r5, 0 */ // 0x808E4EDC
    FUN_806B2C88(r3, r4, r5); // bl 0x806B2C88
    r3 = r29;
    /* li r4, 0 */ // 0x808E4EE8
    /* li r5, 0x7d2 */ // 0x808E4EEC
    /* li r6, 0 */ // 0x808E4EF0
    /* li r7, -1 */ // 0x808E4EF4
    /* li r8, 0 */ // 0x808E4EF8
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    r3 = r29;
    /* li r4, 1 */ // 0x808E4F04
    /* li r5, 0x7d3 */ // 0x808E4F08
    /* li r6, 0 */ // 0x808E4F0C
    /* li r7, -1 */ // 0x808E4F10
    /* li r8, 0 */ // 0x808E4F14
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    /* li r0, 1 */ // 0x808E4F1C
    *(0x27c + r29) = r0; // stw @ 0x808E4F20
    r3 = r31;
    /* li r4, 0x4e */ // 0x808E4F28
    r12 = *(0 + r31); // lwz @ 0x808E4F2C
    /* li r5, 0 */ // 0x808E4F30
    r12 = *(0x24 + r12); // lwz @ 0x808E4F34
    /* mtctr r12 */ // 0x808E4F38
    /* bctrl  */ // 0x808E4F3C
    *(0x1754 + r31) = r3; // stw @ 0x808E4F40
    /* b 0x808e4f58 */ // 0x808E4F44
    /* lis r4, 0 */ // 0x808E4F48
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x808E4F50
    FUN_808B3BEC(r4, r3); // bl 0x808B3BEC
    r0 = *(0x24 + r1); // lwz @ 0x808E4F58
    r31 = *(0x1c + r1); // lwz @ 0x808E4F5C
    r30 = *(0x18 + r1); // lwz @ 0x808E4F60
    r29 = *(0x14 + r1); // lwz @ 0x808E4F64
    return;
}