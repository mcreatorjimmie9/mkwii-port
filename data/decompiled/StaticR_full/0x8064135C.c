/* Function at 0x8064135C, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8064135C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 0 */ // 0x80641368
    *(0xc + r1) = r31; // stw @ 0x8064136C
    r31 = r3;
    *(0 + r3) = r0; // stw @ 0x80641374
    FUN_80641394(); // bl 0x80641394
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x80641380
    r0 = *(0x14 + r1); // lwz @ 0x80641384
    return;
}