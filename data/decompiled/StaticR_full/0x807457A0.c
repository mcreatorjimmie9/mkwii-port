/* Function at 0x807457A0, size=48 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807457A0(int r3, int r4, int r5)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    /* saved r30 */
    r0 = r3;
    *(0x8c + r1) = r31; // stw @ 0x807457B4
    r31 = r5;
    /* li r5, 0 */ // 0x807457BC
    *(0x88 + r1) = r30; // stw @ 0x807457C0
    r30 = r4;
    r4 = r0;
    FUN_805E3430(r5, r4); // bl 0x805E3430
}