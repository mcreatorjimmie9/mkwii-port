/* Function at 0x8080F158, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8080F158(int r3, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x8080F160
    *(0x14 + r1) = r0; // stw @ 0x8080F164
    *(0xc + r1) = r31; // stw @ 0x8080F168
    r31 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r3, 0 */ // 0x8080F174
    /* li r0, 0 */ // 0x8080F178
    r3 = r3 + 0; // 0x8080F17C
    *(0 + r31) = r3; // stw @ 0x8080F180
    r3 = r31;
    *(0xb0 + r31) = r0; // stw @ 0x8080F188
    r31 = *(0xc + r1); // lwz @ 0x8080F18C
    r0 = *(0x14 + r1); // lwz @ 0x8080F190
    return;
}