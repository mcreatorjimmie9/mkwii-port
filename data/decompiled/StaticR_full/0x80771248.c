/* Function at 0x80771248, size=72 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80771248(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    *(0x3c + r1) = r31; // stw @ 0x80771258
    r31 = r3;
    r5 = r31 + 0x10; // 0x80771260
    r7 = *(4 + r3); // lwz @ 0x80771264
    r6 = *(0x10 + r7); // lwz @ 0x8077126C
    r0 = *(0x14 + r7); // lwz @ 0x80771270
    *(0x30 + r1) = r0; // stw @ 0x80771274
    *(0x2c + r1) = r6; // stw @ 0x80771278
    r0 = *(0x18 + r7); // lwz @ 0x8077127C
    *(0x34 + r1) = r0; // stw @ 0x80771280
    FUN_805A4498(); // bl 0x805A4498
    FUN_805E3430(r3); // bl 0x805E3430
}