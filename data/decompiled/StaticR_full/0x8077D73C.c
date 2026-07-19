/* Function at 0x8077D73C, size=32 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8077D73C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8077D748
    r31 = r3;
    r4 = *(0x13c + r3); // lwz @ 0x8077D750
    r3 = r4 + 0x74; // 0x8077D754
    FUN_805E3430(r3); // bl 0x805E3430
}