/* Function at 0x80807218, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80807218(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80807224
    r31 = r3;
    FUN_808A0278(); // bl 0x808A0278
    r3 = *(8 + r31); // lwz @ 0x80807230
    /* li r4, 2 */ // 0x80807234
    FUN_805ED640(r4); // bl 0x805ED640
    r0 = *(0x14 + r1); // lwz @ 0x8080723C
    r31 = *(0xc + r1); // lwz @ 0x80807240
    return;
}