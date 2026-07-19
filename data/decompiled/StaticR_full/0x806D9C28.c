/* Function at 0x806D9C28, size=300 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_806D9C28(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806D9C30
    *(0x18 + r1) = r30; // stw @ 0x806D9C3C
    *(0x14 + r1) = r29; // stw @ 0x806D9C40
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806D9C48
    FUN_806E69B4(); // bl 0x806E69B4
    if (==) goto 0x0x806d9c64;
    r3 = r29;
    FUN_806D9D54(r3); // bl 0x806D9D54
    /* b 0x806d9d38 */ // 0x806D9C60
    /* lis r3, 0 */ // 0x806D9C64
    r3 = *(0 + r3); // lwz @ 0x806D9C68
    r3 = *(0 + r3); // lwz @ 0x806D9C6C
    r30 = *(0x150 + r3); // lwz @ 0x806D9C70
    if (!=) goto 0x0x806d9c84;
    /* li r30, 0 */ // 0x806D9C7C
    /* b 0x806d9cd8 */ // 0x806D9C80
    /* lis r31, 0 */ // 0x806D9C84
    r31 = r31 + 0; // 0x806D9C88
    if (==) goto 0x0x806d9cd4;
    r12 = *(0 + r30); // lwz @ 0x806D9C90
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806D9C98
    /* mtctr r12 */ // 0x806D9C9C
    /* bctrl  */ // 0x806D9CA0
    /* b 0x806d9cbc */ // 0x806D9CA4
    if (!=) goto 0x0x806d9cb8;
    /* li r0, 1 */ // 0x806D9CB0
    /* b 0x806d9cc8 */ // 0x806D9CB4
    r3 = *(0 + r3); // lwz @ 0x806D9CB8
    if (!=) goto 0x0x806d9ca8;
    /* li r0, 0 */ // 0x806D9CC4
    if (==) goto 0x0x806d9cd4;
    /* b 0x806d9cd8 */ // 0x806D9CD0
    /* li r30, 0 */ // 0x806D9CD4
    r12 = *(0 + r30); // lwz @ 0x806D9CD8
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806D9CE0
    /* mtctr r12 */ // 0x806D9CE4
    /* bctrl  */ // 0x806D9CE8
    r3 = r30;
    /* li r4, 0x17e8 */ // 0x806D9CF0
    /* li r5, 0 */ // 0x806D9CF4
    FUN_8064D8BC(r3, r4, r5); // bl 0x8064D8BC
    r3 = r30;
    /* li r4, 0x17e9 */ // 0x806D9D00
    /* li r5, 0 */ // 0x806D9D04
    FUN_8064D8C4(r5, r3, r4, r5); // bl 0x8064D8C4
    /* li r0, 0 */ // 0x806D9D0C
    *(0x820 + r30) = r0; // stw @ 0x806D9D10
    r3 = r29;
    /* li r4, 0x52 */ // 0x806D9D18
    r12 = *(0 + r29); // lwz @ 0x806D9D1C
    /* li r5, 0 */ // 0x806D9D20
    r12 = *(0x24 + r12); // lwz @ 0x806D9D24
    /* mtctr r12 */ // 0x806D9D28
    /* bctrl  */ // 0x806D9D2C
    /* li r0, 2 */ // 0x806D9D30
    *(0x2874 + r29) = r0; // stw @ 0x806D9D34
    r0 = *(0x24 + r1); // lwz @ 0x806D9D38
    r31 = *(0x1c + r1); // lwz @ 0x806D9D3C
    r30 = *(0x18 + r1); // lwz @ 0x806D9D40
    r29 = *(0x14 + r1); // lwz @ 0x806D9D44
    return;
}