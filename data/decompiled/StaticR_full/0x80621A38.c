/* Function at 0x80621A38, size=44 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80621A38(int r3)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x80621A48
    r31 = r31 + 0; // 0x80621A4C
    *(0x28 + r1) = r30; // stw @ 0x80621A50
    r30 = r3;
    *(0x24 + r1) = r29; // stw @ 0x80621A58
    r29 = *(0x3c + r3); // lha @ 0x80621A5C
    FUN_8061DA88(); // bl 0x8061DA88
}