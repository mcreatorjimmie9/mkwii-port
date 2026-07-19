/* Function at 0x805F515C, size=44 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805F515C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x805F516C
    *(8 + r1) = r30; // stw @ 0x805F5170
    /* li r30, 0 */ // 0x805F5174
    /* b 0x805f5184 */ // 0x805F5178
    r3 = *(0x10 + r3); // lwz @ 0x805F517C
    FUN_805F6410(); // bl 0x805F6410
    r4 = r30;
}