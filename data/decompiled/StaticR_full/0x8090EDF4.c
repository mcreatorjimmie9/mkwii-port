/* Function at 0x8090EDF4, size=204 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_8090EDF4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x8090EE0C
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x8090EE14
    r28 = r3;
    if (==) goto 0x0x8090eed0;
    /* addic. r0, r3, 0x1d4 */ // 0x8090EE20
    if (==) goto 0x0x8090ee4c;
    r0 = *(0x1d4 + r3); // lwz @ 0x8090EE28
    if (==) goto 0x0x8090ee44;
    /* lis r4, 0 */ // 0x8090EE34
    r3 = *(0x1d8 + r3); // lwz @ 0x8090EE38
    r4 = r4 + 0; // 0x8090EE3C
    FUN_805E3430(r4, r4); // bl 0x805E3430
    /* li r0, 0 */ // 0x8090EE44
    *(0x1d4 + r28) = r0; // stw @ 0x8090EE48
    /* addic. r0, r28, 0x168 */ // 0x8090EE4C
    if (==) goto 0x0x8090eec0;
    r0 = *(0x16c + r28); // lwz @ 0x8090EE54
    if (==) goto 0x0x8090ee9c;
    r3 = *(0x170 + r28); // lwz @ 0x8090EE60
    FUN_805E3430(); // bl 0x805E3430
    /* li r31, 0 */ // 0x8090EE68
    /* li r30, 0 */ // 0x8090EE6C
    /* b 0x8090ee88 */ // 0x8090EE70
    r3 = *(0x188 + r28); // lwz @ 0x8090EE74
    /* lwzx r3, r3, r30 */ // 0x8090EE78
    FUN_805E3430(); // bl 0x805E3430
    r30 = r30 + 4; // 0x8090EE80
    r31 = r31 + 1; // 0x8090EE84
    r0 = *(0x16c + r28); // lwz @ 0x8090EE88
    if (<) goto 0x0x8090ee74;
    r3 = *(0x188 + r28); // lwz @ 0x8090EE94
    FUN_805E3430(); // bl 0x805E3430
    r0 = *(0x174 + r28); // lwz @ 0x8090EE9C
    /* li r3, 0 */ // 0x8090EEA0
    *(0x16c + r28) = r3; // stw @ 0x8090EEA4
    if (==) goto 0x0x8090eeb8;
    r3 = *(0x178 + r28); // lwz @ 0x8090EEB0
    FUN_805E3430(r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x8090EEB8
    *(0x174 + r28) = r0; // stw @ 0x8090EEBC
}