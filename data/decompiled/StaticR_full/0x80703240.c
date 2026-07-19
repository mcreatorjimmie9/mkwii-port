/* Function at 0x80703240, size=32 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

void FUN_80703240(int r3)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x80703248
    *(0x44 + r1) = r0; // stw @ 0x8070324C
    *(0x3c + r1) = r31; // stw @ 0x80703250
    r3 = *(0 + r3); // lwz @ 0x80703254
    /* addis r31, r3, 2 */ // 0x80703258
    FUN_805E3430(r3); // bl 0x805E3430
}