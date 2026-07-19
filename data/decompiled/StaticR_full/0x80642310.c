/* Function at 0x80642310, size=48 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80642310(int r3, int r4, int r5)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x80642318
    /* li r5, 0 */ // 0x8064231C
    *(0x64 + r1) = r0; // stw @ 0x80642320
    *(0x5c + r1) = r31; // stw @ 0x80642324
    r31 = r4;
    r0 = *(0 + r3); // lwz @ 0x80642330
    *(8 + r1) = r0; // stw @ 0x80642338
    FUN_805E3430(r4, r3); // bl 0x805E3430
}