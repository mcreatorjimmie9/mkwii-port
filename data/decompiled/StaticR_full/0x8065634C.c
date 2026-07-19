/* Function at 0x8065634C, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8065634C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r4 = r3;
    *(0x14 + r1) = r0; // stw @ 0x80656358
    *(0xc + r1) = r31; // stw @ 0x8065635C
    /* lis r31, 0 */ // 0x80656360
    r3 = *(0 + r31); // lwz @ 0x80656364
    FUN_806571A4(r4); // bl 0x806571A4
    r3 = *(0 + r31); // lwz @ 0x8065636C
    FUN_80657BF4(); // bl 0x80657BF4
    r0 = *(0x14 + r1); // lwz @ 0x80656374
    r31 = *(0xc + r1); // lwz @ 0x80656378
    return;
}