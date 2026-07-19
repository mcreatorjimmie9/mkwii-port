/* Function at 0x80913428, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80913428(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80913438
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80913440
    r30 = r3;
    if (==) goto 0x0x80913498;
    /* lis r5, 0 */ // 0x8091344C
    /* addic. r0, r3, 0xb0 */ // 0x80913450
    r4 = *(0 + r5); // lwz @ 0x80913454
    r0 = r4 + -1; // 0x80913458
    *(0 + r5) = r0; // stw @ 0x8091345C
    if (==) goto 0x0x80913488;
    r0 = *(0xb0 + r3); // lwz @ 0x80913464
    if (==) goto 0x0x80913480;
    /* lis r4, 0 */ // 0x80913470
    r3 = *(0xb4 + r3); // lwz @ 0x80913474
    r4 = r4 + 0; // 0x80913478
    FUN_805E3430(r4, r4); // bl 0x805E3430
    /* li r0, 0 */ // 0x80913480
    *(0xb0 + r30) = r0; // stw @ 0x80913484
    if (<=) goto 0x0x80913498;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8091349C
    r30 = *(8 + r1); // lwz @ 0x809134A0
    r0 = *(0x14 + r1); // lwz @ 0x809134A4
    return;
}