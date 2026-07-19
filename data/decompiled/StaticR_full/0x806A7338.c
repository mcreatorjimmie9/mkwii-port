/* Function at 0x806A7338, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806A7338(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806A7344
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806A7350
    r3 = r31 + 0x44; // 0x806A7354
    r4 = r4 + 0; // 0x806A7358
    *(0 + r31) = r4; // stw @ 0x806A735C
    FUN_80668134(r4, r3, r4); // bl 0x80668134
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x806A7368
    r0 = *(0x14 + r1); // lwz @ 0x806A736C
    return;
}