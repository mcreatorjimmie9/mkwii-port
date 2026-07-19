/* Function at 0x8078CC1C, size=272 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 10 function(s) */

int FUN_8078CC1C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    *(0x24 + r1) = r0; // stw @ 0x8078CC28
    /* stmw r26, 8(r1) */ // 0x8078CC2C
    r26 = r3;
    r27 = r4;
    if (==) goto 0x0x8078cd3c;
    /* lis r5, 0 */ // 0x8078CC3C
    /* lis r4, 0 */ // 0x8078CC40
    r5 = r5 + 0; // 0x8078CC44
    *(0 + r3) = r5; // stw @ 0x8078CC48
    r29 = *(0 + r4); // lwz @ 0x8078CC4C
    if (==) goto 0x0x8078cd20;
    /* li r0, 0 */ // 0x8078CC58
    *(0 + r4) = r0; // stw @ 0x8078CC5C
    if (==) goto 0x0x8078cd20;
    /* addic. r30, r29, 0xf0 */ // 0x8078CC64
    if (==) goto 0x0x8078ccf0;
    *(0 + r30) = r5; // stw @ 0x8078CC6C
    r28 = *(0 + r4); // lwz @ 0x8078CC70
    if (==) goto 0x0x8078cce4;
    *(0 + r4) = r0; // stw @ 0x8078CC7C
    if (==) goto 0x0x8078cce4;
    /* addic. r31, r28, 0xf0 */ // 0x8078CC84
    if (==) goto 0x0x8078ccb4;
    *(0 + r31) = r5; // stw @ 0x8078CC8C
    r3 = *(0 + r4); // lwz @ 0x8078CC90
    if (==) goto 0x0x8078cca8;
    *(0 + r4) = r0; // stw @ 0x8078CC9C
    /* li r4, 1 */ // 0x8078CCA0
    FUN_8078D050(r4); // bl 0x8078D050
    r3 = r31;
    /* li r4, 0 */ // 0x8078CCAC
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    if (==) goto 0x0x8078ccdc;
    /* lis r4, 0 */ // 0x8078CCBC
    r3 = r28;
    r4 = r4 + 0; // 0x8078CCC4
    *(0 + r28) = r4; // stw @ 0x8078CCC8
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r3 = r28 + 4; // 0x8078CCD0
    /* li r4, -1 */ // 0x8078CCD4
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r3 = r28;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x8078CCE8
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (==) goto 0x0x8078cd18;
    /* lis r4, 0 */ // 0x8078CCF8
    r3 = r29;
    r4 = r4 + 0; // 0x8078CD00
    *(0 + r29) = r4; // stw @ 0x8078CD04
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r3 = r29 + 4; // 0x8078CD0C
    /* li r4, -1 */ // 0x8078CD10
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r3 = r29;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r26;
    /* li r4, 0 */ // 0x8078CD24
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
}