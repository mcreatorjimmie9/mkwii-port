/* Function at 0x8070C8B8, size=48 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_8070C8B8(int r3, int r4)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r4, 0 */ // 0x8070C8C0
    /* lis r31, 0 */ // 0x8070C8CC
    *(0x58 + r1) = r30; // stw @ 0x8070C8D0
    *(0x54 + r1) = r29; // stw @ 0x8070C8D4
    *(0x50 + r1) = r28; // stw @ 0x8070C8D8
    r28 = r3;
    r3 = *(0 + r31); // lwz @ 0x8070C8E0
    FUN_805E3430(); // bl 0x805E3430
}