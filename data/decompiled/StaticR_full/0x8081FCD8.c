/* Function at 0x8081FCD8, size=216 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_8081FCD8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x8081FCE4
    r31 = r3;
    r0 = *(0x154 + r3); // lbz @ 0x8081FCEC
    if (==) goto 0x0x8081fd1c;
    r4 = *(0xc + r3); // lwz @ 0x8081FCF8
    r5 = *(0x18 + r3); // lwz @ 0x8081FCFC
    r0 = *(0x78 + r4); // lwz @ 0x8081FD00
    if (!=) goto 0x0x8081fd14;
    /* li r0, 0x14 */ // 0x8081FD0C
    *(0x78 + r4) = r0; // stw @ 0x8081FD10
    /* li r0, 0 */ // 0x8081FD14
    *(0x154 + r3) = r0; // stb @ 0x8081FD18
    /* lis r26, 0 */ // 0x8081FD1C
    /* li r27, 0x10 */ // 0x8081FD20
    /* li r28, 0x14 */ // 0x8081FD24
    /* li r29, 4 */ // 0x8081FD28
    /* li r30, 0 */ // 0x8081FD2C
    /* b 0x8081fd90 */ // 0x8081FD30
    r3 = *(0x50 + r31); // lwz @ 0x8081FD34
    r0 = r3 + -1; // 0x8081FD38
    *(0x50 + r31) = r0; // stw @ 0x8081FD3C
    /* slwi r0, r0, 2 */ // 0x8081FD40
    r4 = r31 + r0; // 0x8081FD44
    r3 = *(0 + r26); // lwz @ 0x8081FD48
    r4 = *(0x20 + r4); // lwz @ 0x8081FD4C
    r0 = *(4 + r4); // lwz @ 0x8081FD50
    /* mulli r0, r0, 0x24 */ // 0x8081FD54
    r3 = r3 + r0; // 0x8081FD58
    r3 = r3 + 0x48; // 0x8081FD5C
    FUN_80820FFC(r3); // bl 0x80820FFC
    r0 = *(0x50 + r31); // lwz @ 0x8081FD64
    if (!=) goto 0x0x8081fd90;
    *(0x14 + r31) = r27; // stw @ 0x8081FD70
    *(0x18 + r31) = r28; // stw @ 0x8081FD74
    *(0x1c + r31) = r29; // stw @ 0x8081FD78
    *(0x20 + r31) = r30; // stw @ 0x8081FD7C
    *(0x24 + r31) = r30; // stw @ 0x8081FD80
    *(0x28 + r31) = r30; // stw @ 0x8081FD84
    *(0x50 + r31) = r30; // stw @ 0x8081FD88
    *(0x54 + r31) = r30; // stw @ 0x8081FD8C
    r0 = *(0x50 + r31); // lwz @ 0x8081FD90
    if (>) goto 0x0x8081fd34;
    r0 = *(0x24 + r1); // lwz @ 0x8081FDA0
    return;
}