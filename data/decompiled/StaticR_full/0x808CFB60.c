/* Function at 0x808CFB60, size=288 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_808CFB60(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x808CFB68
    /* li r5, 0 */ // 0x808CFB6C
    /* li r6, 0 */ // 0x808CFB74
    *(0x1c + r1) = r31; // stw @ 0x808CFB78
    /* lis r31, 0 */ // 0x808CFB7C
    *(0x18 + r1) = r30; // stw @ 0x808CFB80
    *(0x14 + r1) = r29; // stw @ 0x808CFB84
    r29 = r3;
    r7 = r29;
    r4 = *(0 + r4); // lwz @ 0x808CFB90
    r4 = *(0x98 + r4); // lwz @ 0x808CFB94
    *(0x3c8 + r4) = r3; // stw @ 0x808CFB98
    r3 = *(0 + r31); // lwz @ 0x808CFB9C
    r0 = *(0x36 + r3); // lha @ 0x808CFBA0
    /* clrlwi r4, r0, 0x18 */ // 0x808CFBA4
    FUN_805D85CC(); // bl 0x805D85CC
    r3 = *(0 + r31); // lwz @ 0x808CFBAC
    /* addis r31, r3, 2 */ // 0x808CFBB0
    /* b 0x808cfbbc */ // 0x808CFBB4
    FUN_805E3430(); // bl 0x805E3430
    r0 = *(0x5000 + r31); // lbz @ 0x808CFBBC
    if (!=) goto 0x0x808cfbb8;
    /* lis r3, 0 */ // 0x808CFBC8
    r0 = *(0x5004 + r31); // lwz @ 0x808CFBCC
    r3 = *(0 + r3); // lwz @ 0x808CFBD0
    /* li r31, 0 */ // 0x808CFBD4
    r30 = *(0x18 + r3); // lwz @ 0x808CFBD8
    r3 = r30;
    FUN_805ABD4C(r3); // bl 0x805ABD4C
    if (==) goto 0x0x808cfc00;
    r0 = *(4 + r30); // lwz @ 0x808CFBEC
    r0 = r0 rlwinm 0x1e; // rlwinm
    if (!=) goto 0x0x808cfc00;
    /* li r31, 1 */ // 0x808CFBFC
    if (==) goto 0x0x808cfc50;
    /* lis r3, 0 */ // 0x808CFC08
    /* li r0, 3 */ // 0x808CFC0C
    r4 = *(0 + r3); // lwz @ 0x808CFC10
    /* lis r3, 0 */ // 0x808CFC14
    *(0xd18 + r4) = r0; // stw @ 0x808CFC18
    r30 = *(0 + r3); // lwz @ 0x808CFC1C
    r3 = *(0x18 + r30); // lwz @ 0x808CFC20
    FUN_805ABD4C(r3); // bl 0x805ABD4C
    if (==) goto 0x0x808cfc38;
    r4 = *(0x18 + r30); // lwz @ 0x808CFC30
    /* b 0x808cfc3c */ // 0x808CFC34
    /* li r4, 0 */ // 0x808CFC38
    /* lis r3, 0 */ // 0x808CFC3C
    r3 = *(0 + r3); // lwz @ 0x808CFC40
    FUN_805C1484(r4, r3); // bl 0x805C1484
    /* li r3, 1 */ // 0x808CFC48
    /* b 0x808cfc64 */ // 0x808CFC4C
    /* lis r3, 0 */ // 0x808CFC50
    /* li r0, 5 */ // 0x808CFC54
    r4 = *(0 + r3); // lwz @ 0x808CFC58
    /* li r3, 0 */ // 0x808CFC5C
    *(0xd18 + r4) = r0; // stw @ 0x808CFC60
    r0 = *(0x24 + r1); // lwz @ 0x808CFC64
    r31 = *(0x1c + r1); // lwz @ 0x808CFC68
    r30 = *(0x18 + r1); // lwz @ 0x808CFC6C
    r29 = *(0x14 + r1); // lwz @ 0x808CFC70
    return;
}