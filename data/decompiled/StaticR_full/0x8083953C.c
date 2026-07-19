/* Function at 0x8083953C, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8083953C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80839548
    r31 = r3;
    FUN_80828A90(); // bl 0x80828A90
    /* li r3, 0 */ // 0x80839554
    /* li r0, 0xc */ // 0x80839558
    *(0x280 + r31) = r3; // stw @ 0x8083955C
    *(0x2a9 + r31) = r3; // stb @ 0x80839560
    *(0x2aa + r31) = r0; // stb @ 0x80839564
    r31 = *(0xc + r1); // lwz @ 0x80839568
    r0 = *(0x14 + r1); // lwz @ 0x8083956C
    return;
}