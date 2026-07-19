/* Function at 0x8063D324, size=144 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8063D324(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x8063D32C
    *(0x14 + r1) = r0; // stw @ 0x8063D330
    *(0xc + r1) = r31; // stw @ 0x8063D334
    r31 = r3;
    r3 = *(0x10 + r3); // lwz @ 0x8063D33C
    FUN_805F59D8(r4); // bl 0x805F59D8
    r3 = *(0x10 + r31); // lwz @ 0x8063D344
    /* li r4, 2 */ // 0x8063D348
    r0 = *(0x68 + r3); // lwz @ 0x8063D34C
    if (==) goto 0x0x8063d374;
    if (==) goto 0x0x8063d37c;
    if (==) goto 0x0x8063d384;
    if (==) goto 0x0x8063d38c;
    /* b 0x8063d390 */ // 0x8063D370
    /* li r4, 2 */ // 0x8063D374
    /* b 0x8063d390 */ // 0x8063D378
    /* li r4, 3 */ // 0x8063D37C
    /* b 0x8063d390 */ // 0x8063D380
    /* li r4, 4 */ // 0x8063D384
    /* b 0x8063d390 */ // 0x8063D388
    /* li r4, 5 */ // 0x8063D38C
    /* lis r3, 0 */ // 0x8063D390
    r3 = *(0 + r3); // lwz @ 0x8063D394
    r3 = *(0 + r3); // lwz @ 0x8063D398
    FUN_80685950(r4, r3); // bl 0x80685950
    r0 = *(0x14 + r1); // lwz @ 0x8063D3A0
    r31 = *(0xc + r1); // lwz @ 0x8063D3A4
    return;
}