/* Function at 0x80820BF4, size=224 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_80820BF4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x80820C00
    r31 = r3;
    r0 = *(0x154 + r3); // lbz @ 0x80820C08
    if (==) goto 0x0x80820c38;
    r5 = *(0xc + r3); // lwz @ 0x80820C14
    r4 = *(0x18 + r3); // lwz @ 0x80820C18
    r0 = *(0x78 + r5); // lwz @ 0x80820C1C
    if (!=) goto 0x0x80820c30;
    /* li r0, 0x14 */ // 0x80820C28
    *(0x78 + r5) = r0; // stw @ 0x80820C2C
    /* li r0, 0 */ // 0x80820C30
    *(0x154 + r3) = r0; // stb @ 0x80820C34
    /* lis r26, 0 */ // 0x80820C38
    /* li r27, 0x10 */ // 0x80820C3C
    /* li r28, 0x14 */ // 0x80820C40
    /* li r29, 4 */ // 0x80820C44
    /* li r30, 0 */ // 0x80820C48
    /* b 0x80820cac */ // 0x80820C4C
    r3 = *(0x50 + r31); // lwz @ 0x80820C50
    r0 = r3 + -1; // 0x80820C54
    *(0x50 + r31) = r0; // stw @ 0x80820C58
    /* slwi r0, r0, 2 */ // 0x80820C5C
    r4 = r31 + r0; // 0x80820C60
    r3 = *(0 + r26); // lwz @ 0x80820C64
    r4 = *(0x20 + r4); // lwz @ 0x80820C68
    r0 = *(4 + r4); // lwz @ 0x80820C6C
    /* mulli r0, r0, 0x24 */ // 0x80820C70
    r3 = r3 + r0; // 0x80820C74
    r3 = r3 + 0x48; // 0x80820C78
    FUN_80820FFC(r3); // bl 0x80820FFC
    r0 = *(0x50 + r31); // lwz @ 0x80820C80
    if (!=) goto 0x0x80820cac;
    *(0x14 + r31) = r27; // stw @ 0x80820C8C
    *(0x18 + r31) = r28; // stw @ 0x80820C90
    *(0x1c + r31) = r29; // stw @ 0x80820C94
    *(0x20 + r31) = r30; // stw @ 0x80820C98
    *(0x24 + r31) = r30; // stw @ 0x80820C9C
    *(0x28 + r31) = r30; // stw @ 0x80820CA0
    *(0x50 + r31) = r30; // stw @ 0x80820CA4
    *(0x54 + r31) = r30; // stw @ 0x80820CA8
    r0 = *(0x50 + r31); // lwz @ 0x80820CAC
    if (>) goto 0x0x80820c50;
    /* li r0, 8 */ // 0x80820CB8
    *(0x17c + r31) = r0; // stw @ 0x80820CBC
    r0 = *(0x24 + r1); // lwz @ 0x80820CC4
    return;
}